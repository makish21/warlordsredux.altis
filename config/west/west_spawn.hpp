class Spawn {
    class B_Truck_01_medical_F {
        capValue = 1;
        killReward = 100;
        name = "$STR_A3_WL_asset_name_medical_truck_nato";
    }; // HEMMT Spawn Truck

    class B_Slingload_01_Medevac_F {
        killReward = 300;
        loadable[] = { 0, 0, 0 };
        name = "$STR_A3_WL_asset_name_medical_pod_nato";
    }; // Huron Spawn

    class Land_TentA_F {
        garbageCollector = 1;
        name = "$STR_A3_WL_asset_name_deployed_tent";
    };

    class ForwardBaseSupplies {
        cost = 500;
        demolishable = 1;
        killReward = 1000;
        loadable[] = { 0, 0, 0 };
        name = "Forward Base Supplies";
        spawn = "VirtualReammoBox_camonet_F";
    };

    class RuggedTerminal_01_communications_hub_F {
        killReward = 500;
        name = "Forward Base";
    };
};