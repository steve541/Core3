force_crystal_mauls_vengence = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "Maul's Vengence",
	directObjectTemplate = "object/tangible/component/weapon/lightsaber/lightsaber_module_krayt_dragon_pearl.iff",
	craftingValues = {
		{"mindamage",55,55,0},
		{"maxdamage",85,85,0},
		{"attackspeed",1,-1,5},
		{"woundchance",4,8,5},
		{"hitpoints",100000,100000,0},
		{"attackhealthcost",0,5,0},
		{"attackactioncost",0,5,0},
		{"attackmindcost",0,5,0},
		{"forcecost",0,9.9,0},
		{"color",31,31,0},
		{"quality",6,6,0},
	},
	customizationStringNames = {},
	customizationValues = {}
}

addLootItemTemplate("force_crystal_mauls_vengence", force_crystal_mauls_vengence)