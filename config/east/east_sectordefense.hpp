class SectorDefense {
    // class Land_Razorwire_F {
    //     cost = 50;
    //     demolishable = 1;
    //     killReward = 30;
    //     offset[] = {0, 5, 0};
    //     requirements[] = {};
    // };  // "Razor Wire Fence"

    class Land_BagFence_Round_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 2, 0};
        requirements[] = {};
    };  // "Semi Circle Sand bags"

    class Land_DragonsTeeth_01_4x2_new_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 5, 0};
        requirements[] = {};
    };  // "Tank barrier"

    // class Land_GuardTower_01_F {
    //     cost = 50;
    //     demolishable = 1;
    //     killReward = 30;
    //     offset[] = {0, 3, 0};
    //     requirements[] = {};
    // };  // "Guard Tower"

    class Land_HBarrier_5_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 3, 0};
        requirements[] = {};
    }; // "H-barrier"

    class Land_HBarrierWall6_F {
        cost = 60;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 3, 0};
        requirements[] = {};
    }; // "H-barrier wall"

    class CamoNet_OPFOR_big_F {
        cost = 100;
        demolishable = 1;
        garbageCollect = 1;
        killReward = 30;
        offset[] = {0, 6, 0};
        requirements[] = {};
    };  // "Camouflage Vehicle Cover (Hex)"

    class Land_IRMaskingCover_01_F {
        cost = 200;
        demolishable = 1;
        garbageCollect = 1;
        killReward = 30;
        offset[] = {0, 8, 0};
        requirements[] = {};
    };  // "IR Masking Tent (Large)"

    class O_HMG_01_F {
        cost = 150;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.4};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    };  // "Mk30 HMG .50"

    class O_HMG_01_high_F {
        cost = 200;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.8};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    };  // "Mk30 HMG .50 (Raised)"

    class O_GMG_01_F {
        cost = 200;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.4};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    };  // "Mk32 GMG 20 mm"

    class O_GMG_01_high_F {
        cost = 250;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.8};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    };  // "Mk32 GMG 20 mm (Raised)"

    class O_HMG_01_A_F {
        cost = 500;
        demolishable = 1;
        killReward = 150;
        loadable[] = {0, -2.5, 0.4};
        name = "Mk30 HMG Auto Turret";
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green",
                "100Rnd_127x99_mag_Tracer_Green"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    };

    class O_GMG_01_A_F {
        cost = 650;
        demolishable = 1;
        killReward = 150;
        loadable[] = {0, -2.5, 0.4};
        name = "Mk32 GMG Auto Turret";
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    };

    class O_static_AT_F {
        cost = 300;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.2};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles"
            };
            addWeapons[] = {
                "missiles_titan_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "missiles_titan_static"
            };
            turret[] = { 0 };
        };
    };  // "Static Titan Launcher (AT) [CSAT]"

    // class O_static_AT_UP_F {
    //     cost = 700;
    //     demolishable = 1;
    //     description = "Static AT/AA Launcher (UP) is an upgraded variant of the stationary launchers.";
    //     disallowMagazines[] = {
    //         "4Rnd_GAA_missiles",
    //         "5Rnd_GAT_missiles"
    //     };
    //     killReward = 200;
    //     loadable[] = {0, -2.5, 0.2};
    //     name = "Static AT/AA Launcher (UP)";
    //     offset[] = {0, 3, 0};
    //     rearm = 300;
    //     requirements[] = {};
    //     spawn = "O_static_AT_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles",
    //             "2Rnd_GAT_missiles"
    //         };
    //         addWeapons[] = {
    //             "missiles_titan"
    //         };
    //         reloadOverride = 6;
    //         removeMagazines[] = {
    //             "1Rnd_GAT_missiles"
    //         };
    //         removeWeapons[] = {
    //             "missiles_titan_static"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    // class Land_MobileRadar_01_radar_F {
    //     cost = 2500;
    //     demolishable = 1;
    //     description = "EW Tower can be used to jam enemy autonomous assets and provide EW support to your team. It must be placed outside the home base in an owned sector.";
    //     garbageCollect = 1;
    //     killReward = 400;
    //     name = "EW Tower";
    //     offset[] = {0, 6, 0};
    //     requirements[] = {};
    // };

};