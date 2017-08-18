class WeaponShops {
	//SchwarzMarkt Waffen
	class black {
        name = "STR_Shops_C_Sol";
        side = "civ";
        license = "black";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_deagle", "", 28000, -1 },
            { "RH_tec9", "", 30000, -1 },
            { "RH_vz61", "", 30000, -1 },
            { "RH_muzi", "", 32000, -1 }, 
			{ "hlc_rifle_slr107u", "", 300000, -1 },
			{ "hlc_rifle_ak47", "", 250000, -1 },
      		{ "hlc_rifle_ak12", "", 300000, -1 },
			{ "RH_hb", "", 300000, -1 },
			{ "arifle_AN94_F", "", 3000000, -1 },
			{ "AN94_kobra", "", 3500, -1 },
			{ "RH_ar10", "", 3000000, -1 },
			{ "RH_Delft", "", 3000000, -1 },
			{ "hlc_rifle_FAL5061", "", 3000000, -1 },
			{ "hlc_rifle_rpk", "", 3000000, -1 },
			{ "hlc_optic_kobra", "", 3500, -1 },
			{ "RH_barska_rds", "", 3500, -1 },
			{ "optic_Hamr", "", 3500, -1 },
			{ "tf_fadak_3", "", 5000, 25 }
        };
        mags[] = {
            { "RH_7Rnd_50_AE", "", 100 },
			{ "RH_32Rnd_9x19_tec", "", 100 },
			{ "RH_20Rnd_32cal_vz61", "", 100 },
            { "RH_30Rnd_9x19_UZI", "", 100 },
			{ "hlc_30Rnd_762x39_b_ak", "", 100 },
			{ "KA_30Rnd_545x39_7N6M_Ball", "", 100 },
			{ "RH_30Rnd_762x35_FMJ", "", 100 },
			{ "RH_20Rnd_762x51_AR10", "", 100 },
			{ "hlc_30Rnd_545x39_B_AK", "", 100 },
			{ "hlc_20Rnd_762x51_B_fal", "", 100 },
			{ "hlc_30Rnd_762x39_b_ak", "", 100 }
        };
        accs[] = {
            { "RH_hbsd", "", 3500 },
			{ "AN94_MUZZLE_ATG_545", "", 3500 }
        };
    };
	
    //Armory Shops
    class gun {
        name = "Billy Joe's Waffenhandel";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_m9", "", 12000, -1 },
            { "RH_fn57", "", 12000, -1 },
            { "RH_bull", "", 12000, -1 },
            { "optic_Yorris", "", 50, -1 },
            { "RH_g17", "", 12000, -1 },
            { "RH_sbr9", "", 20000, -1 },
			{ "KA_axe", "", 1800, -1 },
			{ "KA_machete", "", 1800, -1 },
			{ "KA_knife", "", 1800, -1 },
			{ "KA_dagger", "", 1800, -1 },
			{ "KA_SilverBaller_L", "", 12000, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 10 },
            { "RH_20Rnd_57x28_FN", "", 50 },
            { "RH_6Rnd_454_Mag", "", 50 },
            { "RH_17Rnd_9x19_g17", "", 50 },
            { "RH_32Rnd_9mm_M822", "", 50 },
			{ "KA_axe_blade", "", 50 },
			{ "KA_machete_blade", "", 50 },
			{ "KA_knife_blade", "", 50 },
			{ "KA_dagger_blade", "", 50 },
			{ "KA_8Rnd_45ACP_Mag", "", 50 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 350 }
        };
    };

    //Basic Shops
    class genstore {
        name = "James Deep´s Baumarkt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ACE_elasticBandage", "", 150, 65 },
			{ "ACE_fieldDressing", "", 100, 65 },
            { "NVGoggles", "", 100, 100 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
            { "tf_fadak_3", "", 50, 25 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tankstellen Baumarkt";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 100, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 100, 35 },
            { "ItemCompass", "", 100, 25 },
            { "ItemWatch", "", 100, -1 },
            { "ACE_elasticBandage", "", 100, 65 },
			{ "ACE_fieldDressing", "", 100, 65 },
            { "NVGoggles", "", 100, 100 },
            { "Chemlight_red", "", 100, -1 },
            { "Chemlight_yellow", "", 100, 50 },
            { "Chemlight_green", "", 100, 50 },
            { "Chemlight_blue", "", 100, 50 },
			{ "ACE_EarPlugs", "", 100, 50 },
			{ "tf_fadak_3", "", 100, 25 }
        };
        mags[] = {};
        accs[] = {};
    };

    class rebel {
        name = "Samir´s Waffenladen";
		side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_deagle", "", 280000, -1 },
            { "RH_tec9", "", 300000, -1 },
            { "RH_vz61", "", 300000, -1 },
            { "RH_muzi", "", 320000, -1 }, 
			{ "hlc_rifle_slr107u", "", 300000, -1 },
			{ "hlc_rifle_ak47", "", 250000, -1 },
      		{ "hlc_rifle_ak12", "", 350000, -1 },
			{ "RH_hb", "", 350000, -1 },
			{ "arifle_AN94_F", "", 350000, -1 },
			{ "AN94_kobra", "", 350000, -1 },
			{ "RH_ar10", "", 350000, -1 },
			{ "RH_Delft", "", 300, -1 },
			{ "hlc_rifle_FAL5061", "", 350000, -1 },
			{ "hlc_optic_kobra", "", 500, -1 },
			{ "RH_barska_rds", "", 350000, -1 },
			{ "optic_Hamr", "", 300, -1 },
			{ "tf_fadak_3", "", 100, 25 },
			{ "ACE_EarPlugs", "", 100, -1 },
			{ "ACE_CableTie", "", 3500, -1 },
			{ "IEDLandSmall_Remote_Mag", "Sprengsatz für Zünder", 1500000, 25 },
			{ "ACE_DeadManSwitch", "Selbsmordzünder", 10000, 25 },
			{ "FHQ_srifle_M2010_DESERT", "", 600000, -1 },
			{ "RH_leu_mk4", "", 3500, -1 },
			{ "RH_ta01nsn_2D", "", 3500, -1 },
			{ "FHQ_arifle_M4std_long_snow", "", 350000, -1 }
			
		};
        mags[] = {
            { "RH_7Rnd_50_AE", "", 100 },
			{ "RH_32Rnd_9x19_tec", "", 100 },
			{ "RH_20Rnd_32cal_vz61", "", 100 },
            { "RH_30Rnd_9x19_UZI", "", 100 },
			{ "hlc_30Rnd_762x39_b_ak", "", 100 },
			{ "KA_30Rnd_545x39_7N6M_Ball", "", 100 },
			{ "RH_30Rnd_762x35_FMJ", "", 100 },
			{ "RH_20Rnd_762x51_AR10", "", 100 },
			{ "hlc_30Rnd_545x39_B_AK", "", 100 },
			{ "hlc_20Rnd_762x51_B_fal", "", 100 },
			{ "hlc_30Rnd_762x39_b_ak", "", 100 },
			{ "FHQ_rem_5Rnd_300Win_M2010", "", 1000 },
			{ "30rnd_556x45_stanag", "", 1000 }
        };
        accs[] = {
            { "RH_hbsd", "", 3500 },
			{ "AN94_MUZZLE_ATG_545", "", 3500 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Polizei Waffenhändler";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NONE", "---Recruit---", 0, { "", "", -1} },
			{ "Taser_26", "Taser", 100, -1 },
			{ "RH_g17", "", 100, -1 },
			{ "KA_UMP40", "", 100, -1 },
			{ "NONE", "---Officer---", 0, { "", "", -1} },
			{ "RH_gsh18", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_40Rnd", "", 100, -1 },
			{ "NONE", "---Sergeant---", 0, { "", "", -1} },
			{ "RH_M4sbr_b", "", 100, -1 },
			{ "NONE", "---Lieutnant---", 0, { "", "", -1} },
			{ "RH_m4", "", 100, -1 },
			{ "NONE", "---Captain---", 0, { "", "", -1} },
			{ "RH_M16A3", "", 100, -1 },
			{ "NONE", "---Zubehör---", 0, { "", "", -1} },
			{ "RH_barska_rds", "", 100, -1 },
			{ "RH_m110sd_t", "", 100, -1 },
			{ "bipod_02_F_tan", "", 100, -1 },
			{ "bipod_02_F_blk", "", 100, -1 },
			{ "SCAR_13_Inches_Barrel", "", 100, -1 },
			{ "KA_SCAR_H_Laser_Flashlight_Black_IR", "", 100, -1 },
			{ "RH_leu_mk4", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 },
			{ "ACE_elasticBandage", "", 100, -1 },
			{ "ACE_EarPlugs", "", 100, -1 },
			{ "ACE_CableTie", "", 100, -1 },
			{ "ACE_fieldDressing", "", 100, -1 },
            { "ARP_Objects_card_red_m", "Schlüsselkarte", 10, 5 },
			{ "NONE", "---SWAT---", 0, { "", "", -1} },
			{ "KA_Px4_Black", "", 100, -1 },
			{ "RH_p226", "", 100, -1 },
			{ "RH_uspm", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_20Rnd", "", 100, -1 },
			{ "KA_UMP40", "", 100, -1 },
			{ "RH_m4", "", 100, -1 },
			{ "RH_Hk416", "", 100, -1 },
			{ "RH_M16A3", "", 100, -1 },
			{ "RH_SR25EC", "", 100, -1 },
			{ "FHQ_arifle_ACR_blk", "", 100, -1 },
			{ "hlc_rifle_auga3_b", "", 100, -1 },
			{ "KA_SCAR_H_Black_Hand", "", 100, -1 },
			{ "RH_m110", "", 100, -1 },
			{ "FHQ_srifle_M2010_BLK", "", 100, -1 },
			{ "KA_DSR50", "", 100, -1 },
			{ "FHQ_smg_p90_black", "", 100, -1 }
        };
        mags[] = {
            { "26_cartridge", "", 10 },
            { "RH_17Rnd_9x19_g17", "", 50 }, 
            { "KA_30Rnd_40SW_FMJ_Mag", "", 50 }, 
			{ "FHQ_50Rnd_57x28_Mag", "", 50 }, 
			{ "KA_40Rnd_46x30_FMJ", "", 50 }, 
			{ "RH_30Rnd_556x45_M855A1", "", 50 },
			{ "NONE", "---SWAT---", 0, { "", "", -1} },
			{ "RH_18Rnd_9x19_gsh", "", 50 }, 
			{ "KA_SCAR_H_20rnd_M59_Ball_mag", "", 50 },
			{ "FHQ_rem_5Rnd_300Win_M2010", "", 50 },
			{ "KA_DSR50_3Rnd_x2_M33_FMJ_Mag", "", 50 },
			{ "RH_30Rnd_556x45_M855A1", "", 50 },
			{ "RH_30Rnd_556x45_M855A1", "", 50 },
			{ "RH_30Rnd_556x45_M855A1", "", 50 },
			{ "RH_20Rnd_762x51_M80A1", "", 50 },
			{ "FHQ_rem_30Rnd_680x43_ACR", "", 50 },
			{ "hlc_30Rnd_556x45_B_AUG", "", 50 },
			{ "KA_Px4_17Rnd_9x19_FMJ_Mag", "", 50 },
			{ "RH_15Rnd_9x19_SIG", "", 50 },
			{ "RH_16Rnd_40cal_usp", "", 50 },
			{ "KA_20Rnd_46x30_FMJ", "", 50 },
			{ "KA_SCAR_H_20rnd_M974_SRTA_T_mag", "", 50 },
			{ "RH_20Rnd_762x51_M80A1", "", 50 }
        };
        accs[] = {};
    };
	class cop_lvl_1 {
        name = "Kadetten Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Taser_26", "Taser", 100, -1 },
			{ "RH_g17", "", 100, -1 },
			{ "KA_UMP40", "", 100, -1 },
			{ "FHQ_smg_p90_black", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_40Rnd", "", 100, -1 },
			{ "RH_M4sbr_b", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 },
            { "ARP_Objects_card_red_m", "Schlüsselkarte", 10, 5 }
        };
        mags[] = {
            { "26_cartridge", "", 10 },
            { "RH_17Rnd_9x19_g17", "", 50 }, 
            { "KA_30Rnd_40SW_FMJ_Mag", "", 50 }, 
			{ "FHQ_50Rnd_57x28_Mag", "", 50 }, 
			{ "KA_40Rnd_46x30_FMJ", "", 50 }, 
			{ "RH_30Rnd_556x45_M855A1", "", 50 }
        };
        accs[] = {};
    };
	class cop_lvl_2 {
        name = "Deputy Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Taser_26", "Taser", 100, -1 },
			{ "RH_g17", "", 100, -1 },
			{ "KA_UMP40", "", 100, -1 },
			{ "FHQ_smg_p90_black", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_40Rnd", "", 100, -1 },
			{ "RH_M4sbr_b", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 },
            { "ARP_Objects_card_red_m", "Schlüsselkarte", 10, 5 }
        };
        mags[] = {
            { "26_cartridge", "", 10 },
            { "RH_17Rnd_9x19_g17", "", 50 }, 
            { "KA_30Rnd_40SW_FMJ_Mag", "", 50 }, 
			{ "FHQ_50Rnd_57x28_Mag", "", 50 }, 
			{ "KA_40Rnd_46x30_FMJ", "", 50 }, 
			{ "RH_30Rnd_556x45_M855A1", "", 50 }
        };
        accs[] = {};
    };
	class cop_lvl_3 {
        name = "Officer+ Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Taser_26", "Taser", 100, -1 },
			{ "RH_g17", "", 100, -1 },
			{ "KA_UMP40", "", 100, -1 },
			{ "FHQ_smg_p90_black", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_40Rnd", "", 100, -1 },
			{ "RH_M4sbr_b", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 },
            { "ARP_Objects_card_red_m", "Schlüsselkarte", 10, 5 }
        };
        mags[] = {
            { "26_cartridge", "", 10 },
            { "RH_17Rnd_9x19_g17", "", 50 }, 
            { "KA_30Rnd_40SW_FMJ_Mag", "", 50 }, 
			{ "FHQ_50Rnd_57x28_Mag", "", 50 }, 
			{ "KA_40Rnd_46x30_FMJ", "", 50 }, 
			{ "RH_30Rnd_556x45_M855A1", "", 50 }
        };
        accs[] = {};
    };
    class cop_swat {
        name = "SWAT Ausrüstung";
        side = "cop";
        license = "swat";
        level[] = { "", "", -1, "" };
        items[] = {
            { "FHQ_srifle_M2010_BLK", "", 100, 100 },
            { "RH_M4A1_ris", "", 100, -1 },
			{ "FHQ_arifle_ACR_blk", "", 100, -1 },
			{ "RH_uspm", "", 100, -1 },
            { "RH_M4A6", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 },
			{ "RH_leu_mk4", "", 100, -1 },
			{ "FHQ_srifle_M2010_DESERT", "", 100, -1 },
			{ "bipod_02_F_tan", "", 100, -1 }
        };
        mags[] = {
            { "FHQ_rem_5Rnd_300Win_M2010", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 50 },
			{ "FHQ_rem_30Rnd_680x43_ACR", "", 50 },
            { "RH_16Rnd_40cal_usp", "", 100 },
            { "RH_30Rnd_68x43_FMJ", "", 100 },
            { "hlc_20Rnd_762x51_B_M14", "", 100 },
            { "RH_30Rnd_68x43_FMJ", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "RH_12Rnd_45cal_usp", "", 100 },
            { "30Rnd_9x21_Mag_SMG_02", "", 100 },
            { "FHQ_rem_5Rnd_300Win_M2010", "", 100 }
        };
        accs[] = {
        };
    };
    class cop_fbi {
        name = "FBI Ausrüstung";
        side = "cop";
        license = "fbi";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_M4sbr_b", "", 100, 100 },
            { "KA_UMP40", "", 100, -1 },
			{ "KA_MP7_Rifle_Black_40Rnd", "", 100, -1 },
			{ "RH_compM2", "", 100, -1 },
			{ "RH_compM2l", "", 100, -1 },
			{ "RH_ta01nsn", "", 100, -1 },
			{ "optic_Hamr", "", 100, -1 }
        };
        mags[] = {
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "KA_30Rnd_40SW_FMJ_Mag", "", 100 },
            { "KA_40Rnd_46x30_FMJ", "", 100 }
        };
        accs[] = {};
    };
	class sec_bar {
        name = "Bar Security Waffen";
        side = "civ";
        license = "sec_bar";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ACE_EarPlugs", "", 10, 10 },
			{ "pmc_earpiece", "", 10, 10 },
			{ "ACE_packingBandage", "", 10, 10 },
            { "Taser_26", "Taser", 100, -1 },
			{ "ACE_CableTie", "", 10, -1 }
        };
        mags[] = {
            { "26_cartridge", "", 10 }
        };
        accs[] = {};
    };
	
	class doj {
        name = "Justiz Waffen";
        side = "civ";
        license = "doj";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ACE_EarPlugs", "", 10, 10 },
			{ "pmc_earpiece", "", 10, 10 },
			{ "ACE_packingBandage", "", 10, 10 },
            { "Taser_26", "Taser", 100, -1 },
			{ "ACE_CableTie", "", 10, -1 }
        };
        mags[] = {
            { "26_cartridge", "", 10 }
        };
        accs[] = {};
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 10, 10 },
            { "Binocular", "", 10, -1 },
            { "ACE_EarPlugs", "", 10, 10 },
			{ "pmc_earpiece", "", 10, 10 },
			{ "ACE_Flashlight_XL50", "", 10, 10 },
            { "ACE_personalAidKit", "", 10, 10 },
			{ "ACE_fieldDressing", "", 10, 10 },
			{ "ACE_elasticBandage", "", 10, 10 },
			{ "ACE_packingBandage", "", 10, 10 },
			{ "ACE_tourniquet", "", 10, 10 },
            { "ACE_salineIV", "", 10, 10 },
            { "ACE_surgicalKit", "", 10, 10 },
            { "ACE_atropine", "", 10, 10 },
            { "ACE_epinephrine", "", 10, 10 },
			{ "ACE_morphine", "", 10, 10 },
            { "ACE_bloodIV", "", 10, 10 },
            { "ACE_plasmaIV", "", 10, 10 }
        };
        mags[] = {};
        accs[] = {};
    };
};