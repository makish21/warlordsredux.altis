class HeavyVehicles {

    class B_APC_Tracked_01_CRV_F {
        aps = 2;
        capValue = 3;
        cost = 1700;
        killReward = 300;
        rearm = 400;
        requirements[] = {};
    }; // "CRV-6e Bobcat"

    // class B_APC_tracked_03_cannon_F {
    //     aps = 2;
    //     capValue = 4;
    //     cost = 2500;
    //     killReward = 400;
    //     name = "FV-720 Mora";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "I_APC_tracked_03_cannon_F";
    //     textures[] = {
    //         "A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
    //         "A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
    //         "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
    //         "A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
    //     };
    // };

    class B_APC_Tracked_01_rcws_F {
        aps = 2;
        capValue = 3;
        cost = 1800;
        killReward = 300;
        rearm = 400;
        requirements[] = {};

        // class Gunner: WLTurretDefaults {
        //     addMagazines[] = {
        //         "60Rnd_30mm_APFSDS_shells_Tracer_Red",
        //         "60Rnd_30mm_APFSDS_shells_Tracer_Red",
        //         "140Rnd_30mm_MP_shells_Tracer_Red",
        //         "140Rnd_30mm_MP_shells_Tracer_Red"
        //     };
        //     addWeapons[] = {
        //         "autocannon_30mm_CTWS"
        //     };
        //     removeMagazines[] = {
        //         "96Rnd_40mm_G_belt"
        //     };
        //     removeWeapons[] = {
        //         "GMG_40mm"
        //     };
        //     turret[] = { 0 };
        // };
    }; // "IFV-6c Panther"

    // class B_LT_01_AT_F {
    //     aps = 1;
    //     capValue = 3;
    //     cost = 1500;
    //     killReward = 240;
    //     name = "AWC Nyx (AT)";
    //     rearm = 300;
    //     requirements[] = {};
    //     spawn = "I_LT_01_AT_F";
    //     textures[] = {
    //         "A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
    //         "A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa",
    //         "a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
    //         "A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
    //     };

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles"
    //         };
    //         addWeapons[] = {
    //             "missiles_Firefist"
    //         };
    //         reloadOverride = 10;
    //         removeMagazines[] = {
    //             "100Rnd_127x99_mag_Tracer_Red"
    //         };
    //         removeWeapons[] = {
    //             "HMG_127"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_APC_Wheeled_01_cannon_F {
        aps = 2;
        capValue = 3;
        cost = 2700;
        killReward = 350;
        rearm = 500;
        requirements[] = {};
    }; // "AMV-7 Marshall"

    // class B_APC_Wheeled_01_recon_F {
    //     aps = 2;
    //     capValue = 1;
    //     cost = 2700;
    //     description = "AMV-7 Marshall (Recon) is a variant of the AMV-7 Marshall armed with a powerful scanner.";
    //     hasHMD = 1;
    //     hasScanner = 1;
    //     killReward = 300;
    //     name = "AMV-7 Marshall (Recon)";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_APC_Wheeled_01_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {};
    //         addWeapons[] = {};
    //         hideTurret = 1;
    //         removeMagazines[] = {
    //             "200Rnd_762x51_Belt_Red",
    //             "40Rnd_40mm_APFSDS_Tracer_Red_shells",
    //             "60Rnd_40mm_GPR_Tracer_Red_shells"
    //         };
    //         removeWeapons[] = {
    //             "LMG_coax",
    //             "autocannon_40mm_CTWS"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_APC_Wheeled_03_cannon_F {
        aps = 2;
        capValue = 3;
        cost = 2900;
        disallowMagazines[] = {
            "4Rnd_GAA_missiles"
        };
        killReward = 350;
        rearm = 500;
        requirements[] = {};
        textures[] = {
            "\A3\armor_f_gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_co.paa",
            "\A3\armor_f_gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext2_co.paa",
            "\A3\armor_f_gamma\APC_Wheeled_03\Data\rcws30_co.paa",
            "\A3\armor_f_gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_alpha_co.paa"
        };

        // class Gunner: WLTurretDefaults {
        //     addMagazines[] = {
        //         "5Rnd_GAT_missiles",
        //         "5Rnd_GAT_missiles"
        //     };
        //     addWeapons[] = {
        //         "missiles_titan"
        //     };
        //     removeMagazines[] = {
        //         "2Rnd_GAT_missiles"
        //     };
        //     removeWeapons[] = {
        //         "missiles_titan"
        //     };
        //     turret[] = { 0 };
        // };
    }; // "AFV-4 Gorgon"

    // class B_APC_Wheeled_01_cannon_up_F {
    //     aps = 2;
    //     capValue = 3;
    //     cost = 3200;
    //     description = "AMV-7 Marshall UP is a variant of the AMV-7 Marshall armed with a larger magazine 40mm cannon.";
    //     killReward = 300;
    //     name = "AMV-7 Marshall UP";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_APC_Wheeled_01_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "240Rnd_40mm_GPR_Tracer_Red_shells",
    //             "240Rnd_40mm_GPR_Tracer_Red_shells",
    //             "160Rnd_40mm_APFSDS_Tracer_Red_shells",
    //             "160Rnd_40mm_APFSDS_Tracer_Red_shells"
    //         };
    //         addWeapons[] = {
    //             "autocannon_40mm_VTOL_01"
    //         };
    //         removeMagazines[] = {
    //             "60Rnd_40mm_GPR_Tracer_Red_shells",
    //             "40Rnd_40mm_APFSDS_Tracer_Red_shells"
    //         };
    //         removeWeapons[] = {
    //             "autocannon_40mm_CTWS"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    // class B_AFV_Wheeled_01_export_cannon_F {
    //     aps = 2;
    //     capValue = 4;
    //     cost = 3700;
    //     description = "Rhino MGS-E is a variant of the Rhino MGS armed with a weaker 105mm cannon.";
    //     killReward = 400;
    //     name = "Rhino MGS-E";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_AFV_Wheeled_01_up_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "40Rnd_105mm_APFSDS_T_Red"
    //         };
    //         addWeapons[] = {
    //             "cannon_105mm"
    //         };
    //         removeMagazines[] = {
    //             "12Rnd_120mm_APFSDS_shells_Tracer_Red",
    //             "8Rnd_120mm_HE_shells_Tracer_Red",
    //             "8Rnd_120mm_HEAT_MP_T_Red",
    //             "4Rnd_120mm_LG_cannon_missiles"
    //         };
    //         removeWeapons[] = {
    //             "cannon_120mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_AFV_Wheeled_01_cannon_F {
        aps = 2;
        capValue = 4;
        cost = 4500;
        killReward = 450;
        rearm = 500;
        requirements[] = {};
    }; // "Rhino MGS"

    class B_AFV_Wheeled_01_up_cannon_F {
        aps = 2;
        capValue = 4;
        cost = 5000;
        killReward = 450;
        rearm = 500;
        requirements[] = {};
    }; // "Rhino MGS UP"

    class B_MBT_01_cannon_F {
        aps = 3;
        capValue = 4;
        cost = 6000;
        disallowMagazines[] = {
            "4Rnd_120mm_LG_cannon_missiles"
        };
        killReward = 500;
        rearm = 600;
        requirements[] = {};
    }; // "M2A1 Slammer"

    class B_MBT_01_TUSK_F {
        aps = 3;
        capValue = 4;
        cost = 7000;
        disallowMagazines[] = {
            "4Rnd_120mm_LG_cannon_missiles"
        };
        killReward = 500;
        rearm = 600;
        requirements[] = {};
    }; // "M2A1 Slammer UP"

    // class B_MBT_03_cannon_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 8000;
    //     disallowMagazines[] = {
    //         "4Rnd_120mm_LG_cannon_missiles"
    //     };
    //     killReward = 500;
    //     name = "M52 Kuma";
    //     rearm = 600;
    //     requirements[] = {};
    //     spawn = "I_MBT_03_cannon_F";
    //     textures[] = {
    //         "src\img\camo\kuma01.jpg",
    //         "src\img\camo\kuma02.jpg",
    //         "src\img\camo\kuma03.jpg",
    //         "\a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    //     };
    // };

    // class B_MBT_01_TUSK_Railgun_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 13000;
    //     description = "M2X Slammer (Railgun) is a variant of the M2A1 Slammer armed with a railgun.";
    //     killReward = 550;
    //     name = "M2X Slammer (Railgun)";
    //     rearm = 600;
    //     requirements[] = {};
    //     spawn = "B_MBT_01_TUSK_F";
    //     variant = 1;
    //
    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "RailGun_01_DummyMagazine",
    //             "60Rnd_75mm_RailGun_APFSDS_mag"
    //         };
    //         addWeapons[] = {
    //             "cannon_railgun",
    //             "cannon_railgun_fake"
    //         };
    //         removeMagazines[] = {
    //             "24Rnd_120mm_APFSDS_shells_Tracer_Red",
    //             "12Rnd_120mm_HE_shells_Tracer_Red",
    //             "12Rnd_120mm_HEAT_MP_T_Red"
    //         };
    //         removeWeapons[] = {
    //             "cannon_120mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_Mortar_01_F {
        cost = 4000;
        demolishable = 1;
        killReward = 125;
        loadable[] = {0, -2.5, 0};
        offset[] = {0, 3, 0};
        rearm = 900;
        requirements[] = {};
    }; // "Mortar"

    // class B_Mortar_01_TV_F {
    //     ammoOverrides[] = {
    //         {"M_127mm_Firefist_AT", {"M_Switchblade", "Switchblade (Loitering Munition)"}}
    //     };
    //     cost = 6000;
    //     demolishable = 1;
    //     description = "Switchblade Launcher is a remote controlled loitering munition launcher. It can be used to effectively engage enemy ground vehicles.";
    //     killReward = 125;
    //     loadable[] = {0, -2.5, 0};
    //     name = "Switchblade Launcher";
    //     offset[] = {0, 3, 0};
    //     rearm = 900;
    //     requirements[] = {};
    //     spawn = "B_Mortar_01_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles"
    //         };
    //         addWeapons[] = {
    //             "missiles_Firefist"
    //         };
    //         removeMagazines[] = {
    //             "8Rnd_82mm_Mo_shells",
    //             "8Rnd_82mm_Mo_Flare_white",
    //             "8Rnd_82mm_Mo_Smoke_white",
    //             "8Rnd_82mm_Mo_guided",
    //             "8Rnd_82mm_Mo_LG"
    //         };
    //         removeWeapons[] = {
    //             "mortar_82mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_Ship_Gun_01_F {
        cost = 10000;
        demolishable = 1;
        // disallowMagazines[] = {
        //     "magazine_ShipCannon_120mm_HE_cluster_shells_x2",
        //     "magazine_ShipCannon_120mm_mine_shells_x6",
        //     "magazine_ShipCannon_120mm_AT_mine_shells_x6"
        // };
        killReward = 500;
        offset[] = {0, 9, 0};
        requirements[] = {};
        rearm = 2700;
    }; // "MK45 Hammer"

    class B_MBT_01_arty_F {
        aps = 1;
        capValue = 4;
        cost = 20000;
        // disallowMagazines[] = {
        //     "2Rnd_155mm_Mo_Cluster",
        //     "2Rnd_155mm_Mo_Cluster_O"
        // };
        killReward = 600;
        rearm = 1800;
        requirements[] = {};
    }; // "M4 Scorcher"

    class B_MBT_01_mlrs_F {
        aps = 1;
        capValue = 4;
        cost = 20000;
        // disallowMagazines[] = {
        //     "12Rnd_230mm_rockets_cluster"
        // };
        killReward = 600;
        rearm = 1800;
        requirements[] = {};
    }; // "M5 Sandstorm MLRS"

    // class B_MBT_01_arty_tv_F {
    //     ammoOverrides[] = {
    //         {"Sh_155mm_AMOS", {"M_Excalibur", "Excalibur (TV-Guided)"}}
    //     };
    //     aps = 1;
    //     capValue = 4;
    //     cost = 30000;
    //     disallowMagazines[] = {
    //         "2Rnd_155mm_Mo_guided",
    //         "4Rnd_155mm_Mo_guided",
    //         "2Rnd_155mm_Mo_LG",
    //         "4Rnd_155mm_Mo_LG",
    //         "6Rnd_155mm_Mo_mine",
    //         "6Rnd_155mm_Mo_AT_mine",
    //         "2Rnd_155mm_Mo_Cluster",
    //         "6Rnd_155mm_Mo_smoke",
    //         "2Rnd_155mm_Mo_guided_O",
    //         "4Rnd_155mm_Mo_guided_O",
    //         "4Rnd_155mm_Mo_LG_O",
    //         "6Rnd_155mm_Mo_mine_O",
    //         "6Rnd_155mm_Mo_AT_mine_O",
    //         "2Rnd_155mm_Mo_Cluster_O",
    //         "6Rnd_155mm_Mo_smoke_O"
    //     };
    //     killReward = 600;
    //     name = "M4 Scorcher UP";
    //     rearm = 1800;
    //     requirements[] = {};
    //     spawn = "B_MBT_01_arty_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {};
    //         addWeapons[] = {};
    //         removeMagazines[] = {
    //             "6Rnd_155mm_Mo_smoke",
    //             "2Rnd_155mm_Mo_guided",
    //             "4Rnd_155mm_Mo_guided",
    //             "2Rnd_155mm_Mo_LG",
    //             "6Rnd_155mm_Mo_mine",
    //             "6Rnd_155mm_Mo_AT_mine",
    //             "2Rnd_155mm_Mo_Cluster"
    //         };
    //         removeWeapons[] = {};
    //         turret[] = { 0 };
    //     };
    // };

    class B_Ship_MRLS_01_F {
        cost = 30000;
        requirements[] = {};
        offset[] = {0, 7, 0};
        rearm = 2700;
        killReward = 700;
    };  // "Mk41 VLS"

};