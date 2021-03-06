
gm_robe = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "GM Robe",
	directObjectTemplate = "object/tangible/wearables/robe/aakuan_robe.iff",
	craftingValues = {},
	customizationStringNames = {},
	customizationValues = {},
	skillMods = {
                      {"resistance_poison", 25},
                      {"saber_block", 25},
                      {"lightsaber_toughness", 25},
                      {"jedi_force_power_max", 250},
                      {"jedi_force_power_regen", 25},
                    },
        customizationStringNames = {},
        customizationValues = {},
        junkDealerTypeNeeded = JUNKCLOTHESANDJEWELLERY,
        junkMinValue = 45,
        junkMaxValue = 90,
}

addLootItemTemplate("gm_robe", gm_robe)
