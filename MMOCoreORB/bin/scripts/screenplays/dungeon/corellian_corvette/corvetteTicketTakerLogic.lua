require("screenplays.screenplay")
local ObjectManager = require("managers.object.object_manager")

FACTIONIMPERIAL = 0xDB4ACC54
FACTIONREBEL = 0x16148850
SIT = 1
STAND = 0
local ticketTemplate = "object/tangible/travel/travel_ticket/dungeon_ticket.iff"

CorvetteTicketTakerLogic = ScreenPlay:new {
	numberOfActs = 1,
	npc = {},
	takerName = "corvetteTicketGiverLogic",
	faction = 0,
	sorryString = "",
	helpMeString = "",
	nevermindString = "",
	aboutMissionString = "",
}

function CorvetteTicketTakerLogic:start()
	self:spawnNpc()
end

function CorvetteTicketTakerLogic:spawnNpc()
	local npcSpawnData = self.npc
	if isZoneEnabled(npcSpawnData.planetName) then
		local pNpc = spawnMobile(npcSpawnData.planetName, npcSpawnData.npcTemplate, 1, npcSpawnData.x, npcSpawnData.z, npcSpawnData.y, npcSpawnData.direction, npcSpawnData.cellID)
		if pNpc ~= nil and npcSpawnData.position == SIT then
			CreatureObject(pNpc):setState(STATESITTINGONCHAIR)
		end
		if (npcSpawnData.mood ~= nil and npcSpawnData.mood ~= "") then
			CreatureObject(pNpc):setMoodString(npcSpawnData.mood)
		end
	end
end

function CorvetteTicketTakerLogic:validateTicket(pPlayer)
	local player = CreatureObject(pPlayer)

	player:sendSystemMessage("@dungeon/space_dungeon:validating_ticket") -- Validating travel authorization. Please stand by...

	local pInventory = player:getSlottedObject("inventory")
	if pInventory == nil then
		player:sendSystemMessageWithTO("@dungeon/space_dungeon:no_ticket", "@dungeon/space_dungeon:corvette_" .. self:getFactionString()) -- You do not have the proper authorization to access the %TO.
		return
	end

	local pInvItem = getContainerObjectByTemplate(pInventory, ticketTemplate, true)

	if pInvItem == nil then
		player:sendSystemMessageWithTO("@dungeon/space_dungeon:no_ticket", "@dungeon/space_dungeon:corvette_" .. self:getFactionString()) -- You do not have the proper authorization to access the %TO.
		return
	end

	local ticket = LuaTicketObject(pInvItem)
	local activeQuestType = getQuestStatus(player:getObjectID() .. ":activeCorvetteQuestType")

	if ticket:getDeparturePoint() ~= self:getFactionString() or ticket:getArrivalPlanet() ~= activeQuestType then
		player:sendSystemMessage("@dungeon/space_dungeon:illegal_ticket") -- That is not the proper travel authorization.
		return
	end

	player:sendSystemMessage("@dungeon/space_dungeon:unable_to_find_dungeon") -- That area is currently unavailable. Please try again later.
end

function CorvetteTicketTakerLogic:getFactionString()
	if self.faction == 0 then
		return "neutral"
	elseif self.faction == FACTIONIMPERIAL then
		return "imperial"
	elseif self.faction == FACTIONREBEL then
		return "rebel"
	end

	return "neutral"
end
