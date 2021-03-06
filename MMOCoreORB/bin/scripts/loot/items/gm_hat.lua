gm_hat = {
        minimumLevel = 0,
        maximumLevel = -1,
        customObjectName = "GM Hat",
        directObjectTemplate = "object/tangible/wearables/hat/nightsister_hat_s02.iff",
        craftingValue = {},
        skillMods = {
                     {"blind_defense", 25},
                     {"block", 25},
                     {"combat_bleeding_defense", 25},
                     {"counterattack", 25},
                     {"dizzy_defense", 25},
                     {"dodge", 25},
                     {"knockdown_defense", 25},
                     {"melee_defense", 25},
                     {"ranged_defense", 25},
                     {"stun_defense", 25},
                    },
        customizationStringNames = {},
        customizationValues = {},
        junkDealerTypeNeeded = JUNKCLOTHESANDJEWELLERY,
        junkMinValue = 45,
        junkMaxValue = 90,
}

addLootItemTemplate("gm_hat", gm_hat)
