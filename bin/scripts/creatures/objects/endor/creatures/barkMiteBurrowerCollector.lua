--Copyright (C) 2008 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
barkMiteBurrowerCollector = Creature:new {
	objectName = "barkMiteBurrowerCollector",  -- Lua Object Name
	creatureType = "ANIMAL",
	faction = "Bark Mite",
	gender = "",

	speciesName = "bark_mite_burrower_collector",
	stfName = "mob/creature_names",
	objectCRC = 2318119001, 
	socialGroup = "Bark Mite",
	

	level = 36,
	

	combatFlags = ATTACKABLE_FLAG + ENEMY_FLAG + AGGRESSIVE_FLAG,

	healthMax = 10600,
	healthMin = 8600,
	strength = 0,
	constitution = 0,

	actionMax = 10600,
	actionMin = 8600,
	quickness = 0,
	stamina = 0,

	mindMax = 10600,
	mindMin = 8600,
	focus = 0,
	willpower = 0,

	height = 1, -- Size of creature
	armor = 1, -- 0 = None; 1 = Light; 2 = Medium; 3 = Heavy
	kinetic = 0,
	energy = 40,
	electricity = 65,
	stun = 0,
	blast = -1,
	heat = 70,
	cold = -1,
	acid = 70,
	lightsaber = 0,

	accuracy = 0,

	healer = 0,

	pack = 1,
	herd = 0,
	stalker = 1,
	killer = 0,
	aggressive = 1,
	invincible = 0, 

	meleeDefense = 1,  
	rangedDefense = 1,

	attackCreatureOnSight = "", -- Enter socialGroups 

	weapon = "", -- File path to weapon -> object\xxx\xxx\xx
	weaponName = "", -- Name ex. 'a Vibrolance'
	weaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
	weaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
	weaponEquipped = 0,
	weaponMinDamage = 0,
	weaponMaxDamage = 0,
	weaponAttackSpeed = 0,
	weaponDamageType = "", -- ELECTRICITY, KINETIC, etc
	weaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

	alternateWeapon = "", -- File path to weapon -> object\xxx\xxx\xx
	alternateWeaponName = "", -- Name ex. 'a Vibrolance'
	alternateWeaponTemp = "", -- Weapon Template ex. 'lance_vibrolance'
	alternateWeaponClass = "", -- Weapon Class ex. 'PolearmMeleeWeapon'
	alternateWeaponEquipped = 0,
	alternateWeaponMinDamage = 0,
	alternateWeaponMaxDamage = 0,
	alternateWeaponAttackSpeed = 0,
	alternateWeaponDamageType = "", -- ELECTRICITY, KINETIC, etc
	alternateWeaponArmorPiercing = "", -- LIGHT, NONE, MEDIUM, HEAVY

	internalNPCDamageModifier = 0.3, -- Damage Modifier to other NPC's

	lootGroup = "0", -- Group it belongs to for loot

	tame = 0.2,  -- Likely hood to be tamed

	milk = 0,

	boneType = "",
	boneMax = 20,

	hideType = "hide_scaley_endor",
	hideMax = 20,

	meatType = "meat_insect_endor",
	meatMax = 35,

	--skills = { " Blind attack", " Stun attack", "" }
	skills = { "barkMiteAttack3", "barkMiteAttack4" },
	respawnTimer = 60,

	behaviorScript = "", -- Link to the behavior script for this object
}

Creatures:addCreature(barkMiteBurrowerCollector, 2318119001) --  Add to Global Table
