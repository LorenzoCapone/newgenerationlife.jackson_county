/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "POP_CHAW3_D3", "", 15, { "", "", -1 } },
			{ "Arabian_dress2", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F24", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F25", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F16", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F17", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F18", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F19", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F20", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F21", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F22", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F23", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F15", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F26", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F27", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F28", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F29", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F30", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F31", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F32", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F33", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F34", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F35", "", 15, { "", "", -1 } },
            { "Arabian_dress", "", 15, { "", "", -1 } },
            { "Arabian_dress_black", "", 15, { "", "", -1 } },
            { "Arabian_dress_brown", "", 15, { "", "", -1 } },
            { "Arabian_dress_grey", "", 15, { "", "", -1 } },
            { "Arabian_dress1", "", 15, { "", "", -1 } },
            { "Arabian_dress4", "", 15, { "", "", -1 } },
            { "Arabian_dress2", "", 15, { "", "", -1 } },
            { "cg_awesome1", "", 15, { "", "", -1 } },
            { "cg_beats1", "", 15, { "", "", -1 } },
            { "cg_burgerking1", "", 15, { "", "", -1 } },
			{ "cg_dad1", "", 15, { "", "", -1 } },
            { "cg_deeznuts1", "", 15, { "", "", -1 } },
            { "cg_ea1", "", 15, { "", "", -1 } },
            { "cg_evolution1", "", 15, { "", "", -1 } },
            { "cg_ferrari1", "", 15, { "", "", -1 } },
            { "cg_fightclub1", "", 15, { "", "", -1 } },
            { "cg_gameover1", "", 15, { "", "", -1 } },
            { "cg_hearts1", "", 15, { "", "", -1 } },
            { "cg_homer1", "", 15, { "", "", -1 } },
            { "cg_kfc1", "", 15, { "", "", -1 } },
            { "cg_lambo1", "", 15, { "", "", -1 } },
            { "cg_lego1", "", 15, { "", "", -1 } },
            { "cg_loading1", "", 15, { "", "", -1 } },
            { "cg_lsd1", "", 15, { "", "", -1 } },
            { "cg_mario1", "", 15, { "", "", -1 } },
            { "cg_mayan1", "", 15, { "", "", -1 } },
            { "cg_masterrace1", "", 15, { "", "", -1 } },
            { "cg_pika1", "", 15, { "", "", -1 } },
            { "cg_strippers1", "", 15, { "", "", -1 } },
            { "cg_turtles1", "", 15, { "", "", -1 } },
            { "EF_FEM_2U", "", 15, { "", "", -1 } },
            { "EF_FEM_2BK", "", 15, { "", "", -1 } },
            { "EF_FEM_3_2", "", 15, { "", "", -1 } },
            { "GyBlBr_uni", "", 15, { "", "", -1 } },
            { "kingfish_uni", "", 15, { "", "", -1 } },
            { "kdcl_Civ_6", "", 15, { "", "", -1 } },
            { "MotherTrucker_uni", "", 15, { "", "", -1 } },
            { "OrBlBr_uni", "", 15, { "", "", -1 } },
            { "OrGnGy_uni", "", 15, { "", "", -1 } },
            { "A3L_Worker_Outfit", "", 15, { "", "", -1 } },
            { "kdcl_Civ_11", "", 15, { "", "", -1 } },
            { "BreakingBad", "", 15, { "", "", -1 } },
            { "tacobell", "", 15, { "", "", -1 } },
            { "kdcl_Civ_2", "", 15, { "", "", -1 } },
            { "kdcl_Civ_3", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F6", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F5", "", 15, { "", "", -1 } },
            { "norway", "", 15, { "", "", -1 } },
            { "nvidia", "", 15, { "", "", -1 } },
            { "A3L_Poop2day", "", 15, { "", "", -1 } },
            { "KAEL_SUITS_BR_F13", "", 15, { "", "", -1 } },
			{ "A3L_Bikini_Girl", "", 15, { "", "", -1 } },
			{ "A3L_Priest_Uniform", "", 15, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "A3L_Legoman", "Legokopf", 10, { "", "", -1 } },
            { "A3L_Halloween_PredatorMask", "Predator Maske", 10, { "", "", -1 } },
            { "A3L_Halloween_Pumpkinhead", "", 10, { "", "", -1 } },
            { "A3L_SkateHelmet_green", "Skate Helm 1", 10, { "", "", -1 } },
            { "A3L_soa_helmet", "Skate Helm 2", 10, { "", "", -1 } },
            { "Kio_Afro_Hat", "Afro", 10, { "", "", -1 } },
            { "Kio_Capital_Hat", "", 10, { "", "", -1 } },
            { "A3L_crown", "", 10, { "", "", -1 } },
            { "jokermask", "", 10, { "", "", -1 } },
            { "A3L_longhairblack", "", 10, { "", "", -1 } },
            { "A3L_longhairblond", "", 10, { "", "", -1 } },
            { "A3L_longhairbrown", "", 10, { "", "", -1 } },
            { "A3L_mexicanhat", "Sombrero", 10, { "", "", -1 } },
            { "Kio_No1_Hat", "", 10, { "", "", -1 } },
            { "Kio_Pirate_Hat", "", 10, { "", "", -1 } },
            { "Kio_Santa_Hat", "", 10, { "", "", -1 } },
            { "A3L_sombrero", "Sombrero 2", 10, { "", "", -1 } },
            { "Kio_Spinning_Hat", "", 10, { "", "", -1 } },
            { "turban", "", 10, { "", "", -1 } },
            { "A3L_russianhat", "", 10, { "", "", -1 } },
            { "Kio_Hat", "", 10, { "", "", -1 } },
            { "A3L_gangster_hat", "", 10, { "", "", -1 } },
            { "A3L_Halloween_JigSaw", "", 10, { "", "", -1 } },
            { "A3L_Mask", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Shades_Green", "", 10, { "", "", -1 } },
            { "G_Shades_Red", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 10, { "", "", -1 } },
            { "G_Sport_Red", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "EWK_Cigar2", "", 10, { "", "", -1 } },
            { "EWK_Glasses_Cig1", "", 10, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BK", "", 10, { "", "", -1 } },
            { "TRYK_Beard", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BW", "", 10, { "", "", -1 } },
            { "TRYK_Beard_Gr", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BK2", "", 10, { "", "", -1 } },
            { "TRYK_Beard2", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BW2", "", 10, { "", "", -1 } },
            { "TRYK_Beard_Gr2", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BK3", "", 10, { "", "", -1 } },
            { "TRYK_Beard3", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BW3", "", 10, { "", "", -1 } },
            { "TRYK_Beard_Gr3", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BK4", "", 10, { "", "", -1 } },
            { "TRYK_Beard4", "", 10, { "", "", -1 } },
            { "TRYK_Beard_BW4", "", 10, { "", "", -1 } },
            { "TRYK_Beard_Gr4", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
			{ "k_cut_2","", 10, { "", "", -1 } },
			{ "k_cut_5","", 10, { "", "", -1 } },
			{ "k_cut_4","", 10, { "", "", -1 } },
			{ "k_cut_3","", 10, { "", "", -1 } },
			{ "k_cut_1","", 10, { "", "", -1 } },
			{ "k_cut_6","", 10, { "", "", -1 } },
			{ "k_cut_11","", 10, { "", "", -1 } },
			{ "k_cut_7","", 10, { "", "", -1 } },
			{ "V_Press_F","", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_dgtl_F", "", 10, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 10, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 10, { "", "", -1 } },
            { "B_Bergen_tna_F", "", 10, { "", "", -1 } },
            { "B_Carryall_cbr", "", 10, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 10, { "", "", -1 } },
            { "B_Carryall_khk", "", 10, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 10, { "", "", -1 } },
            { "B_Carryall_oli", "", 10, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 10, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 10, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 10, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 10, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 10, { "", "", -1 } },
            { "TRYK_B_Alicepack", "", 10, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack", "", 10, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_OD", "", 10, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_WH", "", 10, { "", "", -1 } },
            { "TRYK_B_Kitbag_aaf", "", 10, { "", "", -1 } },
            { "TRYK_B_Kitbag_blk", "", 10, { "", "", -1 } },
            { "TRYK_B_tube_blk", "", 10, { "", "", -1 } },
            { "CUP_B_ACRPara_m95", "", 10, { "", "", -1 } }
        };
    };
    class cop {
        title = "STR_Shops_C_Police";
        license = "cop";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
      		{ "NONE", "---APD---", 0, { "", "", -1} },
      		{ "E_LV_Praktikant", "Praktikant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Cadett", "Cadett", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Officer", "Officer", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_PatrolOfficer", "Patrol", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_MPatrolOfficer", "Master Patrol", , { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Sergeant", "Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_MasterSergeant", "Master Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Lieutenant", "Lieutenant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Detective", "Detective", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_AssChief", "Ass Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_DepChief", "Dep Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LV_Chief", "Chief APD", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "NONE", "---Sheriff---", 0, { "", "", -1} },
      		{ "E_LC_Praktikant", "Praktikant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Officer", "Officer", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_PatrolOfficer", "Patrol", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_MPatrolOfficer", "Master Patrol", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Sergeant", "Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_MasterSergeant", "Master Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Lieutenant", "Lieutenant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Detective", "Detective", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Captain", "Captain", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_AssChief", "ASS Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_DepChief", "DEP Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LC_Chief", "Chief Sherif", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Fox_Sert", "Sheriff Einsatz", 10, { "life_coplevel", "SCALAR", 4} },
			{ "NONE", "---SWAT---", 0, { "", "", -1} },
			{ "herpSERT1", "SWAT 1", 10, { "life_coplevel", "SCALAR", 1} },
			{ "CG_SERT2", "SWAT 2", 10, { "life_coplevel", "SCALAR", 1} },
		{ "NONE", "---FBI---", 0, { "", "", -1} },
		{ "A3L_ECSO_CID_Jacket3", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_ECSO_CID_Jacket2", "FBI 2", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_ECSO_CID_Jacket1", "FBI 3", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_ECSO_Patrol_Jacket", "FBI 4", 10, { "life_coplevel", "SCALAR", 5} },
		{ "FBI_uni", "FBI 5", 10, { "life_coplevel", "SCALAR", 5} },
		{ "EF_HMFBI_2", "FBI 8", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_FBI_Jacket", "FBI 9", 10, { "life_coplevel", "SCALAR", 5} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
      		{ "AM_PatrolHat", "Polizei Mütze", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Campaign_Hat_Tan", "Sheriff Hut", 10, { "life_coplevel", "SCALAR", 1} },
			{ "Campaign_Hat_Dark", "State Hut", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "TRYK_R_CAP_BLK", "Basecap", 10, { "life_coplevel", "SCALAR", 1} },
			{ "NONE", "---SWAT---", 0, { "", "", -1} },
			{ "TCG_swathelmet", "Swat-Helm", 10, { "life_coplevel", "SCALAR", 1} },
			{ "CG_sert_H3", "Swat-Helm 2", 10, { "life_coplevel", "SCALAR", 1} },
		{ "NONE", "---FBI---", 0, { "", "", -1} },
		{ "ALE_H_Cowboy_Black", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "TRYK_H_FBI", "FBI 2", 10, { "life_coplevel", "SCALAR", 5} },
		{ "LSMS_cap_blue", "FBI 3", 10, { "life_coplevel", "SCALAR", 5} },
		{ "LSMS_cap_blk", "FBI 4", 10, { "life_coplevel", "SCALAR", 5} },
		{ "ALE_H_NewEra_Black", "FBI 5", 10, { "life_coplevel", "SCALAR", 5} },
		{ "ALE_H_NewEra_Superman", "FBI 6", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_sargehat", "FBI 7", 10, { "life_coplevel", "SCALAR", 5} },
		{ "TRYK_H_woolhat", "FBI 8", 10, { "life_coplevel", "SCALAR", 5} }
								
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "Brille", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Mask_M40", "Gasmaske 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Mask_M10", "Gasmaske 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "G_Bandanna_aviator", "Pilot", 10, { "life_coplevel", "SCALAR", 1} },
			{ "G_Bandanna_beast", "Beast", 10, { "life_coplevel", "SCALAR", 1} },
			{ "TRYK_kio_balaclava_ear", "Maske", 10, { "life_coplevel", "SCALAR", 1} },
			{ "murshun_cigs_cig2", "Zigarette", 10, { "life_coplevel", "SCALAR", 1} }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
      		{ "S_VHO_OV_COP_2", "Polizei Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_police_vest", "Polizei Weste 2", 10, { "life_coplevel", "SCALAR", 1} },
			{ "S_VHO_OV_COP_2_2", "State Police Weste", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_BLK_4", "Polizei Weste 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_BLK_1", "Polizei Weste 4", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_BLK_3", "Polizei Weste 5", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_BLK_2", "Polizei Weste 6", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_95_1", "Sheriff Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_95_2", "Sheriff Weste 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_PV_95", "Sheriff Weste 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_OV_95_7", "Sheriff Einsatz", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SERT_VEST_GREEN", "Sheriff Einsatz", 10, { "life_coplevel", "SCALAR", 4} },
			{ "NONE", "---SWAT---", 0, { "", "", -1} },
			{ "TCG_swatvest1", "SWAT Einsatz", 10, { "life_coplevel", "SCALAR", 4} },
			{ "metroswat3", "SWAT Einsatz 2", 10, { "life_coplevel", "SCALAR", 4} },
		{ "NONE", "---FBI---", 0, { "", "", -1} },
		{ "FBI_TAN_TACTICAL", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "FBI_BLK_TACTICAL", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "A3L_fbivest1", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "TRYK_V_tacv1LC_FBI_BK", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "TRYK_V_tacv1LC_FBI2_BK", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} },
		{ "TRYK_V_tacv1_FBI_BK", "FBI 1", 10, { "life_coplevel", "SCALAR", 5} }
		
		
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_rt1523g_big_rhs", "Funkrucksack", 10, { "", "", -1 } }
        };
    };

	class fbi {
        title = "STR_Shops_C_FBI";
        license = "fbi";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "BluePlaid_uni", "FBI Uniform 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "GreenPlaid_uni", "FBI Uniform 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "OrangePlaid_uni", "FBI Uniform 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "PinkPlaid_uni", "FBI Uniform 4", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "RedPlaid_uni", "FBI Uniform 5", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "YellowPlaid_uni", "FBI Uniform 6", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "TRYK_U_B_ACUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ACU", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C01_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C02_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3cr", "", 10, {"", "", -1} },
            { "TRYK_U_B_3c", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN", "", 10, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN", "", 10, {"", "", -1} },
            { "TRYK_U_B_Sage_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDU", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ACUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ACU", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C01_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C02_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3cr", "", 10, {"", "", -1} },
            { "TRYK_U_B_3c", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN", "", 10, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN", "", 10, {"", "", -1} },
            { "TRYK_U_B_Sage_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDU", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 10, {"", "", -1} },            
			{ "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_GRYOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_GRYOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Desert", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Wood", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Wood_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_WOOD_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_OD_OD_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_OD_OD_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodtan_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodtanR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANTAN_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_JSDF_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_JSDF_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood3c_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood3c_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_WOOD_MARPAT_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "A3L_Bikini_Girl", "", 10, {"", "", -1} },
            { "A3L_Priest_Uniform", "", 10, {"", "", -1} },
            { "kdcl_Civ_1", "", 10, {"", "", -1} },
            { "kdcl_Civ_11", "", 10, {"", "", -1} },
            { "BreakingBad", "", 10, {"", "", -1} },
            { "kdcl_Civ_2", "", 10, {"", "", -1} },
            { "nvidia", "", 10, {"", "", -1} },
            { "U_B_CombatUniform_mcam", "", 10, {"", "", -1} },
            { "U_I_CombatUniform", "", 10, {"", "", -1} },
            { "B_Fem_SPEC_Tyler", "", 10, {"", "", -1} },
            { "U_O_CombatUniform_ocamo", "", 10, {"", "", -1} },
            { "U_O_CombatUniform_oucamo", "", 10, {"", "", -1} },
            { "U_B_PilotCoveralls", "", 10, {"", "", -1} },
            { "U_C_Scientist", "", 10, {"", "", -1} },
            { "U_B_survival_uniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Ranger_BDU", "", 10, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "kio_skl_msk_grn", "", 10, { "", "", -1 } },
            { "kio_skl_msk", "", 10, { "", "", -1 } },
            { "kio_skl_msk_red", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_MTP", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_OD", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_CS95", "", 10, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "Basecap", 10, { "", "", -1} }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "Brille", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Mask_M40", "Gasmaske 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Mask_M10", "Gasmaske 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_BeardB", "Bart 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_BeardD", "Bart 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_BeardG", "Bart 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_BeardO", "Bart 4", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_moustacheB", "Moustache 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_moustacheD", "Moustache 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_moustacheG", "Moustache 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SFG_Tac_moustacheO", "Moustache 4", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "TRYK_kio_balaclavas", "Ghost Maske", 10, { "life_coplevel", "SCALAR", 1} },
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10, { "", "", -1 } },
            { "G_Balaclava_combat", "", 10, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 10, { "", "", -1 } },
            { "G_Balaclava_oli", "", 10, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 10, { "", "", -1 } },
            { "G_Bandanna_beast", "", 10, { "", "", -1 } },
            { "G_Bandanna_blk", "", 10, { "", "", -1 } },
            { "G_Bandanna_khk", "", 10, { "", "", -1 } },
            { "G_Bandanna_oli", "", 10, { "", "", -1 } },
            { "G_Bandanna_shades", "", 10, { "", "", -1 } },
            { "G_Bandanna_sport", "", 10, { "", "", -1 } },
            { "G_Bandanna_tan", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_coyo", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_ACU", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_wood", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_blk", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR2_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Brown2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_khk2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR1_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_coyo2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Delta2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Ranger2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_tan2", "", 10, { "", "", -1 } },
      		{ "S_VHO_OV_COP_2", "Polizei Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_swat_vest", "SWAT Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_sniper_vest", "SWAT Weste 2", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "SWATvest1", "SWAT Weste 3", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "S_VHO_PV_MTP", "SEART", 10, { "life_coplevel", "SCALAR", 1} },
            { "A3L_fbivest1", "FBI Weste", 10, { "life_coplevel", "SCALAR", 1} },
            { "TRYK_V_PlateCarrier_coyo", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_ACU", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_wood", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_blk", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR2_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Brown2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_khk2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR1_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_coyo2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Delta2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Ranger2", "", 10, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 10, { "", "", -1 } },
            { "REB_VEST_BLACK", "", 10, { "", "", -1 } },
            { "REB_VEST_DESERT", "", 10, { "", "", -1 } },
            { "REB_VEST_DIGI", "", 10, { "", "", -1 } },
            { "REB_VEST_JUNGLE", "", 10, { "", "", -1 } },
            { "REB_VEST_PINK", "", 10, { "", "", -1 } },
            { "REB_VEST_URBAN", "", 10, { "", "", -1 } },
            { "S_VHO_LV_951", "", 10, { "", "", -1 } },
            { "S_VHO_LV_952", "", 10, { "", "", -1 } },
            { "S_VHO_LV_MTP1", "", 10, { "", "", -1 } },
            { "S_VHO_LV_MTP2", "", 10, { "", "", -1 } },
            { "S_VHO_OV_OD_4", "", 10, { "", "", -1 } },
            { "V_TacVest_blk", "", 10, { "", "", -1 } },
            { "V_TacVest_brn", "", 10, { "", "", -1 } },
            { "V_TacVest_camo", "", 10, { "", "", -1 } },
            { "REB_vest_base", "", 10, { "", "", -1 } },
            { "V_TacVest_khk", "", 10, { "", "", -1 } },
            { "V_TacVest_oli", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_tan2", "", 10, { "", "", -1 } },
            { "REB_VEST_BLACK", "", 10, { "", "", -1 } },
            { "REB_VEST_DESERT", "", 10, { "", "", -1 } },
            { "REB_VEST_DIGI", "", 10, { "", "", -1 } },
            { "REB_VEST_JUNGLE", "", 10, { "", "", -1 } },
            { "REB_VEST_PINK", "", 10, { "", "", -1 } },
            { "REB_VEST_URBAN", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_rt1523g_big_rhs", "Funkrucksack", 10, { "", "", -1 } }
        };
    };

	 class swat {
        title = "STR_Shops_C_SWAT";
        license = "swat";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
      		{ "NONE", "---State---", 10, { "", "", -1} },
      		{ "E_LVSP_Praktikant", "Praktikant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_Cadett", "Cadett", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_PatrolOfficer", "Patrol Officer", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_MPatrolOfficer", "Master Patrol", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_Sergeant", "Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      //	{ "", "Master Sergeant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_Lieutenant", "Lieutenant", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_Detective", "Detective", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_AssChief", "ASS Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_DepChief", "DEP Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "E_LVSP_Chief", "Chief", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "NONE", "---Einsatz---", 0, { "", "", -1} },
      		{ "demian2435_swat_man_uniform", "SWAT Uniform", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_swat_sniper_uniform", "SWAT Sniper", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "Fox_Sert", "SERT Uniform", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_swat_man_uniform", "SWAT Uniform", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_swat_sniper_uniform", "SWAT-Sniper Uniform 3", 10, { "life_coplevel", "SCALAR", 1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
      		{ "Campaign_Hat_Dark", "State Hut", 10, { "life_coplevel", "SCALAR", 1} },
      		{ "demian2435_swat_helmet", "SWAT Helm", 10, { "life_coplevel", "SCALAR", 1} },
            { "demian2435_sniper_cap", "SWAT Mütze", 10, { "life_coplevel", "SCALAR", 1} },
			{ "TRYK_R_CAP_BLK", "Basecap", 10, { "life_coplevel", "SCALAR", 1} }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "Brille", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "Mask_M40", "Gasmaske 1", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "Mask_M10", "Gasmaske 2", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "TRYK_kio_balaclavas", "Ghost Maske", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "G_Bandanna_aviator", "Pilot", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "G_Bandanna_beast", "Beast", 10, { "life_coplevel", "SCALAR", 1} }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
      			{ "S_VHO_OV_COP_2", "Polizei Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "S_VHO_OV_COP_2_2", "State Weste", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "demian2435_swat_vest", "SWAT Weste 1", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "demian2435_sniper_vest", "SWAT Weste 2", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "SWATvest1", "SWAT Weste 3", 10, { "life_coplevel", "SCALAR", 1} },
      			{ "S_VHO_PV_MTP", "SEART", 10, { "life_coplevel", "SCALAR", 1} }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			      { "tf_rt1523g_big_rhs", "Funkrucksack", 10, { "", "", -1 } }
        };
    };


    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Weste entfernen", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Rucksack entfernen", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Uniform entfernen", 0, { "", "", -1 } },
            { "medic4_uni1", "EMS Uniform 1", 10, { "life_medicLevel", "SCALAR", 1 } },
            { "mr_uni1", "EMS Uniform 2", 10, { "life_medicLevel", "SCALAR", 4 } },
			{ "POP_CHAW2_D", "ABC Schutz", 10, { "life_medicLevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "paramedic_cap", "", 10, { "", "", -1 } },
            { "EMS_B_DC", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "Mask_M40", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
			{ "S_VHO_LV_EMS2", "Medic Weste 1", 10, { "life_medicLevel", "SCALAR", 8 } },
			{ "S_VHO_LV_EMS1", "Medic Weste 2", 10, { "life_medicLevel", "SCALAR", 1 } },
			{ "ems1_vest", "Medic Weste 3", 10, { "life_medicLevel", "SCALAR", 1 } },
			{ "ems2_vest", "Medic Weste 4", 10, { "life_medicLevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_rt1523g_big_rhs", "Lang Funk", 10, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 10, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Uniform entfernen", 0, { "", "", -1 } },
            { "TRYK_U_B_ACUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ACU", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C01_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C02_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3cr", "", 10, {"", "", -1} },
            { "TRYK_U_B_3c", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN", "", 10, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN", "", 10, {"", "", -1} },
            { "TRYK_U_B_Sage_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDU", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 10, {"", "", -1} },            
			{ "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_GRYOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_GRYOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Desert", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Wood", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_Wood_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_WOOD_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_OD_OD_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_OD_OD_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodtan_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodtanR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_TANTAN_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_JSDF_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_JSDF_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_woodR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood3c_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_wood3c_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_WOOD_MARPAT_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "U_B_CombatUniform_mcam", "", 10, {"", "", -1} },
            { "U_I_CombatUniform", "", 10, {"", "", -1} },
            { "B_Fem_SPEC_Tyler", "", 10, {"", "", -1} },
            { "U_O_CombatUniform_ocamo", "", 10, {"", "", -1} },
            { "U_O_CombatUniform_oucamo", "", 10, {"", "", -1} },
            { "U_B_PilotCoveralls", "", 10, {"", "", -1} },
            { "U_C_Scientist", "", 10, {"", "", -1} },
            { "U_B_survival_uniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Ranger_BDU", "", 10, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "kio_skl_msk_grn", "", 10, { "", "", -1 } },
            { "kio_skl_msk", "", 10, { "", "", -1 } },
            { "kio_skl_msk_red", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_MTP", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_OD", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_CS95", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 10, { "", "", -1 } },
            { "G_Balaclava_combat", "", 10, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 10, { "", "", -1 } },
            { "G_Balaclava_oli", "", 10, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 10, { "", "", -1 } },
            { "G_Bandanna_beast", "", 10, { "", "", -1 } },
            { "G_Bandanna_blk", "", 10, { "", "", -1 } },
            { "G_Bandanna_khk", "", 10, { "", "", -1 } },
            { "G_Bandanna_oli", "", 10, { "", "", -1 } },
            { "G_Bandanna_shades", "", 10, { "", "", -1 } },
            { "G_Bandanna_sport", "", 10, { "", "", -1 } },
            { "G_Bandanna_tan", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_coyo", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_ACU", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_wood", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_blk", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR2_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Brown2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_khk2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR1_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_coyo2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Delta2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Ranger2", "", 10, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 10, { "", "", -1 } },
            { "REB_VEST_BLACK", "", 10, { "", "", -1 } },
            { "REB_VEST_DESERT", "", 10, { "", "", -1 } },
            { "REB_VEST_DIGI", "", 10, { "", "", -1 } },
            { "REB_VEST_JUNGLE", "", 10, { "", "", -1 } },
            { "REB_VEST_PINK", "", 10, { "", "", -1 } },
            { "REB_VEST_URBAN", "", 10, { "", "", -1 } },
            { "S_VHO_LV_951", "", 10, { "", "", -1 } },
            { "S_VHO_LV_952", "", 10, { "", "", -1 } },
            { "S_VHO_LV_MTP1", "", 10, { "", "", -1 } },
            { "S_VHO_LV_MTP2", "", 10, { "", "", -1 } },
            { "S_VHO_OV_OD_4", "", 10, { "", "", -1 } },
            { "V_TacVest_blk", "", 10, { "", "", -1 } },
            { "V_TacVest_brn", "", 10, { "", "", -1 } },
            { "V_TacVest_camo", "", 10, { "", "", -1 } },
            { "REB_vest_base", "", 10, { "", "", -1 } },
            { "V_TacVest_khk", "", 10, { "", "", -1 } },
            { "V_TacVest_oli", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_tan2", "", 10, { "", "", -1 } },
            { "REB_VEST_BLACK", "", 10, { "", "", -1 } },
            { "REB_VEST_DESERT", "", 10, { "", "", -1 } },
            { "REB_VEST_DIGI", "", 10, { "", "", -1 } },
            { "REB_VEST_JUNGLE", "", 10, { "", "", -1 } },
            { "REB_VEST_PINK", "", 10, { "", "", -1 } },
            { "REB_VEST_URBAN", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 10, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10, { "", "", -1 } },
            { "gravity_Marshall_1_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_blk_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 10, { "", "", -1 } },
            { "B_TacticalPack_olive", "", 10, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 10, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 10, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 10, { "", "", -1 } },
            { "B_FieldPack_blk", "", 10, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 10, { "", "", -1 } },
            { "B_Bergen_sgg", "", 10, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 10, { "", "", -1 } },
            { "B_Bergen_rgr", "", 10, { "", "", -1 } },
            { "B_Bergen_blk", "", 10, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 10, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 10, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 10, { "", "", -1 } },
            { "B_Carryall_oli", "", 10, { "", "", -1 } },
			{ "tf_mr3000", "", 10, { "", "", -1 } }
        };
    };

	class black {
        title = "STR_Shops_C_Black";
        license = "black";
        side = "civ";
        uniforms[] = {
            { "NONE", "Uniform entfernen", 0, { "", "", -1 } },
            { "TRYK_U_B_ACUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ACU", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C01_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_C02_Tsirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3cr", "", 10, {"", "", -1} },
            { "TRYK_U_B_3c", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK3CD", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLKTAN", "", 10, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_BLK_OD", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_ODTAN", "", 10, {"", "", -1} },
            { "TRYK_U_B_Sage_Tshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDU", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 10, {"", "", -1} },
            { "TRYK_U_B_3CD_Ranger_BDU", "", 10, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "kio_skl_msk_grn", "", 10, { "", "", -1 } },
            { "kio_skl_msk", "", 10, { "", "", -1 } },
            { "kio_skl_msk_red", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_MTP", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_OD", "", 10, { "", "", -1 } },
            { "S_VHO_H_MK7_CS95", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Combat", "", 12, { "", "", -1 } },
            { "G_Balaclava_blk", "", 15, { "", "", -1 } },
            { "G_Balaclava_combat", "", 15, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 15, { "", "", -1 } },
            { "G_Balaclava_oli", "", 15, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 15, { "", "", -1 } },
            { "G_Bandanna_beast", "", 15, { "", "", -1 } },
            { "G_Bandanna_blk", "", 15, { "", "", -1 } },
            { "G_Bandanna_khk", "", 15, { "", "", -1 } },
            { "G_Bandanna_oli", "", 15, { "", "", -1 } },
            { "G_Bandanna_shades", "", 15, { "", "", -1 } },
            { "G_Bandanna_sport", "", 15, { "", "", -1 } },
            { "G_Bandanna_tan", "", 15, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_coyo", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_ACU", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_wood", "", 10, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_blk", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR2_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Brown2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_khk2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_AOR1_2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_coyo2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Delta2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_Ranger2", "", 10, { "", "", -1 } },
            { "TRYK_V_ArmorVest_tan2", "", 10, { "", "", -1 } },
            { "REB_VEST_BLACK", "", 10, { "", "", -1 } },
            { "REB_VEST_DESERT", "", 10, { "", "", -1 } },
            { "REB_VEST_DIGI", "", 10, { "", "", -1 } },
            { "REB_VEST_JUNGLE", "", 10, { "", "", -1 } },
            { "REB_VEST_PINK", "", 10, { "", "", -1 } },
            { "REB_VEST_URBAN", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 10, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 10, { "", "", -1 } },
            { "gravity_Marshall_1_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_blk_blk", "", 10, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 10, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 10, { "", "", -1 } },
            { "B_TacticalPack_olive", "", 10, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 10, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 10, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 10, { "", "", -1 } },
            { "B_FieldPack_blk", "", 10, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 10, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 10, { "", "", -1 } },
            { "B_Bergen_sgg", "", 10, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 10, { "", "", -1 } },
            { "B_Bergen_rgr", "", 10, { "", "", -1 } },
            { "B_Bergen_blk", "", 10, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 10, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 10, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 10, { "", "", -1 } },
            { "B_Carryall_oli", "", 10, { "", "", -1 } },
            { "B_Carryall_khk", "", 10, { "", "", -1 } },
            { "B_Carryall_cbr", "", 10, { "", "", -1 } },
			{ "tf_mr3000", "", 10, { "", "", -1 } }
        };
    };

	class sol {
        title = "STR_Shops_C_Sol";
        license = "sol";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "Sentinel_Soldier_H", "", 10, { "", "", -1 } },
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "AU_01_780000_v1", "", 10, { "", "", -1 } },
            { "H_Cap_tan", "", 210, { "", "", -1 } },
			{ "dkDesM01_Helmet", "", 210, { "", "", -1 } },
			{ "demian2435_sniper_cap", "", 210, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 10, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 10, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
			{ "dkDesM01_PlateCarrier1", "", 10, { "", "", -1 } }
		};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_mr3000", "", 10, { "", "", -1 } }
        };
    };
	
	class sec_bar {
        title = "STR_Shops_C_Sol";
        license = "sec_bar";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "kdcl_COP_SEC", "", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "AU_08_780000_v1", "", 10, { "", "", -1 } },
            { "AU_01_780000_v1", "", 210, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
			{ "k_cut_2", "", 10, { "", "", -1 } }
		};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_mr3000", "", 10, { "", "", -1 } }
        };
    };

	class doj {
        title = "STR_Shops_C_Sol";
        license = "doj";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "KAEL_SUITS_BLK_F", "", 10, { "", "", -1 } },
            { "A3L_Suit_Uniform", "", 10, { "", "", -1 } },
            { "doj_uni", "", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "AU_04_780000_v1", "", 10, { "", "", -1 } },
            { "AU_07_780000_v1", "", 210, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } },
			{ "A3L_deptjvest1", "", 10, { "", "", -1 } }
		};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 10, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 10, { "", "", -1 } },
            { "U_C_Driver_2", "", 10, { "", "", -1 } },
            { "U_C_Driver_1", "", 10, { "", "", -1 } },
            { "U_C_Driver_3", "", 10, { "", "", -1 } },
            { "U_C_Driver_4", "", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 10, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Weste", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
