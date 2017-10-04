/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Main CfgVehicles config file

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgVehicles.hpp
*/
/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgVehicles
{
    class Static;
    class Const_Ghost_EPOCH : Static {};
    class Animated_Loot : Static {};
    class NonStrategic;
    class WeaponHolder;
    class Man;
    class CAManBase : Man
    {
        scope = 0;
        class ViewPilot;
        class HitPoints
        {
            class HitHead;
            class HitBody;
            class HitHands;
            class HitLegs;
        };
    };
    class EPOCH_CAManBase : CAManBase
    {
        scope = 0;
        class HitPoints : HitPoints
        {
            class HitFace : HitHead
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis : HitBody
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.16;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms : HitHands
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs : HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        armor = 2;
        armorStructural = 0.4;
        explosionShielding = 0.04;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
    };
    class Civilian2 : EPOCH_CAManBase
    {
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_civilian_s"};
                speechPlural[] = {"veh_infantry_civilian_p"};
            };
        };
        textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
        textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
        nameSound = "veh_infantry_civilian_s";
        author = "$STR_A3_Bohemia_Interactive";
        side = 3;
        scope = 0;
        displayName = "$STR_DN_CIVILIAN";
        class HitPoints : HitPoints
        {
            class HitHead : HitHead
            {
                armor = 1;
            };
            class HitBody : HitBody
            {
                armor = 2;
            };
            class HitHands : HitHands
            {
                armor = 2;
            };
            class HitLegs : HitLegs
            {
                armor = 2;
            };
            class HitFace : HitFace {};
            class HitNeck : HitNeck {};
            class HitPelvis : HitPelvis {};
            class HitAbdomen : HitAbdomen {};
            class HitDiaphragm : HitDiaphragm {};
            class HitChest : HitChest {};
            class HitArms : HitArms {};
        };
        accuracy = 1.6;
        camouflage = 1.2;
        threat[] = {0,0,0};
        magazines[] = {};
        cost = 100000;
        minHeadTurnAI = -50;
        maxHeadTurnAI = 50;
        formationX = 2;
        formationZ = 5;
        class Wounds
        {
            tex[] = {};
            mat[] = {};
        };
        class EventHandlers;
        primaryAmmoCoef = 0;
        secondaryAmmoCoef = 0;
        handgunAmmoCoef = 0;
    };
    class Civilian : CAManBase
    {
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_civilian_s"};
                speechPlural[] = {"veh_infantry_civilian_p"};
            };
        };
        textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
        textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
        nameSound = "veh_infantry_civilian_s";
        author = "$STR_A3_Bohemia_Interactive";
        side = 3;
        scope = 0;
        displayName = "$STR_DN_CIVILIAN";
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.16;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        accuracy = 1.6;
        camouflage = 1.2;
        threat[] = {0,0,0};
        magazines[] = {};
        cost = 100000;
        minHeadTurnAI = -50;
        maxHeadTurnAI = 50;
        formationX = 2;
        formationZ = 5;
        class Wounds
        {
            tex[] = {};
            mat[] = {};
        };
        class EventHandlers;
        primaryAmmoCoef = 0;
        secondaryAmmoCoef = 0;
        handgunAmmoCoef = 0;
    };
    class Civilian_F : Civilian
    {
        scope = 0;
        modelsides[] = {3,2,0};
    };
    class C_man_1 : Civilian_F
    {
        modelsides[] = {3,2,0};
    };
    class C_man_1_1_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_Driver_1_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_man_p_fugitive_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_man_w_worker_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_man_hunter_1_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_journalist_F : C_man_1
    {
        modelsides[] = {3,2,0};
    };
    class C_scientist_F : C_man_w_worker_F
    {
        modelsides[] = {3,2,0};
    };
    class VirtualMan_F;
    class VirtualMan_EPOCH : VirtualMan_F
    {
        displayName = "$STR_EPOCH_EpochPlayerSlot";
        weapons[] = {};
        class Eventhandlers
        {
            init = "_this call EPOCH_localCleanup;";
        };
    };
    class I_Soldier_base_F;
    class I_Soldier_EPOCH : I_Soldier_base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
        scope = 2;
        displayName = "$STR_EPOCH_EpochMilitiaSoldier";
        cost = 90000;
        camouflage = 1.2;
        uniformClass = "";
        weapons[] = {"hgun_PDW2000_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","hgun_ACPC2_F","Throw","Put"};
        Items[] = {"FAK"};
        RespawnItems[] = {"FAK"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        linkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
        respawnLinkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
    };
    class I_Soldier2_EPOCH : I_Soldier_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
        scope = 2;
        displayName = "$STR_EPOCH_EpochMilitiaGuerilla";
        cost = 90000;
        camouflage = 1.2;
        uniformClass = "";
        weapons[] = {"AKM_EPOCH","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"AKM_EPOCH","hgun_ACPC2_F","Throw","Put"};
        Items[] = {"FAK"};
        RespawnItems[] = {"FAK"};
        magazines[] = {"30Rnd_762x39_Mag","30Rnd_762x39_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_762x39_Mag","30Rnd_762x39_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        linkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
        respawnLinkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
    };
    class I_Soldier3_EPOCH : I_Soldier_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        model = "A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
        scope = 2;
        displayName = "$STR_EPOCH_EpochMilitiaGhillie";
        cost = 90000;
        camouflage = 1.4;
        uniformClass = "";
        weapons[] = {"srifle_DMR_01_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_01_F","hgun_ACPC2_F","Throw","Put"};
        Items[] = {"FAK"};
        RespawnItems[] = {"FAK"};
        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
        linkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
        respawnLinkedItems[] = {"V_24_EPOCH","H_89_EPOCH","ItemMap","ItemCompass","ItemWatch","EpochRadio0"};
    };
    class B_Soldier_base_F;
    class Epoch_Female_base_F : B_Soldier_base_F
    {
        identityTypes[] = {"Woman","NoGlasses"};
        maxGunElev = 80;
        faceType = "Man_A3";
        woman = 1;
        side = 1;
        engineer = 1;
        vehicleClass = "Women";
        scope = 0;
        cost = 40000;
        headgearProbability = 100;
        allowedHeadgear[] = {};
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.16;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        armor = 2;
        armorStructural = 0.5;
        explosionShielding = 0.05;
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoDark.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        modelSides[] = {1};
        nakedUniform = "U_BasicBodyFemale";
        uniformClass = "U_Test_uniform";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"V_F41_EPOCH","ItemMap"};
        respawnLinkedItems[] = {"V_F41_EPOCH","ItemMap"};
    };
    class Underwear_F;
    class FemaleUnderwear_F : Underwear_F
    {
        author = "Sequisha";
        scope = 1;
        scopeCurator = 0;
        displayName = "$STR_EPOCH_TESTUnderwear";
        hiddenSelections[] = {};
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        uniformClass = "U_BasicBodyFemale";
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
    };
    class Epoch_Female_wetsuit_F : Epoch_Female_base_F
    {
        faceType = "Man_A3";
        woman = 1;
        side = 1;
        engineer = 1;
        vehicleClass = "Women";
        displayName = "$STR_EPOCH_FemaleWetsuit";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_co.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\wetsuit\wetsuit.rvmat","x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_Injury.rvmat","x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_Injury.rvmat"};
        };
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Female_WetSuit.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_wetsuit_black.paa";
        hiddenUnderwaterSelections[] = {"hide"};
        shownUnderwaterSelections[] = {"unhide","unhide2"};
        hiddenUnderwaterSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_co.paa","\x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_co.paa","\A3\characters_f\data\visors_ca.paa"};
        modelSides[] = {1};
        nakedUniform = "U_BasicBodyFemale";
        uniformClass = "U_Wetsuit_uniform";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        primaryAmmoCoef = 0.4;
        secondaryAmmoCoef = 0.1;
        handgunAmmoCoef = 0.2;
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        armor = 2;
        armorStructural = 0.5;
        explosionShielding = 0.05;
        sensitivity = 3;
        threat[] = {1,0.1,0.1};
        camouflage = 1.4;
    };
    class Epoch_Female_wetsuitW_F : Epoch_Female_wetsuit_F
    {
        displayName = "$STR_EPOCH_FemaleWetsuitwhite";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_wetsuit_white.paa";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitWhite_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitWhite.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\wetsuit\wetsuitWhite.rvmat","x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_Injury.rvmat","x\addons\a3_epoch_assets\textures\wetsuit\wetsuit_Injury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_Wetsuit_White";
        hiddenUnderwaterSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitWhite_co.paa","\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitWhite_co.paa","\A3\characters_f\data\visors_ca.paa"};
    };
    class Epoch_Female_wetsuitB_F : Epoch_Female_wetsuit_F
    {
        displayName = "$STR_EPOCH_FemaleWetsuitblue";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_wetsuit_blue.paa";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitBlue_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_Wetsuit_Blue";
        hiddenUnderwaterSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitBlue_co.paa","\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitBlue_co.paa","\A3\characters_f\data\visors_ca.paa"};
    };
    class Epoch_Female_wetsuitP_F : Epoch_Female_wetsuit_F
    {
        displayName = "$STR_EPOCH_FemaleWetsuitpurple";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_wetsuit_purple.paa";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitPurp_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_Wetsuit_Purp";
        hiddenUnderwaterSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitPurp_co.paa","\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitPurp_co.paa","\A3\characters_f\data\visors_ca.paa"};
    };
    class Epoch_Female_wetsuitC_F : Epoch_Female_wetsuit_F
    {
        displayName = "$STR_EPOCH_FemaleWetsuitcamo";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_wetsuit_camo.paa";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitCamo_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_Wetsuit_Camo";
        hiddenUnderwaterSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitCamo_co.paa","\x\addons\a3_epoch_assets\textures\wetsuit\wetsuitCamo_co.paa","\A3\characters_f\data\visors_ca.paa"};
        camouflage = 1;
    };
    class Epoch_Female_Ghillie1_F : Epoch_Female_base_F
    {
        displayName = "$STR_EPOCH_FemaleGhillietan";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_ghillie.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_ghilie_tan.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\ghillie_desert_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_ghillie1_uniform";
        primaryAmmoCoef = 0.2;
        secondaryAmmoCoef = 0.05;
        handgunAmmoCoef = 0.1;
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 4;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 6;
                material = -1;
                name = "pelvis";
                passThrough = 0.04;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 6;
                material = -1;
                name = "spine1";
                passThrough = 0.04;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 6;
                material = -1;
                name = "spine2";
                passThrough = 0.04;
                radius = 0.15;
                explosionShielding = 1.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 6;
                material = -1;
                name = "spine3";
                passThrough = 0.04;
                radius = 0.15;
                explosionShielding = 1.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.04;
                radius = 0.16;
                explosionShielding = 1.5;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 8;
                material = -1;
                name = "arms";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.8;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 8;
                material = -1;
                name = "hands";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.8;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 8;
                material = -1;
                name = "legs";
                passThrough = 0.6;
                radius = 0.12;
                explosionShielding = 0.8;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        armor = 2;
        armorStructural = 0.5;
        explosionShielding = 0.05;
        threat[] = {1,0.6,0.6};
        camouflage = 0.4;
        sensitivity = 3.3;
    };
    class Epoch_Female_Ghillie2_F : Epoch_Female_Ghillie1_F
    {
        displayName = "$STR_EPOCH_FemaleGhillielightgreen";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_ghillie.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_ghilie_green2.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\ghillie_woodland_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_ghillie2_uniform";
    };
    class Epoch_Female_Ghillie3_F : Epoch_Female_Ghillie1_F
    {
        displayName = "$STR_EPOCH_FemaleGhilliegreen";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_ghillie.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_ghilie_green.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\ghillie_mcamo_co.paa"};
        modelSides[] = {1};
        uniformClass = "U_ghillie3_uniform";
    };
    class Epoch_Female_Camo_F : Epoch_Female_base_F
    {
        displayName = "$STR_EPOCH_FemaleCamo";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_green.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\camo\camoDark_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\camo\female_camoDark.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoDark.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_Camo_uniform";
    };
    class Epoch_Female_CamoBlue_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoBlue";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_blue.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\camo\camoBlue_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoBlue_uniform";
    };
    class Epoch_Female_CamoBrn_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoBrown";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_brown.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\camo\camoBrown_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\camo\female_camoBrown.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBrown.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoBrn_uniform";
    };
    class Epoch_Female_CamoRed_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoRed";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\keesha_red.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\camo\camoRed_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\camo\female_camoRed.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoRed.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoRed_uniform";
    };
    class Epoch_Female_CamoAloha_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoAloha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_aloha_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_aloha.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoAloha.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoAloha.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoAloha_uniform";
    };
    class Epoch_Female_CamoBiker_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoBiker";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_biker_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_biker.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoBiker.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoBiker.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoBiker_uniform";
    };
    class Epoch_Female_CamoBubblegum_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoBubblegum";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_bubblegum_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_bubblegum.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoBubblegum.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoBubblegum.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoBubblegum_uniform";
    };
    class Epoch_Female_CamoLumberjack_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoLumberjack";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_lumberjack_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_lumberjack.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoLumberjack.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoLumberjack.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoLumberjack_uniform";
    };
    class Epoch_Female_CamoOutback_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoOutback";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_outback_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_outback.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoOutback.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoOutback.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoOutback_uniform";
    };
    class Epoch_Female_CamoPink_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoPink";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_pink_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_pink.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoPink.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoPink.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoPink_uniform";
    };
    class Epoch_Female_CamoPinkPolka_F : Epoch_Female_Camo_F
    {
        displayName = "$STR_EPOCH_FemaleCamoPinkPolka";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_pinkpolka_icon.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\camo_pinkpolka.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_community\textures\keesha\camo\female_camoPinkPolka.rvmat"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_community\textures\keesha\camo\female_camoPinkPolka.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
        };
        modelSides[] = {1};
        uniformClass = "U_CamoPinkPolka_uniform";
    };
    class Epoch_Female_F : Epoch_Female_base_F
    {
        woman = 1;
        scope = 2;
        hiddenSelections[] = {};
        displayName = "$STR_EPOCH_Female";
    };
    class O_Soldier_base_F;
    class Epoch_Man_base_F : O_Soldier_base_F
    {
        identityTypes[] = {"Kerry","NoGlasses"};
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Dan.paa";
        maxGunElev = 80;
        faceType = "Man_A3";
        side = 3;
        vehicleClass = "Men";
        engineer = 1;
        scope = 0;
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\Common\basicbody";
        modelSides[] = {0};
        nakedUniform = "U_BasicBody";
        uniformClass = "U_Test1_uniform";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"V_41_EPOCH","ItemMap"};
        respawnLinkedItems[] = {"V_41_EPOCH","ItemMap"};
        cost = 40000;
        headgearProbability = 100;
        allowedHeadgear[] = {};
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.16;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        armor = 2;
        armorStructural = 0.5;
        explosionShielding = 0.05;
    };
    class Epoch_Male_F : Epoch_Man_base_F
    {
        scope = 2;
        displayName = "$STR_EPOCH_Male";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Dan.paa";
    };
    class Epoch_Char_base_F : Civilian
    {
        faceType = "Man_A3";
        side = 5;
        faction = "CIV_F";
        genericNames = "GreekMen";
        vehicleClass = "Men";
        scope = 0;
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\Common\basicbody";
        modelSides[] = {4};
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG : UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba : UniformSlotInfo
                {
                    slotType = "SCUBA_SLOT";
                };
                class Googles : UniformSlotInfo
                {
                    slotType = 603;
                };
                class Headgear : UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };
    class Epoch_Sapper_base_F : Civilian2
    {
        moves = "CfgMovesSapperSdr";
        gestures = "CfgGesturesSapper";
        faceType = "Default";
        side = 5;
        faction = "CIV_F";
        genericNames = "GreekMen";
        vehicleClass = "Men";
        scope = 0;
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\Common\basicbody";
        modelSides[] = {4};
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG : UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba : UniformSlotInfo
                {
                    slotType = "SCUBA_SLOT";
                };
                class Googles : UniformSlotInfo
                {
                    slotType = 603;
                };
                class Headgear : UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
        class HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 1;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 1;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };
    class Epoch_Cloak_F : Epoch_Char_base_F
    {
        scope = 2;
        faceType = "Default";
        displayName = "$STR_EPOCH_Cloak";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Cloak_Character.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\cultist.paa";
        glassesEnabled = 0;
        modelSides[] = {6};
        armor = 10;
        armorStructural = 20;
        class HitPoints
        {
            class HitFace
            {
                armor = 1000;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 10;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 10;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 10;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 10;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 10;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 10;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 10;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 10;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 10;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 10;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
    };
    class Epoch_Sapper_F : Epoch_Sapper_base_F
    {
        scope = 2;
        faceType = "Default";
        displayName = "$STR_EPOCH_Sapper";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sapper_Character.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sapper.paa";
        hiddenSelections[] = {"sapper","remains"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\sapper\sapper_eco.paa",""};
        glassesEnabled = 0;
        modelSides[] = {6};
        armor = 6;
        armorStructural = 13;
        magazines[] = {};
        respawnMagazines[] = {};
        class HitPoints
        {
            class HitFace
            {
                armor = 3;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 3;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 3;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 3;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 3;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 3;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 3;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1000;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1000;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 8;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
    };
    class Epoch_SapperG_F : Epoch_Sapper_F
    {
        scope = 2;
        displayName = "$STR_EPOCH_SapperToxic";
        moves = "CfgMovesSapperSdr";
        hiddenSelections[] = {"camo","remains"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\sapper\sapper_green_eco.paa",""};
    };
    class Epoch_SapperB_F : Epoch_Sapper_base_F
    {
        scope = 2;
        faceType = "Default";
        displayName = "$STR_EPOCH_SapperBloated";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sapper_Bloated.p3d";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\bossSapper.paa";
        glassesEnabled = 0;
        modelSides[] = {6};
        armor = 9;
        armorStructural = 13;
        magazines[] = {};
        respawnMagazines[] = {};
        class HitPoints
        {
            class HitFace
            {
                armor = 3;
                material = -1;
                name = "face_hub";
                passThrough = 0.1;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck : HitFace
            {
                armor = 3;
                material = -1;
                name = "neck";
                passThrough = 0.1;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead : HitNeck
            {
                armor = 3;
                material = -1;
                name = "head";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 3;
                material = -1;
                name = "pelvis";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitAbdomen : HitPelvis
            {
                armor = 3;
                material = -1;
                name = "spine1";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm : HitAbdomen
            {
                armor = 3;
                material = -1;
                name = "spine2";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest : HitDiaphragm
            {
                armor = 9;
                material = -1;
                name = "spine3";
                passThrough = 0.1;
                radius = 0.15;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody : HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 0.1;
                radius = 0.2;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor = 1000;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitHands : HitArms
            {
                armor = 1000;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs
            {
                armor = 8;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.12;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
        };
    };
    class EPOCH_RyanZombie_1 : C_man_1
    {
        epochLootClass = "EPOCH_RyanZombie_1";
        moves = "CfgRyanZombiesMovesMaleSdrSlow";
        identityTypes[] = {"NoGlasses"};
        scope = 2;
        displayName = "$STR_EPOCH_Zombie1";
        armor = 10;
        armorStructural = 20;
        explosionShielding = 0.3;
        glassesEnabled = 0;
        class EventHandlers : EventHandlers
        {
            init = "(_this select 0) setface (selectRandom [""RyanZombieFace1"", ""RyanZombieFace2"", ""RyanZombieFace3"", ""RyanZombieFace4"", ""RyanZombieFace5""])";
        };
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {};
        respawnlinkedItems[] = {};
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_2_co.paa"};
        hiddenSelectionsMaterials[] = {"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat"};
        uniformClass = "";
        nakedUniform = "U_EPOCH_RyanZombie_1";
        modelSides[] = {6};
    };
    class EPOCH_RyanZombie_2 : EPOCH_RyanZombie_1
    {
        model = "\A3\characters_F\civil\c_poor";
        hiddenSelectionsTextures[] = {"A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
        displayName = "$STR_EPOCH_Zombie2";
        uniformClass = "";
        nakedUniform = "U_EPOCH_RyanZombie_2";
    };
    class EPOCH_RyanZombie_3 : EPOCH_RyanZombie_1
    {
        model = "\A3\characters_F\common\coveralls";
        displayName = "$STR_EPOCH_Zombie3";
        uniformClass = "";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
        nakedUniform = "U_EPOCH_RyanZombie_3";
    };
    class EPOCH_RyanZombie_4 : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie4";
        uniformClass = "";
        hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
        nakedUniform = "U_EPOCH_RyanZombie_4";
    };
    class EPOCH_RyanZombie_5 : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie5";
        hiddenSelections[] = {"camo"};
        uniformClass = "";
        hiddenSelectionsTextures[] = {"A3\Characters_F_EPC\Civil\Data\scientist_02_co.paa"};
        nakedUniform = "U_EPOCH_RyanZombie_5";
    };
    class EPOCH_RyanZombie_1_C : EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie1Crawler";
        moves = "CfgRyanZombiesMovesMaleSdrCrawler";
    };
    class EPOCH_RyanZombie_2_C : EPOCH_RyanZombie_2
    {
        displayName = "$STR_EPOCH_Zombie2Crawler";
        moves = "CfgRyanZombiesMovesMaleSdrCrawler";
    };
    class EPOCH_RyanZombie_3_C : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie3Crawler";
        moves = "CfgRyanZombiesMovesMaleSdrCrawler";
    };
    class EPOCH_RyanZombie_4_C : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Crawler";
        moves = "CfgRyanZombiesMovesMaleSdrCrawler";
    };
    class EPOCH_RyanZombie_5_C : EPOCH_RyanZombie_5
    {
        displayName = "$STR_EPOCH_Zombie5Crawler";
        moves = "CfgRyanZombiesMovesMaleSdrCrawler";
    };
    class EPOCH_RyanZombie_1_Sp : EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie1Spider";
        moves = "CfgRyanZombiesMovesMaleSdrSpider";
    };
    class EPOCH_RyanZombie_2_Sp : EPOCH_RyanZombie_2
    {
        displayName = "$STR_EPOCH_Zombie2Spider";
        moves = "CfgRyanZombiesMovesMaleSdrSpider";
    };
    class EPOCH_RyanZombie_3_Sp : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie3Spider";
        moves = "CfgRyanZombiesMovesMaleSdrSpider";
    };
    class EPOCH_RyanZombie_4_Sp : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Spider";
        moves = "CfgRyanZombiesMovesMaleSdrSpider";
    };
    class EPOCH_RyanZombie_5_Sp : EPOCH_RyanZombie_5
    {
        displayName = "$STR_EPOCH_Zombie5Spider";
        moves = "CfgRyanZombiesMovesMaleSdrSpider";
    };
    class EPOCH_RyanZombie_1_B : EPOCH_RyanZombie_1
    {
        armor = 20;
        displayName = "$STR_EPOCH_Zombie1Boss";
        moves = "CfgRyanZombiesMovesMaleSdrBoss";
    };
    class EPOCH_RyanZombie_2_B : EPOCH_RyanZombie_2
    {
        armor = 20;
        displayName = "$STR_EPOCH_Zombie2Boss";
        moves = "CfgRyanZombiesMovesMaleSdrBoss";
    };
    class EPOCH_RyanZombie_3_B : EPOCH_RyanZombie_3
    {
        armor = 20;
        displayName = "$STR_EPOCH_Zombie3Boss";
        moves = "CfgRyanZombiesMovesMaleSdrBoss";
    };
    class EPOCH_RyanZombie_4_B : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Boss";
        moves = "CfgRyanZombiesMovesMaleSdrBoss";
    };
    class EPOCH_RyanZombie_5_B : EPOCH_RyanZombie_5
    {
        armor = 20;
        displayName = "$STR_EPOCH_Zombie5Boss";
        moves = "CfgRyanZombiesMovesMaleSdrBoss";
    };
    class EPOCH_RyanZombie_1_W : EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie1Walker";
        moves = "CfgRyanZombiesMovesMaleSdrwalker";
    };
    class EPOCH_RyanZombie_2_W : EPOCH_RyanZombie_2
    {
        displayName = "$STR_EPOCH_Zombie2Walker";
        moves = "CfgRyanZombiesMovesMaleSdrwalker";
    };
    class EPOCH_RyanZombie_3_W : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie3Walker";
        moves = "CfgRyanZombiesMovesMaleSdrwalker";
    };
    class EPOCH_RyanZombie_4_W : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Walker";
        moves = "CfgRyanZombiesMovesMaleSdrwalker";
    };
    class EPOCH_RyanZombie_5_W : EPOCH_RyanZombie_5
    {
        displayName = "$STR_EPOCH_Zombie5Walker";
        moves = "CfgRyanZombiesMovesMaleSdrwalker";
    };
    class EPOCH_RyanZombie_1_M : EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie1Medium";
        moves = "CfgRyanZombiesMovesMaleSdrMedium";
    };
    class EPOCH_RyanZombie_2_M : EPOCH_RyanZombie_2
    {
        displayName = "$STR_EPOCH_Zombie2Medium";
        moves = "CfgRyanZombiesMovesMaleSdrMedium";
    };
    class EPOCH_RyanZombie_3_M : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie3Medium";
        moves = "CfgRyanZombiesMovesMaleSdrMedium";
    };
    class EPOCH_RyanZombie_4_M : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Medium";
        moves = "CfgRyanZombiesMovesMaleSdrMedium";
    };
    class EPOCH_RyanZombie_5_M : EPOCH_RyanZombie_5
    {
        displayName = "$STR_EPOCH_Zombie5Medium";
        moves = "CfgRyanZombiesMovesMaleSdrMedium";
    };
    class EPOCH_RyanZombie_1_S : EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie1Medium";
        moves = "CfgRyanZombiesMovesMaleSdrSlow2";
    };
    class EPOCH_RyanZombie_2_S : EPOCH_RyanZombie_2
    {
        displayName = "$STR_EPOCH_Zombie2Medium";
        moves = "CfgRyanZombiesMovesMaleSdrSlow2";
    };
    class EPOCH_RyanZombie_3_S : EPOCH_RyanZombie_3
    {
        displayName = "$STR_EPOCH_Zombie3Medium";
        moves = "CfgRyanZombiesMovesMaleSdrSlow2";
    };
    class EPOCH_RyanZombie_4_S : EPOCH_RyanZombie_4
    {
        displayName = "$STR_EPOCH_Zombie4Medium";
        moves = "CfgRyanZombiesMovesMaleSdrSlow2";
    };
    class EPOCH_RyanZombie_5_S : EPOCH_RyanZombie_5
    {
        displayName = "$STR_EPOCH_Zombie5Medium";
        moves = "CfgRyanZombiesMovesMaleSdrSlow2";
    };
    class House;
    class House_F : House
    {
        class DestructionEffects;
    };
    class House_Small_F;
    class Ruins_F;
    class PowerLines_base_F : House_F
    {
        mapSize = 2.35;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        scopeCurator = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        vehicleClass = "Structures_Infrastructure";
        cost = 100;
        compatibleWires[] = {};
        class EventHandlers
        {
            killed = "if (isServer) then {this call compile preprocessFileLineNumbers ""\A3\Structures_F\Ind\PowerLines\Scripts\column_ruins.sqf""};";
        };
    };
    class PowerLines_Small_base_F : House_Small_F
    {
        mapSize = 2.79;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        scopeCurator = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        vehicleClass = "Structures_Infrastructure";
        compatibleWires[] = {};
        cost = 100;
        class EventHandlers
        {
            killed = "if (isServer) then {this call compile preprocessFileLineNumbers ""\A3\Structures_F\Ind\PowerLines\Scripts\column_ruins.sqf""};";
        };
    };
    class Land_Communication_anchor_F : House_F
    {
        mapSize = 9.73;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 1;
        scopeCurator = 2;
        displayName = "$STR_A3_CfgVehicles_Land_Communication_anchor_F0";
        model = "\A3\Structures_F\Ind\Transmitter_Tower\Communication_anchor_F.p3d";
        vehicleClass = "Structures_Infrastructure";
        class DestructionEffects
        {
            class DestroyPhase1
            {
                simulation = "destroy";
                type = "DelayedDestruction";
                lifeTime = 1;
                position = "";
                intensity = 1;
                interval = 1;
            };
        };
        class EventHandlers
        {
            killed = "if (isServer) then {this call compile preprocessFileLineNumbers ""\A3\Structures_F\Ind\Transmitter_Tower\Scripts\anchor_ruins.sqf""};";
        };
    };
    class Land_Communication_F : House_F
    {
        mapSize = 4.53;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 1;
        scopeCurator = 2;
        displayName = "$STR_A3_CfgVehicles_Land_Communication_F0";
        model = "\A3\Structures_F\Ind\Transmitter_Tower\Communication_F.p3d";
        vehicleClass = "Structures_Infrastructure";
        cost = 40000;
        class EventHandlers
        {
            killed = "if (isServer) then {this call compile preprocessFileLineNumbers ""\A3\Structures_F\Ind\Transmitter_Tower\Scripts\tower_ruins.sqf""};";
        };
    };
    class ferrisWheel_EPOCH : House
    {
        author = "Sequisha";
        ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"},{"start4","end4"}};
        scope = 2;
        displayName = "$STR_EPOCH_FerrisWheel";
        model = "\x\addons\a3_epoch_structures\Ferris\ferrisWheel.p3d";
        picture = "\x\addons\a3_epoch_structures\Ferris\Data\ferris_ca.paa";
        placement = "vertical";
        vehicleClass = "Structures";
        mapSize = 20.27;
        cost = 40000;
        selectionDamage = "DamT_1";
        replaceDamagedHitpoints[] = {"Hitzone_1_hitpoint","Hitzone_2_hitpoint"};
        class HitPoints
        {
            class Hitzone_1_hitpoint
            {
                armor = 20;
                material = -1;
                name = "Dam_1";
                visual = "DamT_1";
                passThrough = 1;
                radius = 0.375;
                convexComponent = "Dam_2";
                explosionShielding = 50;
                minimalHit = 0.001;
                class DestructionEffects
                {
                    class Dust
                    {
                        simulation = "particles";
                        type = "HousePartDust";
                        position = "Dam_1_effects";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.01;
                    };
                    class Dust2 : Dust
                    {
                        type = "HousePartDustLong";
                    };
                    class Walls : Dust
                    {
                        type = "HousePartWall";
                    };
                    class DamageAround
                    {
                        simulation = "damageAround";
                        type = "DamageAroundHousePart";
                        position = "Dam_1_effects";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                };
            };
            class Hitzone_2_hitpoint : Hitzone_1_hitpoint
            {
                name = "Dam_2";
                convexComponent = "Dam_2";
                class DestructionEffects : DestructionEffects
                {
                    class Dust : Dust
                    {
                        position = "Dam_2_effects";
                    };
                    class Dust2 : Dust2
                    {
                        position = "Dam_2_effects";
                    };
                    class Walls : Walls
                    {
                        position = "Dam_2_effects";
                    };
                    class DamageAround : DamageAround
                    {
                        position = "Dam_2_effects";
                    };
                };
            };
        };
        class AnimationSources
        {
            class ferris_source
            {
                source = "user";
                sourceAddress = "loop";
                angle1 = -360;
                animPeriod = 25;
                initPhase = 0;
                sound = "ferris_motor";
            };
        };
        class UserActions
        {
            class startFerris
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_EPOCH_StartRide";
                position = "start_ride";
                priority = 0.4;
                radius = 10;
                onlyForPlayer = "False";
                condition = "(this animationPhase 'Wheel_rot') == 0";
                statement = "this animate ['Wheel_rot',1]; this animate ['car1_rot',1];	this animate ['car2_rot',1]; this animate ['car3_rot',1]; this animate ['car4_rot',1]; this animate ['car5_rot',1]; this animate ['car6_rot',1]; this animate ['car7_rot',1]; this animate ['car8_rot',1]; this animate ['car9_rot',1]; this animate ['car10_rot',1]; this animate ['car11_rot',1]; this animate ['car12_rot',1]; this animate ['car13_rot',1]; this animate ['car14_rot',1]; this animate ['car15_rot',1]; this animate ['car16_rot',1];";
            };
            class stopFerris
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_EPOCH_StopRide";
                position = "start_ride";
                priority = 0.4;
                radius = 10;
                onlyForPlayer = "False";
                condition = "(this animationPhase 'Wheel_rot') == 1";
                statement = "this animate ['Wheel_rot',0]; this animate ['car1_rot',0]; this animate ['car2_rot',0]; this animate ['car3_rot',0]; this animate ['car4_rot',0]; this animate ['car5_rot',0]; this animate ['car6_rot',0]; this animate ['car7_rot',0]; this animate ['car8_rot',0]; this animate ['car9_rot',0]; this animate ['car10_rot',0]; this animate ['car11_rot',0]; this animate ['car12_rot',0]; this animate ['car13_rot',0]; this animate ['car14_rot',0]; this animate ['car15_rot',0]; this animate ['car16_rot',0];";
            };
        };
        numberOfDoors = 0;
    };
    class bunker_epoch : House
    {
        scope = 2;
        author = "AWOL";
        displayName = "$STR_EPOCH_FourWayBunker";
        model = "\x\addons\a3_epoch_community\models\Bunkers\4_way_bunker.p3d";
        vehicleClass = "Structures";
        mapSize = 20.27;
        cost = 40000;
		destrType = "DestructNo";
        class AnimationSources
        {
            class One
            {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Two
            {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Three
            {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Four
            {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
    };
	class bunker_epoch_01 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_01.p3d";
	};
	class bunker_epoch_02 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_02.p3d";
	};
	class bunker_epoch_03 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_03.p3d";
	};
	class bunker_epoch_04 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_04.p3d";
	};
	class bunker_epoch_05 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_05.p3d";
	};
	class bunker_epoch_06 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_06.p3d";
	};
	class bunker_epoch_07 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_07.p3d";
	};
	class bunker_epoch_08 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_08.p3d";
	};
	class bunker_epoch_09 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_09.p3d";
	};
	class bunker_epoch_10 : bunker_epoch {
		author = "AWOL/Helion4";
		model = "\x\addons\a3_epoch_community\models\Bunkers\epoch_bunker_10.p3d";
	};

    class Bag_Base;
    class smallbackpack_red_epoch : Bag_Base
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_SmallBackpackRed";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
        sections[] = {"camo"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_red_co.paa"};
        maximumLoad = 460;
        mass = 25;
    };
    class smallbackpack_green_epoch : Bag_Base
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_SmallBackpackGreen";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
        sections[] = {"camo"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_grn_co.paa"};
        maximumLoad = 460;
        mass = 25;
    };
    class smallbackpack_teal_epoch : Bag_Base
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_SmallBackpackTeal";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
        sections[] = {"camo"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_teal_co.paa"};
        maximumLoad = 460;
        mass = 25;
    };
    class smallbackpack_pink_epoch : Bag_Base
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_SmallBackpackPink";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_smallbackpack_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\small_backpack.p3d";
        sections[] = {"camo"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_2\data\small_backpack_pink_co.paa"};
        maximumLoad = 460;
        mass = 25;
    };
    class B_AssaultPack_Base : Bag_Base
    {
        scope = 0;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
        descriptionShort = "$STR_EPOCH_Load360Mass20";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
        maximumLoad = 360;
        mass = 20;
    };
    class B_FieldPack_Base : Bag_Base
    {
        scope = 0;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
        descriptionShort = "$STR_EPOCH_Load400Mass30";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"};
        maximumLoad = 400;
        mass = 30;
    };
    class B_TacticalPack_Base : Bag_Base
    {
        scope = 0;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
        descriptionShort = "$STR_EPOCH_Load480Mass40";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
        maximumLoad = 480;
        mass = 40;
    };
    class B_Kitbag_Base : Bag_Base
    {
        scope = 0;
        picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
        descriptionShort = "$STR_EPOCH_Load520Mass50";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        maximumLoad = 520;
        mass = 50;
    };
    class B_Carryall_Base : Bag_Base
    {
        scope = 0;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        descriptionShort = "$STR_EPOCH_Load550Mass60";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
        maximumLoad = 550;
        mass = 60;
    };
    class LandVehicle;
    class Car : LandVehicle
    {
        scope = 0;
        class HitPoints;
    };
    class Car_F : Car
    {
        scope = 0;
        class HitPoints
        {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
        class EventHandlers;
    };
    class Ship;
    class Ship_F : Ship
    {
        scope = 0;
        class Eventhandlers : DefaultEventhandlers {};
        transportMaxMagazines = 100;
        transportMaxWeapons = 20;
        transportMaxBackpacks = 4;
    };
    class jetski_epoch : Ship_F
    {
        author = "Kiory";
        displayName = "$STR_EPOCH_BlueJetski";
        vehicleclass = "Epoch_objects";
        accuracy = 0.5;
        attenuationEffectType = "OpenCarAttenuation";
        scope = 2;
        model = "\x\addons\a3_epoch_vehicles\Jetski.p3d";
        picture = "\x\addons\a3_epoch_vehicles\data\jetski.paa";
        Icon = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
        cost = 50000;
        leftEngineEffect = "LEngEffectsSmall";
        rightEngineEffect = "REngEffectsSmall";
        class TransportItems {};
        class HitPoints
        {
            class Hitleftmirror
            {
                armor = 0.7;
                material = 50;
                name = "left_mirror";
                visual = "";
                passThrough = 1;
            };
            class Hitrighttmirror
            {
                armor = 0.7;
                material = 50;
                name = "right_mirror";
                visual = "";
                passThrough = 1;
            };
            class HitEngine
            {
                armor = 0.12;
                material = -1;
                name = "Engine";
                visual = "";
                passThrough = 1;
            };
            class HitHull
            {
                armor = 1;
                material = 50;
                name = "hull";
                visual = "zbytek";
                passThrough = 1;
                explosionShielding = 1;
            };
        };
        insideSoundCoef = 0.5;
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1,1};
        soundEngineOnExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_start",1,1,150};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1,1};
        soundEngineOffExt[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_stop",1,1,150};
        buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.7782794,1,200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.7782794,1,200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.7782794,1,200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.7782794,1,200};
        soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
        WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.7782794,1,200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.7782794,1,200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.7782794,1,200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.7782794,1,200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.7782794,1,200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.7782794,1,200};
        soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,200};
        soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
        class Sounds
        {
            class IdleOut
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1",0.70794576,1,150};
                frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
                volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
            };
            class Engine
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2",1,1.2,300};
                frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
                volume = "engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
            };
            class EngineMidOut
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2",1.4125376,0.6,400};
                frequency = "0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
                volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
            };
            class EngineMaxOut
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2",1.9952624,1,500};
                frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
                volume = "engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
            };
            class WaternoiseOutW0
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",1,1,100};
                frequency = "1";
                volume = "(speed factor[4, 1])";
            };
            class WaternoiseOutW1
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1,1,150};
                frequency = "1";
                volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
            };
            class WaternoiseOutW2
            {
                sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1,1,300};
                frequency = "1";
                volume = "(speed factor[3, 9])";
            };
        };
        class RenderTargets
        {
            class Left_Mirror
            {
                renderTarget = "rendertarget0";
                class CameraView1
                {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
            };
            class Right_Mirror
            {
                renderTarget = "rendertarget1";
                class CameraView2
                {
                    pointPosition = "PIP1_pos";
                    pointDirection = "PIP1_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.7;
                };
            };
        };
        driverLeftHandAnimName = "handle";
        driverRightHandAnimName = "handle";
        driverAction = "Driver_Jetski";
        weapons[] = {"MiniCarHorn"};
        cargoAction[] = {"Cargo_Jetski"};
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        castDriverShadow = 1;
        castCargoShadow = 1;
        ejectDeadDriver = 1;
        ejectDeadCargo = 1;
        extCameraPosition[] = {0,1.5,-4.5};
        maxSpeed = 190;
        turnCoef = 0.1;
        simulation = "shipX";
        overSpeedBrakeCoef = 0;
        enginePower = 220;
        engineShiftY = 0;
        waterLeakiness = 0;
        waterResistanceCoef = 0.015;
        thrustDelay = 2;
        waterLinearDampingCoefY = 10;
        waterLinearDampingCoefX = 0.2;
        waterAngularDampingCoef = 1.5;
        rudderForceCoef = 0.06;
        rudderForceCoefAtMaxSpeed = 0.001;
        enableGPS = 1;
        transportSoldier = 1;
        supplyRadius = 10;
        idleRpm = 200;
        redRpm = 1200;
        fuelCapacity = 5;
        hiddenSelections[] = {"num_1","num_2","num_3","num_4","num_5"};
        slingLoadMaxCargoMass = 4000;
        slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1"};
        slingLoadMemoryPoint = "slingLoad0";
        class EventHandlers : EventHandlers
        {
            GetIn = "params ['','','_u']; if (player isEqualTo _u) then {EPOCH_inEpochVeh = true; 0 = _this spawn {params ['_v'];_p = '\x\addons\a3_epoch_vehicles\data\'; while {EPOCH_inEpochVeh} do {_h = floor ((date select 3)/10);_m = floor ((date select 4)/10);{_v setObjectTexture [_forEachIndex,_x]} forEach [format['%1num%2_ca.paa',_p,_h],format['%1num%2_ca.paa',_p,(date select 3)-(_h*10)],format['%1num%2_ca.paa',_p,_m],format['%1num%2_ca.paa',_p,(date select 4)-(_m*10)],format['%1fuel%2_ca.paa',_p,floor(fuel _v*10)]];uisleep 1;};};};";
            GetOut = "params ['','','_u']; if (player isEqualTo _u) then {EPOCH_inEpochVeh = false};";
        };
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
        class Exhausts
        {
            class Exhaust1
            {
                position = "exhaust";
                direction = "exhaust_dir";
                effect = "ExhaustsEffect";
            };
        };
        class complexGearbox
        {
            GearboxRatios[] = {"R1",-0.782,"N",0,"D1",2,"D2",1.85,"D3",1.75};
            TransmissionRatios[] = {"High",1};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        armor = 15;
        class Turrets {};
        class Library
        {
            libTextDesc = "$STR_A3_CfgVehicles_Rubber_duck_base_Library0";
        };
        class Damage
        {
            tex[] = {};
            mat[] = {"A3\boat_f\Boat_Transport_01\data\Boat_Transport_01.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat","A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat"};
        };
    };
    class ebike_epoch : Car_F
    {
        mapSize = 3.56;
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_ElectricMotorcycle";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_vehicles\ebike.p3d";
        picture = "\x\addons\a3_epoch_vehicles\data\ebike.paa";
        icon = "\A3\Soft_F\Quadbike_01\Data\UI\map_Quad_CA.paa";
        armor = 30;
        damageResistance = 0.00913;
        cost = 100000;
        attenuationEffectType = "OpenCarAttenuation";
        soundGetIn[] = {"",0.056234132,1};
        soundGetOut[] = {"",0.056234132,1,40};
        soundDammage[] = {"",0.56234133,1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",0.56234133,1};
        soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",0.56234133,1,200};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",0.56234133,1};
        soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",0.56234133,1,200};
        buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,100};
        buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,100};
        buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,100};
        buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,100};
        soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
        WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,100};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,100};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,100};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,100};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,100};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,100};
        soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,100};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,100};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,100};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,100};
        soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
        Crash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.7782794,1,100};
        Crash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.7782794,1,100};
        Crash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.7782794,1,100};
        Crash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.7782794,1,100};
        Crash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_05",1.7782794,1,100};
        soundCrashes[] = {"Crash0",0.2,"Crash1",0.2,"Crash2",0.2,"Crash3",0.2,"Crash4",0.2};
        class Sounds
        {
            class Idle_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",0.31622776,1,100};
                frequency = 1;
                volume = "engineOn*camPos*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
            };
            class Engine
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",0.35481337,1,200};
                frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
            };
            class Engine1_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",0.39810717,1,200};
                frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
            };
            class Engine2_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",0.4466836,1,250};
                frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
            };
            class Engine3_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",0.5011872,1,250};
                frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
            };
            class Engine4_ext
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",0.56234133,1,300};
                frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
                volume = "engineOn*camPos*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
            };
            class Idle_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",0.25118864,1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
            };
            class Engine_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",0.2818383,1};
                frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
            };
            class Engine1_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",0.31622776,1};
                frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
            };
            class Engine2_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",0.35481337,1};
                frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
            };
            class Engine3_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",0.39810717,1};
                frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
            };
            class Engine4_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",0.4466836,1};
                frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
                volume = "engineOn*(1-camPos)*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
            };
            class IdleThrust_Int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.56234133,1};
                frequency = 1;
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
            };
            class EngineThrust_Int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.63095737,1};
                frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
            };
            class Engine1_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.70794576,1};
                frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
            };
            class Engine2_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.7943282,1};
                frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
            };
            class Engine3_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.8912509,1};
                frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
            };
            class Engine4_Thrust_int
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1,1};
                frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
            };
            class TiresRockOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.8912509,1,90};
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 15])";
            };
            class TiresRockIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.63095737,1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.63095737,1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.63095737,1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.63095737,1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.63095737,1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.5011872,1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.56234133,1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
            };
            class breaking_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt
            {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
        thrustDelay = 0.1;
        engineBrakeCoef = 0.1;
        overSpeedBrakeCoef = 0.8;
        brakeIdleSpeed = 1.78;
        maxSpeed = 180;
        fuelCapacity = 30;
        wheelCircumference = 1.5;
        antiRollbarForceCoef = 0.3;
        antiRollbarForceLimit = 0.2;
        antiRollbarSpeedMin = 20;
        antiRollbarSpeedMax = 50;
        idleRpm = 600;
        redRpm = 2000;
        class complexGearbox
        {
            GearboxRatios[] = {"R1",-2.351,"N",0,"D1",2.081,"D2",1.257,"D3",0.737};
            TransmissionRatios[] = {"High",4};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        driverLeftHandAnimName = "handle";
        driverRightHandAnimName = "handle_r";
        driverLeftLegAnimName = "left_foot";
        driverRightLegAnimName = "right_foot";
        simulation = "carx";
        dampersBumpCoef = 3.3;
        differentialType = "rear_open";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 15;
        enginePower = 1020;
        maxOmega = 710;
        peakTorque = 380;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 0.15;
        dampingRateZeroThrottleClutchDisengaged = 0.15;
        torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};
        changeGearMinEffectivity[] = {0.95,0.15,0.98,0.98,0.95};
        switchTime = 0.1;
        latency = 1;
        class Wheels
        {
            class LF
            {
                boneName = "wheel_1_1_damper";
                steering = "True";
                side = "left";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                mass = 20;
                MOI = 3.3;
                dampingRate = 0.5;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0,-1,0};
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                maxCompression = 0.15;
                mMaxDroop = 0.1;
                sprungMass = 100;
                springStrength = 35600;
                springDamperRate = 2680;
                longitudinalStiffnessPerUnitGravity = 100000;
                latStiffX = 25;
                latStiffY = 18000;
                frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
            };
            class LR : LF
            {
                boneName = "wheel_1_2_damper";
                steering = "False";
                side = "right";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                mass = 20;
                MOI = 3.3;
                dampingRate = 0.5;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0,-1,0};
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxCompression = 0.15;
                mMaxDroop = 0.1;
                sprungMass = 100;
                springStrength = 35600;
                springDamperRate = 2680;
                longitudinalStiffnessPerUnitGravity = 100000;
                latStiffX = 25;
                latStiffY = 18000;
                frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
            };
            class RF : LF
            {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                side = "left";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = "True";
            };
            class RR : RF
            {
                boneName = "wheel_2_2_damper";
                steering = "False";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
        };
        transportSoldier = 0;
        turnCoef = 4.5;
        ejectDeadCargo = 1;
        ejectDeadDriver = 1;
        crewCrashProtection = 0.75;
        damageEffect = "";
        damageTexDelay = 0.5;
        fuelExplosionPower = 0;
        maximumLoad = 600;
        class TransportItems {};
        class DestructionEffects
        {
            class UAVCrashSmoke
            {
                simulation = "particles";
                type = "UAVCrashSmoke";
                position = "[0,0,0]";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.012;
            };
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLightSmall";
                position = "destructionEffect1";
                intensity = 0.001;
                interval = 1;
                lifeTime = 3;
                enabled = "distToWater";
            };
            class Sound
            {
                simulation = "sound";
                position = "destructionEffect1";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
                type = "Fire";
            };
            class Fire1
            {
                simulation = "particles";
                type = "ObjectDestructionFire1Tiny";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3;
            };
            class Refract1
            {
                simulation = "particles";
                type = "SmallFireFRefract";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3;
            };
            class Smoke1
            {
                simulation = "particles";
                type = "SmallWreckSmoke";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3.5;
            };
        };
        class Turrets {};
        showNVGCargo[] = {1};
        soundAttenuationCargo[] = {1,0};
        showNVGDriver = 1;
        hideWeaponsDriver = 1;
        hideWeaponsCargo = 0;
        weapons[] = {"MiniCarHorn"};
        driverAction = "Driver_Ebike";
        getInAction = "GetInQuadbike";
        getOutAction = "GetOutQuadbike";
        preciseGetInOut = 1;
        cargoAction[] = {};
        driverCompartments = "Compartment1";
        cargoCanEject = 1;
        cargoDoors[] = {};
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoCompartments[] = {"Compartment1"};
        cargoProxyIndexes[] = {};
        cargoIsCoDriver[] = {0};
        cargoPreciseGetInOut[] = {0};
        extCameraPosition[] = {0,1.3,-3.2};
        class HitPoints : HitPoints
        {
            class HitLFWheel : HitLFWheel
            {
                armor = 0.225;
                passThrough = 0;
                radius = 0.001;
                name = "wheel_1_1_hide";
            };
            class HitRFWheel : HitRFWheel
            {
                armor = 0.225;
                passThrough = 0;
                radius = 0.001;
                name = "wheel_1_2_hide";
            };
            class hit_engine
            {
                armor = 12;
                material = -1;
                name = "motor";
                visual = "";
                passThrough = 0.3;
                minimalHit = 0.2;
                explosionShielding = 0.2;
                radius = 0.003;
            };
            class HitBody
            {
                armor = 4.5;
                material = -1;
                name = "karoserie";
                visual = "";
                passThrough = 1;
                minimalHit = 0.2;
                explosionShielding = 0.2;
                radius = 0.003;
            };
            class HitGlass1 : HitGlass1
            {
                armor = 0.3;
                explosionShielding = 3;
                radius = 0.25;
                name = "glass_hide";
            };
        };
        class Damage
        {
            tex[] = {};
            mat[] = {"A3\soft_F\Quadbike_01\Data\Quadbike_01_base.rvmat","A3\soft_F\Quadbike_01\Data\Quadbike_01_base_damage.rvmat","A3\soft_F\Quadbike_01\Data\Quadbike_01_base_destruct.rvmat"};
        };
        class Reflectors
        {
            class Left
            {
                color[] = {1900,1800,1700};
                ambient[] = {5,5,5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1;
                class Attenuation
                {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 60;
                    hardLimitEnd = 120;
                };
            };
        };
        aggregateReflectors[] = {{"Left","Right"}};
        hiddenSelections[] = {"speed","battery"};
        class EventHandlers : EventHandlers
        {
            GetIn = "params ['','','_u'];if (player isEqualTo _u) then {EPOCH_inEpochVeh = true;0 = _this spawn {params ['_v'];_path = '\x\addons\a3_epoch_vehicles\data\'; while {EPOCH_inEpochVeh} do {{_v setObjectTexture [_forEachIndex,_x]} forEach [format['%1speed%2_ca.paa',_path,floor(speed _v/9) max 0],format['%1energ%2_ca.paa',_path,floor(fuel _v*14)]];uisleep 1;};};};";
            GetOut = "params ['','','_u']; if (player isEqualTo _u) then {EPOCH_inEpochVeh = false};";
        };
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip Electric Motorcycle";
                displayName = "$STR_EPOCH_FlipElectricMotorcycle";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
    class ebike_epoch_blu : ebike_epoch
    {
        author = "Kiory";
        scope = 2;
        crew = "B_Soldier_F";
        faction = "BLU_F";
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
    };
    class jetski_epoch_blu : jetski_epoch
    {
        author = "Kiory";
        scope = 2;
        crew = "B_Soldier_F";
        faction = "BLU_F";
        side = 1;
        typicalCargo[] = {"B_Soldier_F"};
    };
    class Helicopter;
    class Helicopter_Base_F : Helicopter
    {
        scope = 0;
        class Turrets;
    };
    class Helicopter_Base_H : Helicopter_Base_F
    {
        scope = 0;
        class Turrets : Turrets
        {
            class CopilotTurret;
        };
        class AnimationSources;
        class Eventhandlers;
        class Viewoptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;
        class CargoTurret;
        class Reflectors
        {
            class Right;
        };
    };
    class mosquito_epoch_base : Helicopter_Base_H
    {
        scope = 0;
        armor = 10;
        altFullForce = 4000;
        altNoForce = 6000;
        maxSpeed = 220;
        destrType = "DestructWreck";
        maxFordingDepth = 0.55;
        mainBladeRadius = 2.5;
        liftForceCoef = 1;
        bodyFrictionCoef = 0.7;
        cyclicAsideForceCoef = 0.8;
        cyclicForwardForceCoef = 0.8;
        backRotorForceCoef = 1;
        accuracy = 0.5;
        displayName = "$STR_EPOCH_Mosquito";
        model = "\x\addons\a3_epoch_vehicles_1\mosquito\mosquito.p3d";
        driveOnComponent[] = {"Wheels"};
        icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
        picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
        driverAction = "pilot_Heli_Light_02";
        driverInAction = "pilot_Heli_Light_02";
        precisegetinout = 2;
        GetInAction = "pilot_Heli_Light_02_Enter";
        GetOutAction = "pilot_Heli_Light_02_Exit";
        cargoGetInAction[] = {};
        cargoGetOutAction[] = {};
        transportSoldier = 0;
        cargoAction[] = {};
        cargoIsCoDriver[] = {0};
        memoryPointsGetInCargo = "pos cargo";
        memoryPointsGetInCargoDir = "pos cargo dir";
        hideWeaponsCargo = 1;
        cargoProxyIndexes[] = {1};
        class TransportBackpacks {};
        class TransportItems {};
        maximumLoad = 1000;
        cargoCanEject = 1;
        driverCanEject = 1;
        class HitPoints
        {
            class HitHull
            {
                armor = 5;
                material = 51;
                name = "NEtrup";
                visual = "trup";
                passThrough = 1;
            };
            class HitEngine
            {
                armor = 2;
                material = 51;
                name = "motor";
                visual = "motor";
                passThrough = 1;
            };
            class HitAvionics
            {
                armor = 2;
                material = 51;
                name = "elektronika";
                visual = "elektronika";
                passThrough = 1;
            };
            class HitVRotor
            {
                armor = ".5";
                material = 51;
                name = "mala vrtule";
                visual = "mala vrtule staticka";
                passThrough = 0.3;
            };
            class HitHRotor
            {
                armor = 2;
                material = 51;
                name = "velka vrtule";
                visual = "velka vrtule staticka";
                passThrough = 0.1;
            };
            class HitMissiles
            {
                armor = 0.1;
                material = 51;
                name = "munice";
                visual = "munice";
                passThrough = 0.5;
            };
            class HitRGlass
            {
                armor = 0.1;
                material = 51;
                name = "sklo predni P";
                visual = "sklo predni P";
                passThrough = 0;
            };
            class HitLGlass
            {
                armor = 0.1;
                material = 51;
                name = "sklo predni L";
                visual = "sklo predni L";
                passThrough = 0;
            };
            class HitWinch
            {
                armor = 0.1;
                material = 51;
                name = "slingLoad0";
                visual = "";
                passThrough = 0;
                radius = 0.1;
            };
            class HitTransmission
            {
                armor = 0.8;
                material = -1;
                name = "transmission";
                passThrough = 0.8;
            };
            class HitGlass1
            {
                armor = 2;
                material = -1;
                name = "glass1";
                convexComponent = "glass1";
                visual = "glass1";
                passThrough = 0;
            };
            class HitGlass2 : HitGlass1
            {
                name = "glass2";
                convexComponent = "glass2";
                visual = "glass2";
            };
            class HitGlass3 : HitGlass1
            {
                name = "glass3";
                convexComponent = "glass3";
                visual = "glass3";
            };
            class HitGlass4 : HitGlass1
            {
                name = "glass4";
                convexComponent = "glass4";
                visual = "glass4";
            };
            class HitGlass5 : HitGlass1
            {
                name = "glass5";
                convexComponent = "glass5";
                visual = "glass5";
            };
            class HitGlass6 : HitGlass1
            {
                name = "glass6";
                convexComponent = "glass6";
                visual = "glass6";
            };
        };
        class Exhausts
        {
            class Exhaust1
            {
                position = "exhaust1";
                direction = "exhaust1_dir";
                effect = "ExhaustsEffectHeliMed";
            };
            class Exhaust2
            {
                position = "exhaust2";
                direction = "exhaust2_dir";
                effect = "ExhaustsEffectHeliMed";
            };
        };
        memoryPointLMissile = "Rocket_1";
        memoryPointRMissile = "Rocket_1";
        memoryPointGun = "machinegun_end";
        LockDetectionSystem = 0;
        incomingMissileDetectionSystem = 0;
        selectionFireAnim = "muzzleFlash";
        weapons[] = {};
        magazines[] = {};
        class ViewPilot : ViewPilot
        {
            initFov = 1;
            minFov = 0.375;
            maxFov = 1.2;
        };
        class Viewoptics : Viewoptics
        {
            initAngleX = 0;
            minAngleX = 0;
            maxAngleX = 0;
            initAngleY = 0;
            minAngleY = 0;
            maxAngleY = 0;
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 1.2;
        };
        class Turrets {};
        class Damage
        {
            tex[] = {};
            mat[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat"};
        };
        attenuationEffectType = "CarAttenuation";
        soundGetIn[] = {"A3\Sounds_F\air\Heli_Light_02\open","db-5",1};
        soundGetOut[] = {"A3\Sounds_F\air\Heli_Light_02\close","db0",1,50};
        soundEnviron[] = {"","db-30",1};
        soundDammage[] = {"A3\Sounds_F\air\Heli_Light_02\crash","db-5",1};
        soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2","db-5",1};
        soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2","db-2",1,600};
        soundEngineOffInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2","db-5",1};
        soundEngineOffExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2","db-2",1,600};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1","db-20",1};
        soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2","db-20",1};
        class Sounds
        {
            class Engine
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_engine_v2","db5",1,900};
                frequency = "rotorSpeed";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class RotorLowOut
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_normal_new","db3",1,1200};
                frequency = "rotorSpeed";
                volume = "camPos*(0 max (rotorSpeed-0.1))";
                cone[] = {1.6,3.14,1.6,0.95};
            };
            class RotorHighOut
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_rotor_high","db5",1,1500};
                frequency = "rotorSpeed";
                volume = "camPos*10*(0 max (rotorThrust-0.9))";
                cone[] = {1.6,3.14,1.6,0.95};
            };
            class RotorNoiseExt
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\rotor_swist","db0",1,800};
                frequency = 1;
                volume = "(camPos*(rotorSpeed factor [0.6, 0.85]))";
                cone[] = {0.7,1.3,1,0};
            };
            class EngineIn
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_engine_v2","db0",1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class RotorLowIn
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_normal","db2",1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
            };
            class RotorHighIn
            {
                sound[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_rotor_high","db3",1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*3*(rotorThrust-0.9)";
            };
        };
        class AnimationSources : AnimationSources
        {
            class Doors
            {
                source = "door";
                animPeriod = 1;
                initPhase = 0;
            };
            class HideWeapon
            {
                source = "user";
                animPeriod = "1e-05";
                initPhase = 0;
            };
            class Gatling
            {
                source = "revolving";
                weapon = "LMG_Minigun_heli";
            };
            class Gatling_flash
            {
                source = "ammorandom";
                weapon = "LMG_Minigun_heli";
            };
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "missiles_DAGR";
            };
            class Proxy
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        hiddenSelections[] = {"camo1"};
        class UserActions {};
        class Reflectors : Reflectors
        {
            class Right
            {
                color[] = {7000,7500,10000};
                ambient[] = {70,75,100};
                intensity = 50;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                position = "Light_R_pos";
                direction = "Light_R_dir";
                hitpoint = "Light_R_hitpoint";
                selection = "Light_R";
                useFlare = "True";
                flareSize = 10;
                flareMaxDistance = 250;
                dayLight = "False";
                class Attenuation
                {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 200;
                };
            };
            class Left : Right
            {
                position = "Light_L_pos";
                direction = "Light_L_dir";
                hitpoint = "Light_L_hitpoint";
                selection = "Light_L";
            };
        };
        aggregateReflectors[] = {{"Left","Right"}};
    };
    class mosquito_epoch : mosquito_epoch_base
    {
        displayName = "$STR_EPOCH_Mosquito";
        picture = "\x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito.paa";
        author = "Sequisha";
        scope = 2;
        side = 3;
        faction = "CIV_F";
        crew = "";
        accuracy = 1.5;
        weapons[] = {};
        magazines[] = {};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito_co.paa"};
        availableForSupportTypes[] = {"Drop","Transport"};
        class AnimationSources : AnimationSources
        {
            class Proxy : Proxy
            {
                initPhase = 1;
            };
            class Missiles_revolving : Missiles_revolving
            {
                initPhase = 1;
            };
        };
        cost = 900000;
    };
	class mosquito_epoch_armedG: mosquito_epoch
	{
		author = "DirtySanchez";
		displayName = "Mosquito Armed(Grenades)";
		_generalMacro = "mosquito_epoch_armedG";
		weapons[] = {"MosquitoGrenadeLauncher"};
		magazines[] = {"3Rnd_MosquitoGrenade"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito_co.paa"};
		fuelCapacity = 242;
		fuelConsumptionRate = 0.0322;
		slingLoadMaxCargoMass = 200;
		driverCanSee = 31;
		driverCanEject = 1;
		ejectDeadCargo = 1;
	};
	class C_Hatchback_01_F;
    class C_Hatchback_01_EPOCH : C_Hatchback_01_F
    {
        scope = 2;
		scopeCurator=2;
        forceInGarage=1;
		crew = "";
        side = 3;
        armor = 40;
        fuelCapacity = 45;
        fuelConsumptionRate = 0.02;
        transportMaxWeapons = 12;
        transportMaxMagazines = 64;
        transportMaxBackpacks = 12;
        maximumLoad = 1500;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems{};
        class Eventhandlers;
		class HitPoints;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "C_Hatchback_01_EPOCH1";
		};
    };
	class C_Hatchback_01_EPOCH1: C_Hatchback_01_EPOCH
	{
		author = "DirtySanchez";

		terrainCoef = 4.0;
		brakeDistance = 3.2;
		acceleration 	= 16;
		maxSpeed = 190;
		fuelConsumptionRate = 0.025;
		enginePower = 150;
		peakTorque = 500;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitRGlass;
			class HitLGlass;
			class HitGlass5;
			class HitGlass6;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitHull;
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc2",1},{"SpareTire",2},{"KitTankTrap",2}};
			upgradeToVehicle = "C_Hatchback_01_EPOCH2";
		};
	};
	class C_Hatchback_01_EPOCH2: C_Hatchback_01_EPOCH1
	{
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.05;
		crewCrashProtection	= 0.15;
		class HitPoints: HitPoints {
			class HitLFWheel: HitLFWheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel {
				armor = 0.6;
				passThrough = 0;
				explosionShielding = 1.25;
			};
			class HitEngine: HitEngine {
				armor = 1;
				passThrough = 0.4;
				explosionShielding = 0.25;
			};
			class HitBody: HitBody {
				armor = 1.5;
				passThrough = 0.4;
				explosionShielding = 1.25;
			};
			class HitGlass1: HitGlass1 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass2: HitGlass2 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass3: HitGlass3 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass4: HitGlass4 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitRGlass: HitRGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitLGlass: HitLGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitGlass5: HitGlass5 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass6: HitGlass6 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitHull: HitHull {
				armor = 1.75;
				passThrough = 0.4;
				explosionShielding = 6;
				minimalHit = 0.2;
			};
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc3",1},{"ItemPipe",2},{"KitShelf",2}};
			upgradeToVehicle = "C_Hatchback_01_EPOCH3";
		};
	};
	class C_Hatchback_01_EPOCH3: C_Hatchback_01_EPOCH2
	{
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 18;
		maximumLoad = 3000;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc4",1},{"CircuitParts",1},{"ItemScraps",2},{"jerrycan_epoch",2}};
			upgradeToVehicle = "C_Hatchback_01_EPOCH4";
		};
	};
	class C_Hatchback_01_EPOCH4: C_Hatchback_01_EPOCH3
	{
		author = "DirtySanchez";
		fuelCapacity = 90;
		fuelConsumptionRate = 0.0175;
	};
    class C_Hatchback_01_sport_F;
    class C_Hatchback_02_EPOCH : C_Hatchback_01_sport_F
    {
        scope = 2;
		scopeCurator=2;
        crew = "";
        side = 3;
        armor = 40;
        fuelCapacity = 45;
        fuelConsumptionRate = 0.03;
        transportMaxWeapons = 12;
        transportMaxMagazines = 64;
        transportMaxBackpacks = 12;
        maximumLoad = 1500;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
		class HitPoints;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "C_Hatchback_02_EPOCH1";
		};
    };
	class C_Hatchback_02_EPOCH1: C_Hatchback_02_EPOCH
	{
		author = "DirtySanchez";

		terrainCoef = 4.0;
		brakeDistance = 4.75;
		acceleration = 16;
		maxSpeed = 350;
		fuelConsumptionRate = 0.035;
		enginePower = 375;
		peakTorque = 820;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitRGlass;
			class HitLGlass;
			class HitGlass5;
			class HitGlass6;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitHull;
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc2",1},{"SpareTire",2},{"KitTankTrap",2}};
			upgradeToVehicle = "C_Hatchback_02_EPOCH2";
		};
	};
	class C_Hatchback_02_EPOCH2: C_Hatchback_02_EPOCH1
	{
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.05;
		crewCrashProtection	= 1.5;
		class HitPoints: HitPoints {
			class HitLFWheel: HitLFWheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.25;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel {
				armor = 0.6;
				passThrough = 0;
				explosionShielding = 1.25;
			};
			class HitEngine: HitEngine {
				armor = 1;
				passThrough = 0.4;
				explosionShielding = 0.25;
			};
			class HitBody: HitBody {
				armor = 1.5;
				passThrough = 0.4;
				explosionShielding = 1.25;
			};
			class HitGlass1: HitGlass1 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass2: HitGlass2 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass3: HitGlass3 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass4: HitGlass4 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitRGlass: HitRGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitLGlass: HitLGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitGlass5: HitGlass5 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass6: HitGlass6 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitHull: HitHull {
				armor = 1.75;
				passThrough = 0.4;
				explosionShielding = 6;
				minimalHit = 0.2;
			};
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc3",1},{"ItemPipe",2},{"KitShelf",2}};
			upgradeToVehicle = "C_Hatchback_02_EPOCH3";
		};
	};
	class C_Hatchback_02_EPOCH3: C_Hatchback_02_EPOCH2
	{
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 18;
		maximumLoad = 3000;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc4",1},{"CircuitParts",1},{"ItemScraps",2},{"jerrycan_epoch",2}};
			upgradeToVehicle = "C_Hatchback_02_EPOCH4";
		};
	};
	class C_Hatchback_02_EPOCH4: C_Hatchback_02_EPOCH3
	{
		author = "DirtySanchez";
		fuelCapacity = 90;
		fuelConsumptionRate = 0.0275;
	};
	class C_Offroad_01_F;
    class C_Offroad_01_EPOCH : C_Offroad_01_F
    {
        scope = 2;
		scopeCurator = 2;
		forceInGarage=1;
        crew = "";
        side = 3;
        armor = 50;
        fuelCapacity = 75;
        fuelConsumptionRate = 0.03;
        maximumLoad = 3500;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
		class HitPoints;
		animationList[] = {"HidePolice", 1, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 1, "HideDoor3", 0, "HideBackpacks", 1,"HideBumper1", 0.27, "HideBumper2", 1, "HideConstruction", 1};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "C_Offroad_01_EPOCH1";
		};
    };
	class C_Offroad_01_EPOCH1: C_Offroad_01_EPOCH
	{
		author = "DirtySanchez";
		terrainCoef = 1.75;
		brakeDistance = 45;
		maxSpeed = 225;
		fuelConsumptionRate = 0.0325;
		enginePower = 375;
		peakTorque = 800;
		idleRpm = 800;
		redRpm = 6000;
		class complexGearbox {
			GearboxRatios[] = {"R1", -3.231, "N", 0, "D1", 4.462, "D2", 3.57, "D3", 2.571, "D4", 1.97, "D5", 1.601, "D6", 0.9, "D7", 0.65};
			TransmissionRatios[] = {"High", 4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 0.75;
		};
		animationList[] = {"HidePolice", 1, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 1, "HideBackpacks", 1,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 1};
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitRGlass;
			class HitLGlass;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitHull;
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc2",1},{"SpareTire",2},{"KitTankTrap",2}};
			upgradeToVehicle = "C_Offroad_01_EPOCH2";
		};
	};
	class C_Offroad_01_EPOCH2: C_Offroad_01_EPOCH1
	{
		author = "DirtySanchez";
		armor = 125;
		armorLights = 0.6;
		crewCrashProtection	= 1.5;
		animationList[] = {"HidePolice", 1, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 1,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class HitPoints: HitPoints {
			class HitLFWheel: HitLFWheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel {
				armor = 2.5;
				passThrough = 0;
				explosionShielding = 1.25;
			};
			class HitEngine: HitEngine {
				armor = 4.5;
				passThrough = 0.4;
				explosionShielding = 0.25;
			};
			class HitBody: HitBody {
				armor = 1.5;
				passThrough = 0.75;
				explosionShielding = 1.25;
			};
			class HitGlass1: HitGlass1 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass2: HitGlass2 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitRGlass: HitRGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitLGlass: HitLGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitGlass3: HitGlass3 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass4: HitGlass4 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass5: HitGlass5 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass6: HitGlass6 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitHull: HitHull {
				armor = 1.75;
				passThrough = 0.4;
				explosionShielding = 6;
				minimalHit = 0.2;
			};
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc3",1},{"ItemPipe",2},{"KitShelf",2}};
			upgradeToVehicle = "C_Hatchback_01_EPOCH3";
		};
	};
	class C_Offroad_01_EPOCH3: C_Offroad_01_EPOCH2
	{
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 4;
		maximumLoad = 3000;
		animationList[] = {"HidePolice", 1, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 0,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc4",1},{"CircuitParts",1},{"ItemScraps",2},{"jerrycan_epoch",2}};
			upgradeToVehicle = "C_Offroad_01_EPOCH4";
		};
	};
	class C_Offroad_01_EPOCH4: C_Offroad_01_EPOCH3
	{
		author = "DirtySanchez";
		fuelCapacity = 100;
		fuelConsumptionRate = 0.0275;
		animationList[] = {"HidePolice", 1, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 0,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDocPolice",1},{"CircuitParts",2},{"ItemScraps",2},{"ItemBulb",4}};
			upgradeToVehicle = "C_Offroad_01_EPOCH5";
		};
	};
	class C_Offroad_01_EPOCH5: C_Offroad_01_EPOCH4
	{
		author = "DirtySanchez";
		textureList[] = {"White", 1};
		animationList[] = {"HidePolice", 0, "HideServices", 1, "HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 0,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class UserActions {
			class beacons_start {
				userActionID = 50;
				displayName = "Beacons On";
				displayNameDefault = "Beacons On";
				position = "temp";
				priority = 1.5;
				radius = 2;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase 'BeaconsStart' < 0.5 AND Alive this AND driver this == player AND this animationPhase 'hidePolice' < 0.5";
				statement = "if(isNil 'EPOCH_Siren')then{EPOCH_Siren = 0;};this animate ['BeaconsStart',1]; if(diag_tickTime > EPOCH_Siren + 31)then{vehicle player say3d 'police_siren'; EPOCH_Siren = diag_tickTime;};";
			};
			class beacons_stop: beacons_start {
				userActionID = 51;
				displayName = "Beacons Off";
				displayNameDefault = "Beacons Off";
				condition = "this animationPhase 'BeaconsStart' > 0.5 AND Alive this AND driver this == player AND this animationPhase 'hidePolice' < 0.5";
				statement = "this animate ['BeaconsStart',0];";
				position = "temp";
				priority = 1.5;
				radius = 2;
				animPeriod = 2;
				onlyForplayer = 0;
			};
		};
	};
    class C_Quadbike_01_F;
    class C_Quadbike_01_EPOCH : C_Quadbike_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 30;
        fuelCapacity = 30;
        fuelConsumptionRate = 0.01;
        maximumLoad = 600;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip ATV";
                displayName = "$STR_EPOCH_FlipATV";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
	class C_SUV_01_F;
	class C_SUV_01_EPOCH: C_SUV_01_F
	{
		scope = 2;
		scopeCurator=2;
		crew = "";
		side = 3;
		armor = 45;
		fuelCapacity = 45;
		fuelConsumptionRate = 0.02;
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		transportMaxBackpacks = 12;
		maximumLoad = 2000;
		faction = "CIV_F";
		typicalCargo[] = {};
		class TransportItems{};
		class Eventhandlers;
		class HitPoints;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "C_SUV_01_EPOCH1";
		};
	};
	class C_SUV_01_EPOCH1: C_SUV_01_EPOCH
	{
		author = "DirtySanchez";
		terrainCoef = 1.75;
		brakeDistance = 6.2;
		acceleration 	= 17;
		maxSpeed = 274;
		fuelConsumptionRate = 0.025;
		enginePower = 454;
		peakTorque = 750;
		idleRpm = 850;
		redRpm = 6250;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitHull;
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc2",1},{"SpareTire",2},{"KitTankTrap",2}};
			upgradeToVehicle = "C_SUV_01_EPOCH2";
		};
	};
	class C_SUV_01_EPOCH2: C_SUV_01_EPOCH1
	{
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.1;
		crewCrashProtection	= 1.5;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel {
				armor = 0.9;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.9;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.9;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.9;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel {
				armor = 2.3;
				passThrough = 0;
				explosionShielding = 1.25;
			};
			class HitEngine: HitEngine {
				armor = 4.25;
				passThrough = 0.4;
				explosionShielding = 0.25;
			};
			class HitGlass1: HitGlass1 {
				armor = 2.3;
				explosionShielding = 1.5;
			};
			class HitGlass2: HitGlass2 {
				armor = 2.3;
				explosionShielding = 1.5;
			};
			class HitGlass3: HitGlass3 {
				armor = 2.3;
				explosionShielding = 1.5;
			};
			class HitGlass4: HitGlass4 {
				armor = 2.3;
				explosionShielding = 1.5;
			};
			class HitGlass5: HitGlass5 {
				armor = 2.3;
				explosionShielding = 1.5;
			};
			class HitGlass6: HitGlass6 {
				armor = 1.2; // 1
				explosionShielding = 1.5;
			};
			class HitRGlass: HitRGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitLGlass: HitLGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitBody: HitBody {
				armor = 1.25;
				passThrough = 0.75;
				explosionShielding = 1.25;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitHull: HitHull {
				armor = 1.75;
				passThrough = 0.4;
				explosionShielding = 6;
				minimalHit = 0.2;
			};
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc3",1},{"ItemPipe",2},{"KitShelf",2}};
			upgradeToVehicle = "C_SUV_01_EPOCH3";
		};
	};
	class C_SUV_01_EPOCH3: C_SUV_01_EPOCH2
	{
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 18;
		maximumLoad = 3750;
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc4",1},{"CircuitParts",1},{"ItemScraps",2},{"jerrycan_epoch",2}};
			upgradeToVehicle = "C_SUV_01_EPOCH4";
		};
	};
	class C_SUV_01_EPOCH4: C_SUV_01_EPOCH3
	{
		author = "DirtySanchez";
		fuelCapacity = 90;
		fuelConsumptionRate = 0.0185;
	};
    class C_Rubberboat;
    class C_Rubberboat_EPOCH : C_Rubberboat
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 500;
        typicalCargo[] = {};
        class TransportItems {};
        hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
        class EventHandlers;
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
    };
    class O_Boat_Transport_01_F;
    class C_Rubberboat_02_EPOCH : O_Boat_Transport_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 500;
        typicalCargo[] = {};
        class TransportItems {};
        hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
        class EventHandlers;
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
    };
    class O_Lifeboat;
    class C_Rubberboat_03_EPOCH : O_Lifeboat
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 500;
        typicalCargo[] = {};
        class TransportItems {};
        hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
        class EventHandlers;
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
    };
    class I_Boat_Transport_01_F;
    class C_Rubberboat_04_EPOCH : I_Boat_Transport_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 500;
        typicalCargo[] = {};
        class TransportItems {};
        hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
        class EventHandlers;
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
    };
    class C_Van_01_box_F;
    class C_Van_01_box_EPOCH : C_Van_01_box_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 80;
        fuelCapacity = 55;
        fuelConsumptionRate = 0.02;
        maximumLoad = 4000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
	class C_Van_01_box_EPOCH3 : C_Van_01_box_EPOCH
    {
		author = "DirtySanchez";
		maximumLoad = 6000;
		transportMaxWeapons = 96;
		transportMaxMagazines = 512;
		transportMaxBackpacks = 128;
	};
	class C_Van_01_box_EPOCH4 : C_Van_01_box_EPOCH3
    {
		author = "DirtySanchez";
		fuelCapacity = 75;
        fuelConsumptionRate = 0.018;
	};
    class C_Van_01_transport_F;
    class C_Van_01_transport_EPOCH : C_Van_01_transport_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 80;
        fuelCapacity = 55;
        fuelConsumptionRate = 0.02;
        maximumLoad = 4000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
	class C_Van_01_transport_EPOCH3 : C_Van_01_box_EPOCH3{};
	class C_Van_01_transport_EPOCH4 : C_Van_01_box_EPOCH4{};
    class C_Boat_Civil_01_F;
    class C_Boat_Civil_01_EPOCH : C_Boat_Civil_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 800;
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
		animationList[] = {"hidePolice", 0, "HideRescueSigns", 0, "HidePoliceSigns", 0};
		class UserActions
		{
			class PushTheThing
			{
				displayNameDefault = "Push";
				displayName = "$STR_EPOCH_Push";
				position = "";
				radius = 5;
				onlyForPlayer = 1;
				condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
				statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
			};
		};
    };
    class C_Boat_Civil_01_police_F;
    class C_Boat_Civil_01_police_EPOCH : C_Boat_Civil_01_police_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 800;
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
		animationList[] = {"hidePolice", 1, "HideRescueSigns", 0, "HidePoliceSigns", 1};
		class UserActions
		{
			class PushTheThing
			{
				displayNameDefault = "Push";
				displayName = "$STR_EPOCH_Push";
				position = "";
				radius = 5;
				onlyForPlayer = 1;
				condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
				statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
			};
			class beacons_start
			{
				userActionID = 50;
				displayName = "Beacons On";
				displayNameDefault = "Beacons On";
				position = "mph_axis";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase 'BeaconsStart' < 0.5 AND Alive(this) AND driver this == player";
				statement = "if(isNil 'EPOCH_Siren')then{EPOCH_Siren = 0;}; this animate ['BeaconsStart',1]; if(diag_tickTime > EPOCH_Siren + 31)then{vehicle player say3d 'police_siren'; EPOCH_Siren = diag_tickTime;};";
			};
			class beacons_stop: beacons_start
			{
				userActionID = 51;
				displayName = "Beacons Off";
				displayNameDefault = "Beacons Off";
				condition = "this animationPhase 'BeaconsStart' > 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate ['BeaconsStart',0];";
			};
		};
    };
    class C_Boat_Civil_01_rescue_F;
    class C_Boat_Civil_01_rescue_EPOCH : C_Boat_Civil_01_rescue_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 600;
        typicalCargo[] = {};
        class TransportItems {};
        class Eventhandlers;
		animationList[] = {"hidePolice", 0, "HideRescueSigns", 1, "HidePoliceSigns", 0};
		class UserActions
		{
			class PushTheThing
			{
				displayNameDefault = "Push";
				displayName = "$STR_EPOCH_Push";
				position = "";
				radius = 5;
				onlyForPlayer = 1;
				condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
				statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
			};
		};
    };
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_EPOCH : B_Heli_Light_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 35;
        faction = "CIV_F";
        maximumLoad = 1000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions {
			class BenchL_Fold {
				userActionID = 58;
				displayName = "Fold left bench";
				displayNameDefault = "";
				textToolTip = "";
				position = "action_doorL_front";
				priority = 1.5;
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this animationPhase 'BenchL_Up') == 0) && (alive this) && ((this animationPhase 'AddBenches') == 1) && {(_x select 2) in [3,4]} count fullCrew [this, 'Turret'] == 0 ";
				statement = "this animate ['BenchL_Up', 1]; {this lockCargo [_x, true]} forEach [3,4]";
			};
			class BenchR_Fold: BenchL_Fold {
				userActionID = 60;
				displayName = "Fold right bench";
				position = "action_doorR_front";
				condition = "((locked this) != 2) && ((this animationPhase 'BenchR_Up') == 0) && (alive this) && ((this animationPhase 'AddBenches') == 1) && {(_x select 2) in [2,5]} count fullCrew [this, 'Turret'] == 0";
				statement = "this animate ['BenchR_Up', 1]; {this lockCargo [_x, true]} forEach [2,5]";
			};
			class BenchL_Unfold: BenchL_Fold {
				userActionID = 59;
				displayName = "Unfold left bench";
				condition = "((locked this) != 2) && ((this animationPhase 'BenchL_Up') == 1) && (alive this) && ((this animationPhase 'AddBenches') == 1) && {(_x select 2) in [3,4]} count fullCrew [this, 'Turret'] == 0";
				statement = "this animate ['BenchL_Up', 0]; {this lockCargo [_x, false]} forEach [3,4]";
				textToolTip = "";
				displayNameDefault = "";
			};
			class BenchR_Unfold: BenchL_Unfold {
				userActionID = 61;
				displayName = "Unfold right bench";
				position = "action_doorR_front";
				condition = "((locked this) != 2) && ((this animationPhase 'BenchR_Up') == 1) && (alive this) && ((this animationPhase 'AddBenches') == 1) && {(_x select 2) in [2,5]} count fullCrew [this, 'Turret'] == 0";
				statement = "this animate ['BenchR_Up', 0]; {this lockCargo [_x, false]} forEach [2,5]";
			};
		};
    };
    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_EPOCH : B_Heli_Transport_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 60;
        faction = "CIV_F";
        maximumLoad = 3000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions {
			class DoorL1_Open {
				userActionID = 50;
				displayName = "Open Left Door";
				position = "door_L";
				condition = "((locked this) != 2) && ((this doorPhase 'door_L') == 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_L', 1]";
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				priority = 0.5;
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class DoorR1_Open: DoorL1_Open {
				userActionID = 51;
				displayName = "Open Right Door";
				position = "door_R";
				condition = "((locked this) != 2) && ((this doorPhase 'door_R') == 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open {
				userActionID = 53;
				displayName = "Close Left Door";
				condition = "((this doorPhase 'door_L') > 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_L', 0]";
			};
			class DoorR1_Close: DoorR1_Open {
				userActionID = 54;
				displayName = "Close Right Door";
				condition = "((this doorPhase 'door_R') > 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_R', 0]";
			};
		};
    };
    class B_Heli_Transport_01_camo_F;
    class B_Heli_Transport_01_camo_EPOCH : B_Heli_Transport_01_camo_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 60;
        faction = "CIV_F";
        maximumLoad = 3000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions {
			class DoorL1_Open {
				userActionID = 50;
				displayName = "Open Left Door";
				position = "door_L";
				condition = "((locked this) != 2) && ((this doorPhase 'door_L') == 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_L', 1]";
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				priority = 0.5;
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class DoorR1_Open: DoorL1_Open {
				userActionID = 51;
				displayName = "Open Right Door";
				position = "door_R";
				condition = "((locked this) != 2) && ((this doorPhase 'door_R') == 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open {
				userActionID = 53;
				displayName = "Close Left Door";
				condition = "((this doorPhase 'door_L') > 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_L', 0]";
			};
			class DoorR1_Close: DoorR1_Open {
				userActionID = 54;
				displayName = "Close Right Door";
				condition = "((this doorPhase 'door_R') > 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_R', 0]";
			};
		};
    };
    class B_SDV_01_F;
    class B_SDV_01_EPOCH : B_SDV_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 500;
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class UserActions
        {
            class PushTheThing
            {
                displayNameDefault = "Push";
                displayName = "$STR_EPOCH_Push";
                position = "";
                radius = 5;
                onlyForPlayer = 1;
                condition = "alive this && crew this isEqualTo [] && local this && isTouchingGround player";
                statement = "_vel = velocity this; _dir = getDir player; this setVelocity[(_vel select 0)+(sin _dir * 2),(_vel select 1)+(cos _dir * 2),(_vel select 2)]; ";
            };
        };
    };
    class B_MRAP_01_F;
    class B_MRAP_01_EPOCH : B_MRAP_01_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 75;
        faction = "CIV_F";
        maximumLoad = 3500;
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class HitPoints;
		class UserActions {
			class Door_LF_Open {
				userActionID = 50;
				displayName = "Open Driver Door";
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				priority = 0.5;
				position = "door_LF";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF') == 0) AND Alive(this) && (speed this < 5) ";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class Door_RF_Open: Door_LF_Open {
				userActionID = 51;
				displayName = "Open Passenger Door";
				position = "door_RF";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF') == 0) AND Alive(this) && (speed this < 5)";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class Door_LB_Open: Door_LF_Open {
				userActionID = 52;
				displayName = "Open RearL Door";
				position = "door_LB";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LB') == 0) AND Alive(this) && (speed this < 5)";
				statement = "this animateDoor ['Door_LB', 1]";
			};
			class Door_RB_Open: Door_LF_Open {
				userActionID = 53;
				displayName = "Open RearR Door";
				position = "Door_RB";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RB') == 0) AND Alive(this) && (speed this < 5)";
				statement = "this animateDoor ['Door_RB', 1]";
			};
			class Door_LF_Close: Door_LF_Open {
				userActionID = 50;
				displayName = "Close Driver Door";
				condition = "((this doorPhase 'Door_LF') > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class Door_RF_Close: Door_RF_Open {
				userActionID = 51;
				displayName = "Close Passenger Door";
				condition = "((this doorPhase 'Door_RF') > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
			class Door_LB_Close: Door_LB_Open {
				userActionID = 52;
				displayName = "Close RearL Door";
				condition = "((this doorPhase 'Door_LB') > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_LB', 0]";
			};
			class Door_RB_Close: Door_RB_Open {
				userActionID = 53;
				displayName = "Close RearR Door";
				condition = "((this doorPhase 'Door_RB') > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_RB', 0]";
			};
		};
    };
	class B_MRAP_01_EPOCH1 : B_MRAP_01_EPOCH
    {
		author = "DirtySanchez";
		terrainCoef = 1.75;
		maxSpeed = 135;
		fuelConsumptionRate = 0.012;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitHull;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitRGlass;
			class HitLGlass;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};
	class B_MRAP_01_EPOCH2 : B_MRAP_01_EPOCH1
    {
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.45;
		crewCrashProtection	= 1.5;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel
			{
				armor = 0.55;
				explosionShielding = 0.25;
			};
			class HitHull: HitHull
			{
				armor = 1.2;
				explosionShielding = 0.45;
			};
			class HitEngine: HitHull
			{
				armor = 0.55;
				explosionShielding = 0.25;
			};
			class HitBody: HitHull
			{
				explosionShielding = 2.5;
			};
			class HitGlass1: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass2: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass3: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass4: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass5: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass6: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitRGlass: HitHull
			{
				armor = 0.25;
				explosionShielding = 2.2;
			};
			class HitLGlass: HitHull
			{
				armor = 0.25;
				explosionShielding = 2.2;
			};
			class HitLBWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitLMWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitRBWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitRMWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
		};
	};
	class B_MRAP_01_EPOCH3 : B_MRAP_01_EPOCH
    {
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 8;
		maximumLoad = 4250;
	};
	class B_MRAP_01_EPOCH4 : B_MRAP_01_EPOCH3
    {
		author = "DirtySanchez";
		fuelCapacity = 115;
		fuelConsumptionRate = 0.009;
	};
    class O_MRAP_02_F;
    class O_MRAP_02_EPOCH : O_MRAP_02_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 75;
        faction = "CIV_F";
        maximumLoad = 3500;
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class HitPoints;
		class UserActions {
			class DoorLF_Open {
				userActionID = 50;
				displayName = "Open left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open door";
				priority = 0.1;
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "door1_axis";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class DoorLF_Close: DoorLF_Open {
				userActionID = 51;
				displayName = "Close left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class DoorRF_Open: DoorLF_Open {
				userActionID = 52;
				displayName = "Open right front door";
				position = "door3_axis";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class DoorRF_Close: DoorRF_Open {
				userActionID = 53;
				displayName = "Close right front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
			class DoorLM_Open: DoorLF_Open {
				userActionID = 54;
				displayName = "Open left middle door";
				position = "door5_axis";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LM')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LM', 1]";
			};
			class DoorLM_Close: DoorLM_Open {
				userActionID = 55;
				displayName = "Close left middle door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LM') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LM', 0]";
			};
			class DoorRM_Open: DoorLM_Open {
				userActionID = 56;
				displayName = "Open right middle door";
				position = "door7_axis";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RM')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RM', 1]";
			};
			class DoorRM_Close: DoorRM_Open {
				userActionID = 57;
				displayName = "Close right middle door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RM') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RM', 0]";
			};
			class Door_rear_Open: DoorLM_Open {
				userActionID = 58;
				displayName = "Open rear door";
				position = "door9_axis";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_rear')  ==  0) && (alive this)";
				statement = "this animateDoor ['Door_rear', 1]";
			};
			class Door_rear_Close: Door_rear_Open {
				userActionID = 59;
				displayName = "Close rear door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_rear') > 0) && (alive this)";
				statement = "this animateDoor ['Door_rear', 0]";
			};
		};
    };
	class O_MRAP_02_EPOCH1 : O_MRAP_02_EPOCH
    {
		author = "DirtySanchez";
		terrainCoef = 1.75;
		maxSpeed = 145;
		fuelConsumptionRate = 0.012;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitReserveWheel;
			class HitFuel;
			class HitHull;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
			class HitGlass9;
			class HitGlass10;
			class HitGlass11;
			class HitRGlass;
			class HitLGlass;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};
	class O_MRAP_02_EPOCH2 : O_MRAP_02_EPOCH1
    {
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.45;
		crewCrashProtection	= 1.5;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel {
				armor = 0.75;
				explosionShielding = 4.2;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.75;
				explosionShielding = 4.2;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.75;
				explosionShielding = 4.2;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.75;
				explosionShielding = 4.2;
			};
			class HitReserveWheel: HitRF2Wheel {
				armor = 0.75;
				explosionShielding = 0.9;
			};
			class HitFuel: HitFuel {
				armor = 0.55;
				explosionShielding = 0.15;
			};
			class HitHull: HitHull {
				armor = 1.2;
				explosionShielding = 0.4;
			};
			class HitEngine: HitEngine {
				armor = 0.75;
				explosionShielding = 0.5;
			};
			class HitBody: HitBody {
				armor = 4.2;
				explosionShielding = 1.2;
			};
			class HitGlass1: HitGlass1 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass2: HitGlass2 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass3: HitGlass3 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass4: HitGlass4 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass5: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass6: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass7: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass8: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass9: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass10: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass11: HitGlass5 {
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitRGlass: HitRGlass {
				armor = 0.4;
				explosionShielding = 2.2;
			};
			class HitLGlass: HitLGlass {
				armor = 0.4;
				explosionShielding = 2.2;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.4;
				explosionShielding = 4.2;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.4;
				explosionShielding = 4.2;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.4;
				explosionShielding = 4.2;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.4;
				explosionShielding = 4.2;
			};
		};
	};
	class O_MRAP_02_EPOCH3 : O_MRAP_02_EPOCH2
    {
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 8;
		maximumLoad = 4250;
	};
	class O_MRAP_02_EPOCH4 : O_MRAP_02_EPOCH3
    {
		author = "DirtySanchez";
		fuelCapacity = 115;
		fuelConsumptionRate = 0.009;
	};
    class I_MRAP_03_F;
    class I_MRAP_03_EPOCH : I_MRAP_03_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 75;
        faction = "CIV_F";
        maximumLoad = 3500;
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class HitPoints;
        class RenderTargets
        {
            class commander_display
            {
                renderTarget = "rendertarget0";
                class CameraView1
                {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.5;
                };
            };
            class driver_display
            {
                renderTarget = "rendertarget2";
                class CameraView1
                {
                    pointPosition = "PIP2_pos";
                    pointDirection = "PIP2_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.6;
                };
            };
            class mirrorL
            {
                renderTarget = "rendertarget4";
                class CameraView1
                {
                    pointPosition = "PIP4_pos";
                    pointDirection = "PIP4_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.35;
                };
            };
            class mirrorR
            {
                renderTarget = "rendertarget5";
                class CameraView1
                {
                    pointPosition = "PIP5_pos";
                    pointDirection = "PIP5_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.35;
                };
            };
        };
		class UserActions
		{
			class DoorLF_Open {
				userActionID = 50;
				displayName = "Open left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open door";
				priority = 0.1;
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "door1_axis";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class DoorLF_Close: DoorLF_Open {
				userActionID = 51;
				displayName = "Close left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class DoorRF_Open: DoorLF_Open {
				userActionID = 52;
				displayName = "Open right front door";
				position = "door3_axis";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class DoorRF_Close: DoorRF_Open {
				userActionID = 53;
				displayName = "Close right front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
		};
    };
	class I_MRAP_03_EPOCH1 : I_MRAP_03_EPOCH
    {
		author = "DirtySanchez";
		terrainCoef = 1.75;
		maxSpeed = 140;
		fuelConsumptionRate = 0.012;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitHull;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitRGlass;
			class HitLGlass;
			class HitGlass6;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};
	class I_MRAP_03_EPOCH2 : I_MRAP_03_EPOCH1
    {
		author = "DirtySanchez";
		armor = 100;
		armorLights = 0.45;
		crewCrashProtection	= 1.5;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.75;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel
			{
				armor = 0.55;
				explosionShielding = 0.25;
			};
			class HitHull: HitHull
			{
				armor = 1.2;
				explosionShielding = 0.45;
			};
			class HitEngine: HitHull
			{
				armor = 0.55;
				explosionShielding = 0.25;
			};
			class HitBody: HitHull
			{
				explosionShielding = 2.5;
			};
			class HitGlass1: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass2: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass3: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass4: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitGlass5: HitHull
			{
				armor = 1.75;
				explosionShielding = 3.2;
			};
			class HitRGlass: HitHull
			{
				armor = 0.25;
				explosionShielding = 2.2;
			};
			class HitLGlass: HitHull
			{
				armor = 0.25;
				explosionShielding = 2.2;
			};
			class HitGlass6: HitHull
			{
				armor = 0.15;
				explosionShielding = 2.2;
			};
			class HitLBWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitLMWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitRBWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
			class HitRMWheel: HitHull
			{
				armor = 0.25;
				explosionShielding = 4.2;
			};
		};
	};
	class I_MRAP_03_EPOCH3 : I_MRAP_03_EPOCH2
    {
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 8;
		maximumLoad = 4250;
	};
	class I_MRAP_03_EPOCH4 : I_MRAP_03_EPOCH3
    {
		author = "DirtySanchez";
		fuelCapacity = 115;
		fuelConsumptionRate = 0.009;
	};
    class B_Truck_01_transport_F;
    class B_Truck_01_transport_EPOCH : B_Truck_01_transport_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 80;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 6000;
        transportMaxBackpacks = 64;
        transportMaxMagazines = 256;
        transportMaxWeapons = 64;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
	class B_G_Offroad_01_armed_F;
	class B_G_Offroad_01_armed_EPOCH: B_G_Offroad_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		crew = "";
		side = 3;
		armor = 80;
		fuelCapacity = 350;
		fuelConsumptionRate = 26;
		maximumLoad = 3500;
		faction = "CIV_F";
		typicalCargo[] = {};
		class TransportItems{};
		class Eventhandlers;
		class HitPoints;
		animationList[] = {"HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 1, "HideBackpacks", 1,"HideBumper1", 1, "HideBumper2", 1, "HideConstruction", 1};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "B_G_Offroad_01_armed_EPOCH1";
		};
	};
	class B_G_Offroad_01_armed_EPOCH1: B_G_Offroad_01_armed_EPOCH
	{
		author = "DirtySanchez";
		terrainCoef = 1.75;
		brakeDistance = 45;
		maxSpeed = 225;
		enginePower = 375;
		peakTorque = 800;
		idleRpm = 800;
		redRpm = 6000;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitRGlass;
			class HitLGlass;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitHull;
		};
		animationList[] = {"HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 1, "HideBackpacks", 1,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 1};
		class complexGearbox {
			GearboxRatios[] = {"R1", -3.231, "N", 0, "D1", 4.462, "D2", 3.57, "D3", 2.571, "D4", 1.97, "D5", 1.601, "D6", 0.9, "D7", 0.65};
			TransmissionRatios[] = {"High", 4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 0.75; // 2
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc1",1},{"ItemCables",1},{"CircuitParts",1},{"VehicleRepairLg",2}};
			upgradeToVehicle = "B_G_Offroad_01_armed_EPOCH2";
		};
	};
	class B_G_Offroad_01_armed_EPOCH2: B_G_Offroad_01_armed_EPOCH1
	{
		author = "DirtySanchez";
		armor = 185;
		armorLights = 0.6;
		crewCrashProtection	= 1.5;
		animationList[] = {"HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 1,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class HitPoints: HitPoints {
			class HitLFWheel: HitLFWheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitRFWheel: HitRFWheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.7;
				explosionShielding = 3.5;
			};
			class HitFuel: HitFuel {
				armor = 2.5;
				passThrough = 0;
				explosionShielding = 1.25;
			};
			class HitEngine: HitEngine {
				armor = 4.5;
				passThrough = 0.4;
				explosionShielding = 0.25;
			};
			class HitBody: HitBody {
				armor = 1.5;
				passThrough = 0.75;
				explosionShielding = 1.25;
			};
			class HitGlass1: HitGlass1 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitGlass2: HitGlass2 {
				armor = 0.35;
				explosionShielding = 1.5;
			};
			class HitRGlass: HitRGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitLGlass: HitLGlass {
				armor = 0.3;
				explosionShielding = 1.5;
			};
			class HitGlass3: HitGlass3 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass4: HitGlass4 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass5: HitGlass5 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitGlass6: HitGlass6 {
				armor = 0.2;
				explosionShielding = 1.5;
			};
			class HitLBWheel: HitLBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitLMWheel: HitLMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRBWheel: HitRBWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitRMWheel: HitRMWheel {
				armor = 0.25;
				passThrough = 0.2;
				explosionShielding = 3.5;
			};
			class HitHull: HitHull {
				armor = 1.75;
				passThrough = 0.4;
				explosionShielding = 6;
				minimalHit = 0.2;
			};
		};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc3",1},{"ItemPipe",2},{"KitShelf",2}};
			upgradeToVehicle = "B_G_Offroad_01_armed_EPOCH3";
		};
	};
	class B_G_Offroad_01_armed_EPOCH3: B_G_Offroad_01_armed_EPOCH2
	{
		author = "DirtySanchez";
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 4;
		maximumLoad = 5500;
		animationList[] = {"HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 0,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
		class Upgrades{
			upgradeReqItems[] = {{"ItemVehDoc4",1},{"CircuitParts",1},{"ItemScraps",2},{"jerrycan_epoch",2}};
			upgradeToVehicle = "B_G_Offroad_01_armed_EPOCH4";
		};
	};
	class B_G_Offroad_01_armed_EPOCH4: B_G_Offroad_01_armed_EPOCH3
	{
		author = "DirtySanchez";
		fuelCapacity = 550;
		fuelConsumptionRate = 24;
		animationList[] = {"HideDoor1", 0, "HideDoor2", 0, "HideGlass2", 0, "HideDoor3", 0, "HideBackpacks", 0,"HideBumper1", 1, "HideBumper2", 0, "HideConstruction", 0};
	};
    class B_Truck_01_covered_F;
    class B_Truck_01_covered_EPOCH : B_Truck_01_covered_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 80;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 6000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
    class B_Truck_01_mover_F;
    class B_Truck_01_mover_EPOCH : B_Truck_01_mover_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 80;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 4000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
    class B_Truck_01_box_F;
    class B_Truck_01_box_EPOCH : B_Truck_01_box_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        armor = 80;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 6000;
        transportMaxBackpacks = 64;
        transportMaxMagazines = 256;
        transportMaxWeapons = 64;
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
    class O_Truck_02_covered_F;
    class O_Truck_02_covered_EPOCH : O_Truck_02_covered_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 45;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 5000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions
		{
			class DoorLF_Open {
				userActionID = 50;
				displayName = "Open left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open door";
				priority = 0.1;
				radius = 3.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "door_LF";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class DoorLF_Close: DoorLF_Open {
				userActionID = 51;
				displayName = "Close left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class DoorRF_Open: DoorLF_Open {
				userActionID = 52;
				displayName = "Open right front door";
				position = "door_RF";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class DoorRF_Close: DoorRF_Open {
				userActionID = 53;
				displayName = "Close right front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
		};
    };
	class O_Truck_02_covered_EPOCH3 : O_Truck_02_covered_EPOCH
    {
		author = "DirtySanchez";
		maximumLoad = 6500;
		transportMaxWeapons = 18;
		transportMaxMagazines = 96;
		transportMaxBackpacks = 8;
	};
	class O_Truck_02_covered_EPOCH4 : O_Truck_02_covered_EPOCH
    {
		author = "DirtySanchez";
		fuelCapacity = 450;
        fuelConsumptionRate = 22;
	};
    class O_Truck_02_transport_F;
    class O_Truck_02_transport_EPOCH : O_Truck_02_transport_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 45;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 5000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions
		{
			class DoorLF_Open {
				userActionID = 50;
				displayName = "Open left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open door";
				priority = 0.1;
				radius = 3.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "door_LF";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class DoorLF_Close: DoorLF_Open {
				userActionID = 51;
				displayName = "Close left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class DoorRF_Open: DoorLF_Open {
				userActionID = 52;
				displayName = "Open right front door";
				position = "door_RF";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class DoorRF_Close: DoorRF_Open {
				userActionID = 53;
				displayName = "Close right front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
		};
    };
    class O_Truck_02_transport_EPOCH3 : O_Truck_02_covered_EPOCH3 {};
	class O_Truck_02_transport_EPOCH4 : O_Truck_02_transport_EPOCH3 {};
	class O_Truck_03_covered_F;
    class O_Truck_03_covered_EPOCH : O_Truck_03_covered_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 64;
        fuelCapacity = 250;
        fuelConsumptionRate = 36;
        maximumLoad = 5000;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
    class O_Truck_02_box_F;
    class O_Truck_02_box_EPOCH : O_Truck_02_box_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        transportRepair = 0;
        armor = 45;
        fuelCapacity = 350;
        fuelConsumptionRate = 26;
        maximumLoad = 5000;
        transportMaxBackpacks = 64;
        transportMaxMagazines = 256;
        transportMaxWeapons = 64;
        faction = "CIV_F";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions
		{
			class DoorLF_Open {
				userActionID = 50;
				displayName = "Open left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open door";
				priority = 0.1;
				radius = 3.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "door_LF";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_LF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_LF', 1]";
			};
			class DoorLF_Close: DoorLF_Open {
				userActionID = 51;
				displayName = "Close left front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_LF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_LF', 0]";
			};
			class DoorRF_Open: DoorLF_Open {
				userActionID = 52;
				displayName = "Open right front door";
				position = "door_RF";
				condition = "((locked this) != 2) && ((this doorPhase 'Door_RF')  ==  0) && (alive this) && this != vehicle player";
				statement = "this animateDoor ['Door_RF', 1]";
			};
			class DoorRF_Close: DoorRF_Open {
				userActionID = 53;
				displayName = "Close right front door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Close door";
				condition = "((this doorPhase 'Door_RF') > 0) && (alive this)";
				statement = "this animateDoor ['Door_RF', 0]";
			};
		};
    };
    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_EPOCH : O_Heli_Light_02_unarmed_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 30;
        maximumLoad = 3000;
        faction = "CIV_F";
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
    };
    class I_Heli_Transport_02_F;
    class I_Heli_Transport_02_EPOCH : I_Heli_Transport_02_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 50;
        maximumLoad = 5000;
        faction = "CIV_F";
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
		class UserActions {
			class DoorL1_Open {
				userActionID = 50;
				displayName = "Open Left Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				textToolTip = "Open Left Door";
				priority = 1.5;
				radius = 2.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				position = "action_door_back_L";
				showWindow = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "((locked this) != 2) && this animationPhase 'door_back_L' < 0.5 AND Alive(this)";
				statement = "this animateDoor ['door_back_L', 1]";
			};
			class DoorR1_Open: DoorL1_Open {
				userActionID = 51;
				displayName = "Open Right Door";
				textToolTip = "Open Right Door";
				position = "action_door_back_R";
				condition = "((locked this) != 2) && this animationPhase 'door_back_R' < 0.5 AND Alive(this)";
				statement = "this animateDoor ['door_back_R', 1]";
			};
			class DoorL1_Close: DoorL1_Open {
				userActionID = 53;
				displayName = "Close Left Door";
				textToolTip = "Close Left Door";
				condition = "this animationPhase 'door_back_L' > 0.5 AND Alive(this)";
				statement = "this animateDoor ['door_back_L', 0]";
			};
			class DoorR1_Close: DoorL1_Close {
				userActionID = 54;
				displayName = "Close Right Door";
				textToolTip = "Close Right Door";
				position = "action_door_back_R";
				condition = "this animationPhase 'door_back_R' > 0.5 AND Alive(this)";
				statement = "this animateDoor ['door_back_R', 0]";
			};
			class Ramp_Open: DoorL1_Open {
				userActionID = 55;
				displayName = "Open ramp";
				textToolTip = "Open ramp";
				position = "";
				showWindow = 0;
				condition = "((locked this) != 2) && this doorPhase 'CargoRamp_Open' < 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement = "this animateDoor ['CargoRamp_Open', 1]";
			};
			class Ramp_Close: Ramp_Open {
				userActionID = 56;
				displayName = "Close ramp";
				textToolTip = "Close ramp";
				condition = "this doorPhase 'CargoRamp_Open' > 0.5 && {alive this} && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement = "this animateDoor ['CargoRamp_Open', 0]";
			};
			class Ramp_Open1: DoorL1_Open {
				userActionID = 55;
				displayName = "Open ramp";
				textToolTip = "Open ramp";
				position = "action_door_back_R";
				showWindow = 1;
				condition = "((locked this) != 2) && this doorPhase 'CargoRamp_Open' < 0.5 && {alive this} && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['CargoRamp_Open', 1]";
			};
		};
    };
    class I_Heli_light_03_unarmed_F;
    class I_Heli_light_03_unarmed_EPOCH : I_Heli_light_03_unarmed_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        armor = 50;
        maximumLoad = 2000;
        faction = "CIV_F";
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
    };
    class O_Heli_Transport_04_F;
    class O_Heli_Transport_04_EPOCH : O_Heli_Transport_04_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 4000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Pilots Door";
				position = "Door_1_axis";
				priority = 1.5;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((locked this) != 2) && {((this animationPhase 'Door_1_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 1])";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Pilots Door";
				condition = "((this animationPhase 'Door_1_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_1_source', 0])";
			};
			class OpenDoor_2: OpenDoor_1 {
				displayName = "Open CoPilots Door";
				position = "Door_2_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_2_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 1])";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayName = "Close CoPilots Door";
				condition = "((this animationPhase 'Door_2_rot') >= 0.5) &&  (alive this)";
				statement = "(this animateDoor ['Door_2_source', 0])";
			};
			class OpenDoor_3: OpenDoor_1 {
				displayName = "Open Loadmasters Door";
				position = "Door_3_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_3_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 1])";
			};
			class CloseDoor_3: OpenDoor_3 {
				displayName = "Close Loadmasters Door";
				condition = "((this animationPhase 'Door_3_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_3_source', 0])";
			};
		};
    };
    class O_Heli_Transport_04_bench_F;
    class O_Heli_Transport_04_bench_EPOCH : O_Heli_Transport_04_bench_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 4000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Pilots Door";
				position = "Door_1_axis";
				priority = 1.5;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((locked this) != 2) && {((this animationPhase 'Door_1_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 1])";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Pilots Door";
				condition = "((this animationPhase 'Door_1_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_1_source', 0])";
			};
			class OpenDoor_2: OpenDoor_1 {
				displayName = "Open CoPilots Door";
				position = "Door_2_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_2_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 1])";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayName = "Close CoPilots Door";
				condition = "((this animationPhase 'Door_2_rot') >= 0.5) &&  (alive this)";
				statement = "(this animateDoor ['Door_2_source', 0])";
			};
			class OpenDoor_3: OpenDoor_1 {
				displayName = "Open Loadmasters Door";
				position = "Door_3_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_3_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 1])";
			};
			class CloseDoor_3: OpenDoor_3 {
				displayName = "Close Loadmasters Door";
				condition = "((this animationPhase 'Door_3_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_3_source', 0])";
			};
		};
    };
    class O_Heli_Transport_04_box_F;
    class O_Heli_Transport_04_box_EPOCH : O_Heli_Transport_04_box_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 4000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Pilots Door";
				position = "Door_1_axis";
				priority = 1.5;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((locked this) != 2) && {((this animationPhase 'Door_1_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 1])";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Pilots Door";
				condition = "((this animationPhase 'Door_1_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_1_source', 0])";
			};
			class OpenDoor_2: OpenDoor_1 {
				displayName = "Open CoPilots Door";
				position = "Door_2_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_2_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 1])";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayName = "Close CoPilots Door";
				condition = "((this animationPhase 'Door_2_rot') >= 0.5) &&  (alive this)";
				statement = "(this animateDoor ['Door_2_source', 0])";
			};
			class OpenDoor_3: OpenDoor_1 {
				displayName = "Open Loadmasters Door";
				position = "Door_3_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_3_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 1])";
			};
			class CloseDoor_3: OpenDoor_3 {
				displayName = "Close Loadmasters Door";
				condition = "((this animationPhase 'Door_3_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_3_source', 0])";
			};
		};
    };
    class O_Heli_Transport_04_covered_F;
    class O_Heli_Transport_04_covered_EPOCH : O_Heli_Transport_04_covered_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 4000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Pilots Door";
				position = "Door_1_axis";
				priority = 1.5;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((locked this) != 2) && {((this animationPhase 'Door_1_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 1])";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Close Pilots Door";
				condition = "((this animationPhase 'Door_1_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_1_source', 0])";
			};
			class OpenDoor_2: OpenDoor_1 {
				displayName = "Open CoPilots Door";
				position = "Door_2_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_2_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 1])";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayName = "Close CoPilots Door";
				condition = "(((this animationPhase 'Door_2_rot') >= 0.5) &&  (alive this)";
				statement = "(this animateDoor ['Door_2_source', 0])";
			};
			class OpenDoor_3: OpenDoor_1 {
				displayName = "Open Loadmasters Door";
				position = "Door_3_axis";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_3_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 1])";
			};
			class CloseDoor_3: OpenDoor_3 {
				displayName = "Close Loadmasters Door";
				condition = "((this animationPhase 'Door_3_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_3_source', 0])";
			};
			class OpenDoor_4: OpenDoor_1 {
				displayName = "Open Left Pod Door";
				position = "Door_4_trigger";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_4_move_1') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_4_source', 1])";
			};
			class CloseDoor_4: OpenDoor_4 {
				displayName = "Close Left Pod Door";
				condition = "((this animationPhase 'Door_4_move_1') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_4_source', 0])";
			};
			class OpenDoor_5: OpenDoor_1 {
				displayName = "Open Right Pod Door";
				position = "Door_5_trigger";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_5_move_1') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_5_source', 1])";
			};
			class CloseDoor_5: OpenDoor_5 {
				displayName = "Close Right Pod Door";
				condition = "((this animationPhase 'Door_5_move_1') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_5_source', 0])";
			};
			class OpenDoor_6: OpenDoor_1 {
				displayName = "Open ramp";
				position = "Door_6_trigger";
				condition = "((locked this) != 2) && {((this animationPhase 'Door_6_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_6_source', 1])";
			};
			class CloseDoor_6: OpenDoor_6 {
				displayName = "Close ramp";
				condition = "((this animationPhase 'Door_6_rot') >= 0.5) && (alive this)";
				statement = "(this animateDoor ['Door_6_source', 0])";
			};
			class Ramp_Open: OpenDoor_6 {
				userActionID = 60;
				displayName = "Open ramp";
				textToolTip = "Open ramp";
				position = "";
				showWindow = 0;
				condition = "this doorPhase 'Door_6_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			};
			class Ramp_Close: CloseDoor_6 {
				userActionID = 61;
				displayName = "Close ramp";
				textToolTip = "Close ramp";
				position = "";
				showWindow = 0;
				condition = "this doorPhase 'Door_6_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			};
		};
    };
    class B_Heli_Transport_03_unarmed_F;
    class B_Heli_Transport_03_unarmed_EPOCH : B_Heli_Transport_03_unarmed_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 6000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
		class UserActions {
			class Ramp_Open {
				userActionID = 60;
				displayName = "Open ramp";
				textToolTip = "Open ramp";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position = "";
				condition = "this doorPhase 'Door_rear_source' < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_rear_source', 1]";
				priority = 1.5;
				radius = 1.5;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class Ramp_Close: Ramp_Open {
				userActionID = 61;
				displayName = "Close ramp";
				textToolTip = "Close ramp";
				condition = "this doorPhase 'Door_rear_source' > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_rear_source', 0]";
			};
			class RightDoor_Open: Ramp_Open {
				userActionID = 666;
				displayName = "Open Right Door";
				textToolTip = "Open Right Door";
				condition = "this doorPhase 'Door_R_source' < 0.5 AND Alive(this)";
				statement = "this animateDoor ['Door_R_Source', 1]";
				displayNameDefault = "Open Right Door";
			};
			class RightDoor_Close: Ramp_Open {
				userActionID = 666;
				displayName = "Close Right Door";
				textToolTip = "Close Right Door";
				condition = "this doorPhase 'Door_R_source' > 0.5 AND Alive(this)";
				statement = "this animateDoor ['Door_R_Source', 0]";
				displayNameDefault = "Close Right Door";
			};
			class LeftDoor_Open: Ramp_Open {
				userActionID = 666;
				displayName = "Open Left Door";
				textToolTip = "Open Left Door";
				condition = "this doorPhase 'Door_L_Source' < 0.5 AND Alive(this)";
				statement = "this animateDoor ['Door_L_Source', 1]";
				displayNameDefault = "Open Left Door";
			};
			class LeftDoor_Close: Ramp_Open {
				userActionID = 666;
				displayName = "Close Left Door";
				textToolTip = "Close Left Door";
				condition = "this doorPhase 'Door_L_Source' > 0.5 AND Alive(this)";
				statement = "this animateDoor ['Door_L_Source', 0]";
				displayNameDefault = "Close Left Door";
			};
			class RDoor_Open {
				displayName = "Open Right Door";
				displayNameDefault = "Open Right Door";
				radius = 7.5;
				condition = "((locked this) != 2) && (this doorPhase 'Door_R_Source' < 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_R_Source', 1]";
				position = "";
				priority = 1.5;
				onlyForplayer = 0;
			};
			class RDoor_Close: RDoor_Open {
				displayName = "Close Right Door";
				displayNameDefault = "Close Right Door";
				radius = 7.5;
				condition = "(this doorPhase 'Door_R_Source' > 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_R_Source', 0]";
			};
			class LDoor_Open: RDoor_Open {
				displayName = "Open Left Door";
				displayNameDefault = "Open Left Door";
				radius = 7.5;
				condition = "((locked this) != 2) && (this doorPhase 'Door_L_Source' < 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_L_Source', 1]";
			};
			class LDoor_Close: RDoor_Open {
				displayName = "Close Left Door";
				displayNameDefault = "Close Left Door";
				radius = 7.5;
				condition = "(this doorPhase 'Door_L_Source' > 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_L_Source', 0]";
			};
			class RampDoor_Open: RDoor_Open {
				displayName = "Open ramp";
				displayNameDefault = "Open ramp";
				radius = 7.5;
				condition = "((locked this) != 2) && (this doorPhase 'Door_rear_source' < 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_rear_source', 1]";
			};
			class RampDoor_Close: RDoor_Open {
				displayName = "Close ramp";
				displayNameDefault = "Close ramp";
				radius = 7.5;
				condition = "(this doorPhase 'Door_rear_source' > 0.5) && !({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) AND Alive(this)";
				statement = "this animateDoor ['Door_rear_source', 0]";
			};
		};
    };
    class C_Heli_Light_01_civil_F;
    class C_Heli_Light_01_civil_EPOCH : C_Heli_Light_01_civil_F
    {
        scope = 2;
		scopeCurator = 2;
        crew = "";
        side = 3;
        faction = "CIV_F";
        maximumLoad = 1000;
        commanderCanSee = "2+16+32";
        gunnerCanSee = "2+16+32";
        driverCanSee = "2+16+32";
        typicalCargo[] = {};
        class TransportItems {};
        class EventHandlers;
        class RenderTargets {};
    };
    class Tank : LandVehicle
    {
        scope = 0;
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F : Tank
    {
        scope = 0;
        class Turrets
        {
            class MainTurret : NewTurret
            {
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints : HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds : Sounds
        {
            class Engine;
            class Movement;
        };
    };
    class ThingX;
    class FloatingStructure_F;
    class WeaponHolderSimulatedAlt : ThingX
    {
        animated = 0;
        scope = 1;
        icon = "iconCrate";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        displayName = "$STR_cfgVehicles_WeaponHolder0";
        accuracy = 0.2;
        isGround = 1;
        typicalCargo[] = {};
        vehicleClass = "Ammo";
        waterResistanceCoef = 1.8;
        waterAngularDampingCoef = 10;
        class DestructionEffects
        {
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLight";
                position = "destructionEffect1";
                intensity = 0.001;
                interval = 1;
                lifeTime = 3;
            };
            class Sound
            {
                simulation = "sound";
                type = "Fire";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3;
            };
            class Fire1
            {
                simulation = "particles";
                type = "ObjectDestructionFire1";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3;
            };
            class Fire2
            {
                simulation = "particles";
                type = "ObjectDestructionFire1";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3;
            };
            class Smoke1
            {
                simulation = "particles";
                type = "ObjectDestructionSmoke";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3.2;
            };
            class Smoke2
            {
                simulation = "particles";
                type = "ObjectDestructionSmoke";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 3.4;
            };
            class Smoke3
            {
                simulation = "particles";
                type = "ObjectDestructionSmoke";
                position = "destructionEffect1";
                intensity = 0.125;
                interval = 1;
                lifeTime = 3.5;
            };
            class HouseDestr
            {
                simulation = "destroy";
                type = "DelayedDestructionAmmo";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
        maximumLoad = 9999;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        supplyRadius = 1.4;
        cost = 0;
        armor = 200;
        mapSize = 2;
        class TransportMagazines {};
        forceSupply = 1;
        showWeaponCargo = 1;
        transportMaxMagazines = "1e+009";
        transportMaxWeapons = "1e+009";
        destrType = "DestructNo";
        transportMaxBackpacks = 0;
    };
    class container_epoch : WeaponHolderSimulatedAlt
    {
        mapSize = 1;
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_Container";
        model = "\x\addons\a3_epoch_assets_2\container.p3d";
        icon = "iconObject_circle";
        vehicleClass = "epoch_objects";
        destrType = "DestructNo";
        cost = 100;
        accuracy = 1000;
        forceSupply = 0;
        isGround = 0;
        waterLeakiness = 0;
        waterResistanceCoef = 0.8;
        waterAngularDampingCoef = 10;
        simulClass = "Container_SIM_EPOCH";
        staticClass = "Container_epoch";
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class AnimationSources
        {
            class open_lid
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class open_lock1
            {
                source = "user";
                animPeriod = 0.44;
                initPhase = 0;
            };
            class open_lock2
            {
                source = "user";
                animPeriod = 0.35;
                initPhase = 0;
            };
            class open_lock3
            {
                source = "user";
                animPeriod = 0.62;
                initPhase = 0;
            };
            class open_lock4
            {
                source = "user";
                animPeriod = 0.55;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class open_lid
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                position = "lid_open";
                radius = 3;
                onlyForPlayer = 0;
                condition = "this animationPhase ""open_lid"" < 0.5";
                statement = "this spawn { _this animate [""open_lock3"", 1]; uiSleep 0.1; _this animate [""open_lock1"", 1];sleep 0.1; _this animate [""open_lock2"", 1]; uiSleep 0.1; _this animate [""open_lock4"", 1]; uiSleep 0.6; _this animate [""open_lid"", 1];}; this call EPOCH_LootIT; ";
            };
            class open_quickTake
            {
                displayName = "$STR_EPOCH_Open";
                position = "lid_open";
                radius = 3;
                onlyForPlayer = 0;
                condition = "this animationPhase ""open_lid"" > 0.5";
                statement = "call EPOCH_QuickTakeLoad;";
            };
        };
    };
    class Bobber_EPOCH : FloatingStructure_F
    {
        author = "Axle";
        scope = 2;
        displayName = "$STR_EPOCH_Bobber";
        model = "\x\addons\a3_epoch_assets_3\fishing\bobber.p3d";
        canFloat = 1;
        waterLeakiness = 0;
        waterResistanceCoef = 0.8;
        waterAngularDampingCoef = 10;
        destrType = "DestructNo";
        mapSize = 0.14;
        icon = "iconObject_2x3";
        cost = 1000;
    };
    class Land_MPS_EPOCH : ThingX
    {
        mapSize = 0.14;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_cfgVehicles_Land_MobilePhone_smart_F0";
        model = "\A3\Structures_F\Items\Electronics\MobilePhone_smart_F.p3d";
        destrType = "DestructNo";
        icon = "iconObject_2x3";
        cost = 1000;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Structures_F\Items\Electronics\Data\Electronics_screens_mobilePhone_smart_CO.paa"};
        hiddenSelectionsMaterials[] = {"\A3\Structures_F\Items\Electronics\Data\electronics_screens.rvmat"};
    };
    class Constructions_modular_F : ThingX
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
        interactMode = 1;
    };
    class Spike_TRAP_SIM_EPOCH : Constructions_modular_F
    {
        author = "AWOL";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
        displayName = "$STR_EPOCH_SpikeTrapSIM";
    };
    class Metal_TRAP_SIM_EPOCH : Constructions_modular_F
    {
        author = "AWOL";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
        displayName = "$STR_EPOCH_MetalTrapSIM";
    };
    class TankTrap_SIM_EPOCH : Constructions_modular_F
    {
        author = "Axle";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\tank_trap.p3d";
        displayName = "$STR_EPOCH_TankTrapSIM";
    };
    class Hesco3_SIM_EPOCH : Constructions_modular_F
    {
        author = "Axle";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco.p3d";
        displayName = "$STR_EPOCH_HescoWideSIM";
        slingLoadCargoMemoryPoints[] = {};
    };
    class SapperHead_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\sapper_head.p3d";
        displayName = "$STR_EPOCH_SapperHead";
    };
    class SapperCorpse_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sapper_corpse.p3d";
        displayName = "$STR_EPOCH_SapperCorpse";
    };
    class Secure_Storage_Temp : Constructions_modular_F
    {
        scope = 0;
    };
    class LockBox_SIM_EPOCH : Secure_Storage_Temp
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\lockbox.p3d";
        displayName = "$STR_EPOCH_Lockbox";
    };
    class Safe_SIM_EPOCH : Secure_Storage_Temp
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\safe.p3d";
        displayName = "$STR_EPOCH_Safe";
    };
    class Fireplace_SIM_EPOCH : Constructions_modular_F
    {
        author = "Kiory";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\fireplace.p3d";
        displayName = "$STR_EPOCH_EmptyFireplaceSIM";
    };
    class Jack_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\jack.p3d";
        displayName = "$STR_EPOCH_Jack";
        class AnimationSources
        {
            class raise
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class pump
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "jack_pump";
            };
        };
        class UserActions
        {
            class Open_left
            {
                displayName = "$STR_EPOCH_Raise";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""raise"" < 0.5";
                statement = "this animate [""raise"", ((this animationPhase ""raise"")+0.1)]; this animate [""pump"", ((this animationPhase ""pump"")+0.1)];";
            };
            class Close_left : Open_left
            {
                displayName = "$STR_EPOCH_Lower";
                condition = "this animationPhase ""raise"" >= 0.1";
                statement = "this animate [""raise"", ((this animationPhase ""raise"")-0.1)]; this animate [""pump"", ((this animationPhase ""pump"")-0.1)];";
            };
            class Pack
            {
                displayName = "$STR_EPOCH_Pickup";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""raise"" == 0";
                statement = "[this,player,Epoch_personalToken] remoteExec ['EPOCH_server_packJack',2];";
            };
        };
    };
    class WoodRamp_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_Ramp.p3d";
        displayName = "$STR_EPOCH_WoodRamp";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class CinderWallHalf_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cinder_half_SIM.p3d";
        displayName = "$STR_EPOCH_HalfCinderBlockWall";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class CinderWall_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cinder_SIM.p3d";
        displayName = "$STR_EPOCH_CinderBlockWall";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class CinderWallGarage_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cGarage_SIM.p3d";
        displayName = "$STR_EPOCH_CinderBlockGarage";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa","\x\addons\a3_epoch_assets\textures\cinder garage\cgarage_co.paa"};
        class AnimationSources
        {
            class open_left
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "MetalBigDoorsSound";
            };
            class open_right
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "MetalOldBigDoorsSound";
            };
            class lock_cGarage
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_left
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
                statement = "this animate [""open_left"", 1]; this animate [""open_right"", 1]";
            };
            class Close_left : Open_left
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""open_left"" >= 0.5";
                statement = "this animate [""open_left"", 0]; this animate [""open_right"", 0]";
            };
            class Lock_cGarage
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
                statement = "this animate [""lock_cGarage"", 1]";
            };
            class Unlock_cGarage : Lock_cGarage
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" >= 0.5)";
                statement = "this animate [""lock_cGarage"", 0];";
            };
        };
    };
    class WoodFloor_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Floor.p3d";
        displayName = "$STR_EPOCH_WoodFloor";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
	class WoodHalfFloor_SIM_EPOCH : Constructions_modular_F
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\half_floor.p3d";
        displayName = "$STR_EPOCH_WoodHalfFloor";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
	class WoodQuarterFloor_SIM_EPOCH : Constructions_modular_F
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\quarter_floor.p3d";
        displayName = "$STR_EPOCH_WoodQuarterFloor";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class MetalFloor_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\metal_floor.p3d";
        displayName = "$STR_EPOCH_MetalFloor";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class WoodLargeWall_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_SIM.p3d";
        displayName = "$STR_EPOCH_LargeWall";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class WoodWall1_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_wall\Wooden_Wall_ply.p3d";
        displayName = "$STR_EPOCH_PlywoodWallSIM";
    };
    class WoodLargeWallCor_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Cor_SIM.p3d";
        displayName = "$STR_EPOCH_Wall";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class WoodWall2_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_doorway\Wooden_Wall_Doorway.p3d";
        displayName = "$STR_EPOCH_PlywoodWallDoorwaySIM";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class WoodLargeWallDoorway_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Doorway.p3d";
        displayName = "$STR_EPOCH_WallDoorway";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_black_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_blue_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_brown_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_green_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_orange_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_purple_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_red_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_teal_co.paa","\x\addons\a3_epoch_assets\textures\cor\corrugated_yellow_co.paa"};
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
    };
    class WoodWall3_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_door\Wooden_Wall_Door.p3d";
        displayName = "$STR_EPOCH_PlywoodWallDoorwaywDoorSIM";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_Door"" < 0.5";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""Open_Door"" >= 0.5";
                statement = "this animate [""Open_Door"", 0];";
            };
        };
    };
    class WoodLargeWallDoor_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Door_SIM.p3d";
        displayName = "$STR_EPOCH_WallDoorwaywDoor";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_Door"" < 0.5";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""Open_Door"" >= 0.5";
                statement = "this animate [""Open_Door"", 0];";
            };
        };
    };
    class WoodWall4_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\Plywood_DoorW_L\Plywood_DoorL.p3d";
        displayName = "$STR_EPOCH_WallDoorwaywLockingDoor";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class lock_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 0];";
            };
            class Lock_Door
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""lock_Door"", 1]";
            };
            class Unlock_Door : Lock_Door
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 1)";
                statement = "this animate [""lock_Door"", 0];";
            };
        };
    };
    class WoodLargeWallDoorL_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_DoorL_SIM.p3d";
        displayName = "$STR_EPOCH_WallDoorwaywLockingDoor";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class lock_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 0];";
            };
            class Lock_Door
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""lock_Door"", 1]";
            };
            class Unlock_Door : Lock_Door
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 1)";
                statement = "this animate [""lock_Door"", 0];";
            };
        };
    };
    class WoodStairs_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_stairs.p3d";
        displayName = "$STR_EPOCH_WoodStairs";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        selectionDamage = "zbytek";
    };
    class WoodStairs2_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_stairs_upgrade.p3d";
        displayName = "$STR_EPOCH_WoodStairs";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        selectionDamage = "zbytek";
    };
    class WoodTower_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame.p3d";
        displayName = "$STR_EPOCH_WoodTower";
        slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        class AnimationSources
        {
            class NWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class EWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class SWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class WWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
    };
    class WoodLadder_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder.p3d";
        displayName = "$STR_EPOCH_WoodLadder";
        ladders[] = {};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class Tipi_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\tp.p3d";
        displayName = "$STR_EPOCH_TipiSim";
    };
	class TentA_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\A3\Structures_f\Civ\Camping\TentA_F.p3d";
        displayName = "$STR_EPOCH_TentA";
    };
	class TentDome_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\A3\Structures_f\Civ\Camping\TentDome_F.p3d";
        displayName = "$STR_EPOCH_TentDome";
    };
    class Shelf_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\metalStorage.p3d";
        displayName = "$STR_EPOCH_MetalShelfSim";
        simulClass = "Shelf_SIM_EPOCH";
        staticClass = "Shelf_EPOCH";
    };
    class StorageShelf_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shelf.p3d";
        displayName = "$STR_EPOCH_MetalShelfSim";
    };
    class WorkBench_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\workbench.p3d";
        displayName = "$STR_EPOCH_WorkBenchSIM";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets_1\textures\plyplank_co.paa"};
    };
    class Tarp_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\tarp.p3d";
        displayName = "$STR_EPOCH_TarpCoveredPallet";
        simulClass = "Tarp_SIM_EPOCH";
        staticClass = "Tarp_EPOCH";
    };
    class Freezer_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\freezer.p3d";
        displayName = "$STR_EPOCH_ChestFreezer";
        simulClass = "Freezer_SIM_EPOCH";
        staticClass = "Freezer_EPOCH";
    };
    class PlotPole_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\jammer.p3d";
        displayName = "$STR_EPOCH_FrequencyJammerSIM";
    };
    class SolarGen_SIM_EPOCH : Constructions_modular_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Solar_Generator_Complete\Solar_generator.p3d";
        displayName = "$STR_EPOCH_SolarPowerGeneratorSIM";
    };
    class ToolRack_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\toolRack.p3d";
        displayName = "$STR_EPOCH_ToolRack";
        simulClass = "ToolRack_SIM_EPOCH";
        staticClass = "ToolRack_EPOCH";
    };
    class Chair_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\chair_adult.p3d";
        displayName = "$STR_EPOCH_Chair";
        simulClass = "Chair_SIM_EPOCH";
        staticClass = "Chair_EPOCH";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_ECO.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\chair\chair.rvmat"};
    };
    class ChairRed_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\chair_adult.p3d";
        displayName = "$STR_EPOCH_ChairRed";
        simulClass = "ChairRed_SIM_EPOCH";
        staticClass = "ChairRed_EPOCH";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_kid_ECO.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_kid.rvmat"};
    };
    class Filing_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\filing.p3d";
        displayName = "$STR_EPOCH_FilingCabinet";
        simulClass = "Filing_SIM_EPOCH";
        staticClass = "Filing_EPOCH";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\filing\filing_co.paa"};
    };
    class Shoebox_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shoebox.p3d";
        displayName = "$STR_EPOCH_Shoebox";
        simulClass = "Shoebox_SIM_EPOCH";
        staticClass = "Shoebox_EPOCH";
    };
    class Fridge_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\fridge_door_anim.p3d";
        displayName = "$STR_EPOCH_Fridge";
        simulClass = "Fridge_SIM_EPOCH";
        staticClass = "Fridge_EPOCH";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\fridge\fridge_CO.paa"};
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\fridge\fridge_CO.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeBlack_CO.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeSteel_co.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeWhite_co.paa"};
        class AnimationSources
        {
            class Open_bot
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class Open_top
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_bot
            {
                displayName = "$STR_EPOCH_OpenBottom";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_bot"" < 0.5";
                statement = "this animate [""Open_bot"", 1]";
            };
            class Close_bot : Open_bot
            {
                displayName = "$STR_EPOCH_CloseBottom";
                condition = "this animationPhase ""Open_bot"" >= 0.5";
                statement = "this animate [""Open_bot"", 0];";
            };
            class Open_top
            {
                displayName = "$STR_EPOCH_OpenTop";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_top"" < 0.5";
                statement = "this animate [""Open_top"", 1]";
            };
            class Close_top : Open_top
            {
                displayName = "$STR_EPOCH_CloseTop";
                condition = "this animationPhase ""Open_top"" >= 0.5";
                statement = "this animate [""Open_top"", 0];";
            };
        };
    };
    class Bed_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\bed_dummy.p3d";
        displayName = "$STR_EPOCH_Mattress";
        simulClass = "Bed_SIM_EPOCH";
        staticClass = "Bed_EPOCH";
        forceSupply = 0;
    };
    class Bunk_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\bunk.p3d";
        displayName = "$STR_EPOCH_Bunk";
        simulClass = "Bunk_SIM_EPOCH";
        staticClass = "Bunk_EPOCH";
        forceSupply = 0;
    };
    class Couch_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\couch_dummy.p3d";
        displayName = "$STR_EPOCH_Couch";
        simulClass = "Couch_SIM_EPOCH";
        staticClass = "Couch_EPOCH";
    };
    class Table_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\coffee_table.p3d";
        displayName = "$STR_EPOCH_CoffeeTable";
        simulClass = "Table_SIM_EPOCH";
        staticClass = "Table_EPOCH";
    };
    class Wardrobe_SIM_EPOCH : Constructions_modular_F
    {
        author = "Kiory";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\wardrobe.p3d";
        displayName = "$STR_EPOCH_Wardrobe";
        simulClass = "Wardrobe_SIM_EPOCH";
        staticClass = "wardrobe_epoch";
    };
    class Locker_SIM_EPOCH : Constructions_modular_F
    {
        author = "Kiory";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\lockers.p3d";
        displayName = "$STR_EPOCH_Wardrobe";
        simulClass = "Locker_SIM_EPOCH";
        staticClass = "locker_epoch";
    };
    class Cooker_SIM_EPOCH : Constructions_modular_F
    {
        author = "Kiory";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_2\cooker.p3d";
        displayName = "$STR_EPOCH_Cooker";
        simulClass = "Cooker_SIM_EPOCH";
        staticClass = "cooker_epoch";
    };
    class Pelican_SIM_EPOCH : Constructions_modular_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\pelican.p3d";
        displayName = "$STR_EPOCH_Pelican";
        simulClass = "Pelican_SIM_EPOCH";
        staticClass = "Pelican_EPOCH";
        forceSupply = 0;
        class AnimationSources
        {
            class Open_top
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_top
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_top"" < 0.5";
                statement = "this animate [""Open_top"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class Debug_static_F : NonStrategic
    {
        mapSize = 2.27;
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_DEBUGBOX";
        model = "\x\addons\a3_epoch_assets\models\debug.p3d";
        icon = "iconObject_5x4";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
    };
    class clone_female_static_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleCloneVat";
        model = "\x\addons\a3_epoch_assets\models\clone_female.p3d";
        icon = "iconObject_1x1";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
        class AnimationSources
        {
            class raise
            {
                source = "user";
                animPeriod = 20;
                initPhase = 1;
            };
        };
    };
    class clone_male_static_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_MaleCloneVat";
        model = "\x\addons\a3_epoch_assets\models\clone_male.p3d";
        icon = "iconObject_1x1";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
        class AnimationSources
        {
            class raise
            {
                source = "user";
                animPeriod = 20;
                initPhase = 1;
            };
        };
    };
    class clone_empty_static_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_EmptyCloneVat";
        model = "\x\addons\a3_epoch_assets\models\clone_male.p3d";
        icon = "iconObject_1x1";
        armor = 1000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 1000;
        hiddenSelections[] = {"clone"};
        hiddenSelectionsTextures[] = {""};
    };
    class Constructions_static_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 5000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        interactMode = 1;
    };
    class Constructions_foundation_F : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 5000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        interactMode = 1;
    };
    class Foundation_EPOCH : Constructions_foundation_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Concrete_Col.p3d";
        displayName = "$STR_EPOCH_ConcreteFoundation";
        placement = "vertical";
        armor = 15000;
    };
    class WoodFoundation_EPOCH : Constructions_foundation_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_Col.p3d";
        displayName = "$STR_EPOCH_WoodFoundation";
        placement = "vertical";
        armor = 5000;
    };
    class Foundation_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Concrete_Col_Ghost.p3d";
        displayName = "$STR_EPOCH_ConcreteFoundationGhost";
        placement = "vertical";
        ladders[] = {};
    };
    class WoodFoundation_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Concrete_Col_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodFoundationGhost";
        placement = "vertical";
        ladders[] = {};
    };
    class FirePlace_EPOCH : Constructions_static_F
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_Fireplace";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\fireplace.p3d";
        forceSupply = 0;
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };
    class fireplaceFull_epoch : FirePlace_EPOCH
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_FireplaceFull";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\fireplace_full.p3d";
        forceSupply = 0;
        simulation = "fire";
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class Effects
        {
            class Light1
            {
                simulation = "light";
                type = "SmallFireLight";
            };
            class Smoke1
            {
                simulation = "particles";
                type = "SmallFireS";
            };
            class Fire1 : Smoke1
            {
                simulation = "particles";
                type = "SmallFireF";
            };
            class Refract1
            {
                simulation = "particles";
                type = "SmallFireFRefract";
            };
        };
        class Reflectors
        {
            class Reflector_1
            {
                color[] = {80,70,60};
                ambient[] = {20,17.5,15};
                intensity = 100;
                size = 1;
                innerAngle = 5;
                outerAngle = 45;
                coneFadeCoef = 3;
                position = "light_1_pos";
                direction = "light_1_dir";
                hitpoint = "Light_1_hitpoint";
                selection = "Light_1_hide";
                useFlare = 0;
                flareSize = 25;
                flareMaxDistance = 2500;
                blinking = 0;
                dayLight = 0;
                class Attenuation
                {
                    start = 0;
                    constant = 0;
                    linear = 0.1;
                    quadratic = 0;
                    hardLimitStart = 800;
                    hardLimitEnd = 1000;
                };
            };
        };
    };
    class FirePlaceOn_EPOCH : fireplaceFull_epoch
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_FireplaceOn";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\fireplace_on.p3d";
        forceSupply = 0;
        simulation = "fire";
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class EventHandlers
        {
            init = "(_this select 0) inflame true";
        };
    };
    class SolarGen_EPOCH : Constructions_static_F
    {
        mapSize = 1.27;
        author = "SteamPunkGears";
        icon = "iconObject_5x4";
        armor = 5000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        scope = 2;
        placement = "vertical";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Solar_Generator_Complete\Solar_generator.p3d";
        displayName = "$STR_EPOCH_SolarPowerGenerator";
    };
    class PlotPole_EPOCH : NonStrategic
    {
        mapSize = 1.27;
        author = "Sequisha";
        icon = "iconObject_5x4";
        armor = 15000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        scope = 2;
        displayName = "$STR_EPOCH_FrequencyJammer";
        placement = "vertical";
        model = "\x\addons\a3_epoch_assets\models\jammer.p3d";
    };
    class Const_floors_static_F : Constructions_static_F
    {
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
        };
    };
    class Const_All_Walls_F : Constructions_static_F {};
    class Const_Cinder_static_F : Const_All_Walls_F
    {
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\cinder\cinder.rvmat","x\addons\a3_epoch_assets\textures\cinder\cinder_destruct50.rvmat","x\addons\a3_epoch_assets\textures\cinder\cinder_destruct50.rvmat"};
        };
    };
    class Const_WoodWalls_static_F : Const_All_Walls_F
    {
        selectionDamage = "camo_cor";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated.rvmat","x\addons\a3_epoch_assets\textures\cor\corrugated_destruct50.rvmat","x\addons\a3_epoch_assets\textures\cor\corrugated_destruct50.rvmat"};
        };
    };
    class WallHolder : WeaponHolder
    {
        scopeCurator = 0;
        class TransportMagazines {};
        forceSupply = 0;
        showWeaponCargo = 1;
        isGround = 0;
    };
    class Constructions_lockedstatic_F : WeaponHolder
    {
        mapSize = 1.27;
        author = "Sequisha";
        scope = 0;
        displayName = "";
        model = "\A3\Weapons_F\empty.p3d";
        icon = "iconObject_5x4";
        armor = 5000;
        vehicleclass = "Epoch_objects";
        destrType = "DestructBuilding";
        cost = 1000;
        isGround = 0;
        showWeaponCargo = 0;
        forceSupply = 0;
        maximumLoad = 600;
        isSecureStorage = 1;
    };
    class LockBox_EPOCH : Constructions_lockedstatic_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\lockbox.p3d";
        displayName = "$STR_EPOCH_Lockbox";
        armor = 5000;
        maximumLoad = 600;
    };
    class Safe_EPOCH : Constructions_lockedstatic_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\safe.p3d";
        displayName = "$STR_EPOCH_Lockbox";
        armor = 15000;
        maximumLoad = 3600;
    };
    class TankTrap_EPOCH : Constructions_static_F
    {
        author = "Axle";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\tank_trap.p3d";
        displayName = "$STR_EPOCH_TankTrap";
    };
    class Spike_TRAP_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
        displayName = "$STR_EPOCH_SpikeTrapSIM";
        armor = 0.1;
    };
    class Metal_TRAP_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
        displayName = "$STR_EPOCH_MetalTrapSIM";
        armor = 0.1;
    };
    class Hesco3_EPOCH : Const_All_Walls_F
    {
        author = "Axle";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco.p3d";
        displayName = "$STR_EPOCH_HescoWide";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\hesco\hesco_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\hesco\hesco.rvmat"};
    };
    class WoodRamp_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_Ramp.p3d";
        displayName = "$STR_EPOCH_WoodRamp";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
        };
    };
    class CinderWallHalf_EPOCH : Const_Cinder_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cinder_half.p3d";
        displayName = "$STR_EPOCH_HalfCinderBlockWall";
        armor = 10000;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa"};
    };
    class CinderWall_EPOCH : Const_Cinder_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cinder.p3d";
        displayName = "$STR_EPOCH_CinderBlockWall";
        armor = 10000;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa"};
    };
    class CinderWallGarage_EPOCH : Const_Cinder_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cGarage.p3d";
        displayName = "$STR_EPOCH_CinderBlockGarage";
        armor = 15000;
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa","x\addons\a3_epoch_assets\textures\cinder garage\cgarage_co.paa"};
        class AnimationSources
        {
            class open_left
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "MetalBigDoorsSound";
            };
            class open_right
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "MetalOldBigDoorsSound";
            };
            class lock_cGarage
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_left
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
                statement = "this animate [""open_left"", 1]; this animate [""open_right"", 1]";
            };
            class Close_left : Open_left
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""open_left"" >= 0.5";
                statement = "this animate [""open_left"", 0]; this animate [""open_right"", 0]";
            };
            class Lock_cGarage
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
                statement = "this animate [""lock_cGarage"", 1]";
            };
            class Unlock_cGarage : Lock_cGarage
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" >= 0.5)";
                statement = "this animate [""lock_cGarage"", 0];";
            };
        };
    };
    class Jack_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\jack.p3d";
        displayName = "$STR_EPOCH_Jack";
        class AnimationSources
        {
            class raise
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class pump
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_left
            {
                displayName = "$STR_EPOCH_Raise";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""raise"" < 0.5";
                statement = "this animate [""raise"", 1]; this animate [""pump"", 1]";
            };
            class Close_left : Open_left
            {
                displayName = "$STR_EPOCH_Lower";
                condition = "this animationPhase ""raise"" >= 0.5";
                statement = "this animate [""raise"", 0]; this animate [""pump"", 0]";
            };
        };
    };
    class WoodFloor_EPOCH : Const_floors_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Floor.p3d";
        displayName = "$STR_EPOCH_WoodFloor";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
	class WoodHalfFloor_EPOCH : Const_floors_static_F
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\half_floor.p3d";
        displayName = "$STR_EPOCH_WoodHalfFloor";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
	class WoodQuarterFloor_EPOCH : Const_floors_static_F
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\quarter_floor.p3d";
        displayName = "$STR_EPOCH_WoodQuarterFloor";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class MetalFloor_EPOCH : Const_floors_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\metal_floor.p3d";
        displayName = "$STR_EPOCH_MetalFloor";
        armor = 15000;
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_1\textures\mf_co.paa","a3\structures_f\data\metal\metal_rollup_co.paa","a3\structures_f\data\metal\metal_plates3_co.paa"};
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets_1\textures\metal_floor.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
        };
    };
    class WoodLargeWall_EPOCH : Const_WoodWalls_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall.p3d";
        displayName = "$STR_EPOCH_LargeWall";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
        };
    };
    class Tipi_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\tp_ghost.p3d";
        displayName = "$STR_EPOCH_TiPiGhost";
        ladders[] = {};
    };
	class TentA_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "BI";
        scope = 2;
        model = "\A3\Structures_f\Civ\Camping\TentA_F.p3d";
        displayName = "$STR_EPOCH_TentA";
        ladders[] = {};
    };
	class TentDome_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "BI";
        scope = 2;
        model = "\A3\Structures_f\Civ\Camping\TentDome_F.p3d";
        displayName = "$STR_EPOCH_TentDome";
        ladders[] = {};
    };
    class StorageShelf_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shelf_ghost.p3d";
        displayName = "$STR_EPOCH_ShelfGhost";
        ladders[] = {};
    };
    class WorkBench_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\workbench.p3d";
        displayName = "$STR_EPOCH_WorkBenchGhost";
        ladders[] = {};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets_1\textures\plyplank_ca.paa"};
    };
    class WoodLargeWall_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodWallGhost";
        ladders[] = {};
    };
    class WoodFloor_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Floor_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodFloorGhost";
        ladders[] = {};
    };
	class WoodHalfFloor_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\half_floor.p3d";
        displayName = "$STR_EPOCH_WoodHalfFloor";
        ladders[] = {};
    };
	class WoodQuarterFloor_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\quarter_floor.p3d";
        displayName = "$STR_EPOCH_WoodQuarterFloor";
        ladders[] = {};
    };
    class MetalFloor_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\metal_floor_ghost.p3d";
        displayName = "$STR_EPOCH_MetalFloorGhost";
        ladders[] = {};
    };
    class WoodLadder_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder_ghost.p3d";
        displayName = "$STR_EPOCH_WoodLadderGhost";
        ladders[] = {};
    };
    class WoodStairs_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_stairs90_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodStairsGhost";
        ladders[] = {};
    };
    class WoodTower_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodTowerGhost";
        ladders[] = {};
    };
    class WoodRamp_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_Ramp_Ghost.p3d";
        displayName = "$STR_EPOCH_WoodRampGhost";
        ladders[] = {};
    };
    class Hesco3_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Axle";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco_ghost.p3d";
        displayName = "$STR_EPOCH_HescoWideGhost";
        ladders[] = {};
    };
    class CinderWallHalf_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\cinder_half_Ghost.p3d";
        displayName = "$STR_EPOCH_CinderHalfWallGhost";
        ladders[] = {};
    };
    class WoodWall1_EPOCH : Const_WoodWalls_static_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_wall\Wooden_Wall_ply.p3d";
        displayName = "$STR_EPOCH_LargePlywoodWall";
        armor = 1500;
    };
    class WoodLargeWallCor_EPOCH : Const_WoodWalls_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Cor.p3d";
        displayName = "$STR_EPOCH_LargeCorrugatedWall";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        armor = 7500;
    };
    class WoodWall2_EPOCH : Const_WoodWalls_static_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_doorway\Wooden_Wall_Doorway.p3d";
        displayName = "$STR_EPOCH_PlywoodWallDoorway";
        armor = 1500;
    };
    class WoodLargeWallDoorway_EPOCH : Const_WoodWalls_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Doorway.p3d";
        displayName = "$STR_EPOCH_WallDoorway";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class WoodWall3_EPOCH : Const_WoodWalls_static_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_door\Wooden_Wall_Door.p3d";
        displayName = "$STR_EPOCH_PlywoodWallDoorwaywDoor";
        armor = 1500;
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_Door"" < 0.5";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""Open_Door"" >= 0.5";
                statement = "this animate [""Open_Door"", 0];";
            };
        };
    };
    class WoodLargeWallDoor_EPOCH : Const_WoodWalls_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Door.p3d";
        displayName = "$STR_EPOCH_WallDoorwaywDoor";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        armor = 7500;
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_Door"" < 0.5";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "this animationPhase ""Open_Door"" >= 0.5";
                statement = "this animate [""Open_Door"", 0];";
            };
        };
    };
    class WoodWall4_EPOCH : Const_WoodWalls_static_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\Plywood_DoorW_L\Plywood_DoorL.p3d";
        displayName = "$STR_EPOCH_PlywoodWallDoorwaywLockingDoor";
        armor = 1500;
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class lock_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 0];";
            };
            class Lock_Door
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""lock_Door"", 1]";
            };
            class Unlock_Door : Lock_Door
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 1)";
                statement = "this animate [""lock_Door"", 0];";
            };
        };
    };
    class WoodLargeWallDoorL_EPOCH : Const_WoodWalls_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_DoorL.p3d";
        displayName = "$STR_EPOCH_WallDoorwaywLockingDoor";
        sections[] = {"camo_cor","camo"};
        hiddenSelections[] = {"camo_cor","camo"};
        hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        armor = 7500;
        class AnimationSources
        {
            class Open_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class lock_Door
            {
                source = "user";
                animPeriod = 2;
                initPhase = 1;
                sound = "ServoDoorsSound";
            };
        };
        class UserActions
        {
            class Open_door
            {
                displayName = "$STR_EPOCH_Open";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 1]";
            };
            class Close_door : Open_door
            {
                displayName = "$STR_EPOCH_Close";
                condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""Open_Door"", 0];";
            };
            class Lock_Door
            {
                displayName = "$STR_EPOCH_Lock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 0)";
                statement = "this animate [""lock_Door"", 1]";
            };
            class Unlock_Door : Lock_Door
            {
                displayName = "$STR_EPOCH_Unlock";
                displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
                condition = "!(call EPOCH_lockCheck) && (this animationPhase ""Open_Door"" == 0) && (this animationPhase ""lock_Door"" == 1)";
                statement = "this animate [""lock_Door"", 0];";
            };
        };
    };
    class WoodStairs_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_stairs.p3d";
        displayName = "$STR_EPOCH_WoodStairs";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        selectionDamage = "zbytek";
        class Damage
        {
            tex[] = {};
            mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
        };
    };
    class WoodStairs2_EPOCH : Const_floors_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Wood_stairs_upgrade.p3d";
        displayName = "$STR_EPOCH_WoodStairslvl2";
        armor = 7500;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class WoodTower_EPOCH : Const_floors_static_F
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame.p3d";
        displayName = "$STR_EPOCH_WoodTower";
        armor = 7500;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
        class AnimationSources
        {
            class NWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class EWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class SWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class WWall
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class add_nwall
            {
                displayName = "$STR_EPOCH_AddWall";
                onlyforplayer = 1;
                position = "NWall_trigger";
                radius = 2.5;
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" < 0.5)";
                statement = "[this,""NWall"",1] call EPOCH_changeWallState";
            };
            class remove_nwall : add_nwall
            {
                displayName = "$STR_EPOCH_RemoveWall";
                position = "NWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" >= 0.5)";
                statement = "[this,""NWall"",0] call EPOCH_changeWallState";
            };
            class add_ewall : add_nwall
            {
                displayName = "$STR_EPOCH_AddWall";
                position = "EWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" < 0.5)";
                statement = "[this,""EWall"",1] call EPOCH_changeWallState";
            };
            class remove_ewall : add_nwall
            {
                displayName = "$STR_EPOCH_RemoveWall";
                position = "EWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" >= 0.5)";
                statement = "[this,""EWall"",0] call EPOCH_changeWallState";
            };
            class add_swall : add_nwall
            {
                displayName = "$STR_EPOCH_AddWall";
                position = "SWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" < 0.5)";
                statement = "[this,""SWall"",1] call EPOCH_changeWallState";
            };
            class remove_swall : add_nwall
            {
                displayName = "$STR_EPOCH_RemoveWall";
                position = "SWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" >= 0.5)";
                statement = "[this,""SWall"",0] call EPOCH_changeWallState";
            };
            class add_wwall : add_nwall
            {
                displayName = "$STR_EPOCH_AddWall";
                position = "WWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" < 0.5)";
                statement = "[this,""WWall"",1] call EPOCH_changeWallState";
            };
            class remove_wwall : add_nwall
            {
                displayName = "$STR_EPOCH_RemoveWall";
                position = "WWall_trigger";
                condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" >= 0.5)";
                statement = "[this,""WWall"",0] call EPOCH_changeWallState";
            };
        };
    };
    class WoodLadder_EPOCH : Constructions_static_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder.p3d";
        displayName = "$STR_EPOCH_WoodLadder";
        ladders[] = {{"start1","end1"}};
        armor = 500;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
    };
    class Buildable_Storage : WeaponHolder
    {
        scope = 0;
        forceSupply = 0;
        isGround = 0;
        destrType = "DestructBuilding";
        armor = 8000;
        maximumLoad = 1000;
    };
    class Tipi_EPOCH : Buildable_Storage
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\tp.p3d";
        displayName = "$STR_EPOCH_Tipi";
        maximumLoad = 1200;
    };
	class TentA_EPOCH : Buildable_Storage
	{
		author = "BI";
		scope = 2;
		model = "\A3\Structures_f\Civ\Camping\TentA_F.p3d";
		displayName = "$STR_EPOCH_TentA";
		maximumLoad = 800;
	};
	class TentDome_EPOCH : Buildable_Storage
	{
		author = "BI";
		scope = 2;
		model = "\A3\Structures_f\Civ\Camping\TentDome_F.p3d";
		displayName = "$STR_EPOCH_TentDome";
		maximumLoad = 1200;
	};
    class StorageShelf_EPOCH : Buildable_Storage
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shelf.p3d";
        displayName = "$STR_EPOCH_MetalShelf";
        maximumLoad = 800;
    };
    class WorkBench_EPOCH : Buildable_Storage
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\workbench.p3d";
        displayName = "$STR_EPOCH_WorkBench";
        maximumLoad = 800;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets_1\textures\plyplank_co.paa"};
    };
    class ShelfProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\metalStorage_proxy.p3d";
        displayName = "$STR_EPOCH_ShelfProxy";
        isGround = 0;
    };
    class TarpProxy_EPOCH : WeaponHolder
    {
        scope = 2;
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\tarp_proxy.p3d";
        displayName = "$STR_EPOCH_PalletProxy";
        isGround = 0;
    };
    class MineralProxy_EPOCH : WeaponHolder
    {
        scope = 2;
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\mineral_proxy.p3d";
        displayName = "$STR_EPOCH_MineralProxy";
        isGround = 0;
    };
    class MineralDepositCopper_EPOCH : Animated_Loot
    {
        scope = 2;
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\mineral.p3d";
        displayName = "$STR_EPOCH_MineralDepositCopper";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralBrown_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralCopper.rvmat"};
        weaponHolderProxy = "MineralProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects
        {
            class Smoke1
            {
                simulation = "particles";
                type = "HouseDestructionSmoke3";
                position = "destructionEffect1";
                qualityLevel = 2;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.07;
            };
            class Smoke1Med
            {
                simulation = "particles";
                type = "HouseDestructionSmoke3Med";
                position = "destructionEffect1";
                qualityLevel = 1;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke1Low
            {
                simulation = "particles";
                type = "HouseDestructionSmoke3Low";
                position = "destructionEffect1";
                qualityLevel = 0;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
        };
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\mineral_move.rtm",0.5,2}};
        };
        class UserActions
        {
            class LootIT
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this > 0.5";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class MineralDepositGold_EPOCH : MineralDepositCopper_EPOCH
    {
        displayName = "$STR_EPOCH_MineralDepositGold";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralBrown_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralGold.rvmat"};
    };
    class MineralDepositSilver_EPOCH : MineralDepositCopper_EPOCH
    {
        displayName = "$STR_EPOCH_MineralDepositSilver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralBrown_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\minerals\mineralSilver.rvmat"};
    };
    class Tarp_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\tarp.p3d";
        displayName = "$STR_EPOCH_TarpCoveredPallet";
        simulClass = "Tarp_SIM_EPOCH";
        staticClass = "Tarp_EPOCH";
        weaponHolderProxy = "TarpProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\tarp_move.rtm",0.5,1}};
        };
        class UserActions
        {
            class LootIT
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class Shelf_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\metalStorage.p3d";
        displayName = "$STR_EPOCH_MetalShelf";
        simulClass = "Shelf_SIM_EPOCH";
        staticClass = "Shelf_EPOCH";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\metalstorage\metalStorage_co.paa"};
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\metalstorage\metalStorage_co.paa","\x\addons\a3_epoch_assets\textures\metalstorage\metalStorageBlk_CO.paa","\x\addons\a3_epoch_assets\textures\metalstorage\metalStorageYel_CO.paa","\x\addons\a3_epoch_assets\textures\metalstorage\metalStorageSil_CO.paa","\x\addons\a3_epoch_assets\textures\metalstorage\metalStorageBlue_CO.paa"};
        weaponHolderProxy = "ShelfProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\metalStorage_move.rtm",0.5,2}};
        };
        class UserActions
        {
            class LootIT
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class WH_Loot : WeaponHolder {};
    class wardrobe_epoch : WH_Loot
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_Wardrobe";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\wardrobe.p3d";
        forceSupply = 0;
        simulClass = "Wardrobe_SIM_EPOCH";
        staticClass = "wardrobe_epoch";
        sections[] = {"camo"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {""};
        class AnimationSources
        {
            class open_door_l
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class open_door_r
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class open_door_l
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                position = "left";
                radius = 3;
                onlyForPlayer = 0;
                condition = "this animationPhase ""open_door_l"" < 0.5";
                statement = "this animate [""open_door_l"", 1]; this animate [""open_door_r"", 1]; this call EPOCH_LootIT; [this] call EPOCH_fnc_mirrorSetup;";
            };
        };
    };
    class locker_epoch : WH_Loot
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_Locker";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\lockers.p3d";
        forceSupply = 0;
        simulClass = "Wardrobe_SIM_EPOCH";
        staticClass = "wardrobe_epoch";
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {""};
        class AnimationSources
        {
            class open_door_l
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class open_door_m
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class open_door_r
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class open_door_l
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                position = "left";
                radius = 3;
                onlyForPlayer = 0;
                condition = "this animationPhase ""open_door_l"" < 0.5";
                statement = "this animate [""open_door_l"", 1]; this animate [""open_door_m"", 1]; this animate [""open_door_r"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class cooker_epoch : WH_Loot
    {
        scope = 2;
        mapSize = 1;
        cost = 0;
        isGround = 0;
        author = "Kiory";
        displayName = "$STR_EPOCH_Cooker";
        destrType = "DestructNo";
        vehicleclass = "Epoch_objects";
        model = "\x\addons\a3_epoch_assets_2\cooker.p3d";
        armor = "1e+011";
        forceSupply = 0;
        simulClass = "Cooker_SIM_EPOCH";
        staticClass = "cooker_epoch";
        sections[] = {};
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {""};
        class AnimationSources
        {
            class open_top_door
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class open_bottom_door
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_fl
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_fr
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_bl
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_br
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_oven
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turn_grill
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class fl_hob_hide
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class fr_hob_hide
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class bl_hob_hide
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class br_hob_hide
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class open_top_door
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                position = "top";
                radius = 3;
                onlyForPlayer = 0;
                condition = "this animationPhase ""open_top_door"" < 0.5";
                statement = "this animate [""open_top_door"", 1]; this animate [""open_bottom_door"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class Freezer_EPOCH : WH_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\freezer.p3d";
        displayName = "$STR_EPOCH_ChestFreezer";
        simulClass = "Freezer_SIM_EPOCH";
        staticClass = "Freezer_EPOCH";
        forceSupply = 0;
        isGround = 0;
        class AnimationSources
        {
            class Open_top
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_top
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_top"" < 0.5";
                statement = "this animate [""Open_top"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class Cabinet_EPOCH : WH_Loot
    {
        author = "SteamPunkGears";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Furniture\medicine_cabinet\mc_door_anim.p3d";
        displayName = "$STR_EPOCH_MedicineCabinet";
        simulClass = "Cabinet_EPOCH";
        staticClass = "Cabinet_EPOCH";
        forceSupply = 0;
        isGround = 0;
        class AnimationSources
        {
            class Open_bot
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_bot
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "actionPoint";
                radius = 3;
                condition = "this animationPhase ""Open_bot"" < 0.5";
                statement = "this animate [""Open_bot"", 1]; this animate [""Open_top"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class Fridge_EPOCH : WH_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\fridge_door_anim.p3d";
        displayName = "$STR_EPOCH_Fridge";
        simulClass = "Fridge_SIM_EPOCH";
        staticClass = "Fridge_EPOCH";
        forceSupply = 0;
        isGround = 0;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\fridge\fridge_CO.paa"};
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\fridge\fridge_CO.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeBlack_CO.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeSteel_co.paa","\x\addons\a3_epoch_assets\textures\fridge\fridgeWhite_co.paa"};
        class AnimationSources
        {
            class Open_bot
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
            class Open_top
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_bot
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_bot"" < 0.5";
                statement = "this animate [""Open_bot"", 1]; this animate [""Open_top"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class Pelican_EPOCH : WH_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\pelican.p3d";
        displayName = "$STR_EPOCH_Pelican";
        simulClass = "Pelican_SIM_EPOCH";
        staticClass = "Pelican_EPOCH";
        forceSupply = 0;
        isGround = 0;
        class AnimationSources
        {
            class Open_top
            {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class UserActions
        {
            class Open_top
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "this animationPhase ""Open_top"" < 0.5";
                statement = "this animate [""Open_top"", 1]; this call EPOCH_LootIT;";
            };
        };
    };
    class BedProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\Bed_proxy.p3d";
        displayName = "$STR_EPOCH_Mattress";
        isGround = 0;
    };
    class Bed_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\bed.p3d";
        displayName = "$STR_EPOCH_Mattress";
        simulClass = "Bed_SIM_EPOCH";
        staticClass = "Bed_EPOCH";
        weaponHolderProxy = "BedProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\bed_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class FlipMattress
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class Bunk_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\bunk.p3d";
        displayName = "$STR_EPOCH_Bunk";
        simulClass = "Bunk_SIM_EPOCH";
        staticClass = "Bunk_EPOCH";
        weaponHolderProxy = "BedProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\bunk_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class FlipMattress
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class LockBoxProxy_EPOCH : LockBox_EPOCH {};
    class SafeProxy_EPOCH : Safe_EPOCH {};
    class CouchProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\couch_proxy.p3d";
        displayName = "$STR_EPOCH_Couch";
        isGround = 0;
    };
    class Couch_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\couch.p3d";
        displayName = "$STR_EPOCH_Couch";
        simulClass = "Couch_SIM_EPOCH";
        staticClass = "Couch_EPOCH";
        weaponHolderProxy = "CouchProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\couch_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class SearchCouch
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class Table_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\coffee_table.p3d";
        displayName = "$STR_EPOCH_CoffeeTable";
        simulClass = "Table_SIM_EPOCH";
        staticClass = "Table_EPOCH";
        weaponHolderProxy = "TableProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\coffeeTable_Move.rtm",0.5,3}};
        };
        class UserActions
        {
            class SearchCouch
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class TableProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\coffee_table_proxy.p3d";
        displayName = "$STR_EPOCH_CoffeeTableProxy";
        isGround = 0;
    };
    class ChairProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\chair_proxy.p3d";
        displayName = "$STR_EPOCH_Chair";
        isGround = 0;
    };
    class Chair_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\chair_adult.p3d";
        displayName = "$STR_EPOCH_Chair";
        simulClass = "Chair_SIM_EPOCH";
        staticClass = "Chair_EPOCH";
        weaponHolderProxy = "ChairProxy_EPOCH";
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_ECO.paa","\x\addons\a3_epoch_assets\textures\chair\chair_kid_ECO.paa"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_ECO.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\chair\chair.rvmat"};
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\chair_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class FlipMattress
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class ToolRackProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\toolRack_proxy.p3d";
        displayName = "$STR_EPOCH_ToolRack";
        isGround = 0;
    };
    class ToolRack_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\toolRack.p3d";
        displayName = "$STR_EPOCH_ToolRack";
        simulClass = "ToolRack_SIM_EPOCH";
        staticClass = "ToolRack_EPOCH";
        weaponHolderProxy = "ToolRackProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\toolRack_move.rtm",0.5,1}};
        };
        class UserActions
        {
            class LootIT
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class ChairRed_EPOCH : Chair_EPOCH
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_ChairRed";
        simulClass = "ChairRed_SIM_EPOCH";
        staticClass = "ChairRed_EPOCH";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_kid_ECO.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_kid.rvmat"};
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\chair\chair_kid_ECO.paa","\x\addons\a3_epoch_assets\textures\chair\chair_ECO.paa"};
    };
    class ShoeboxProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shoebox_proxy.p3d";
        displayName = "$STR_EPOCH_Shoeboxproxy";
        isGround = 0;
    };
    class Shoebox_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\shoebox.p3d";
        displayName = "$STR_EPOCH_Shoebox";
        simulClass = "Shoebox_SIM_EPOCH";
        staticClass = "Shoebox_EPOCH";
        weaponHolderProxy = "ShoeboxProxy_EPOCH";
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\shoebox_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class OpenCabinet
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class FilingProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\filing_proxy.p3d";
        displayName = "$STR_EPOCH_FilingCabinet";
        isGround = 0;
    };
    class Filing_EPOCH : Animated_Loot
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\filing.p3d";
        displayName = "$STR_EPOCH_FilingCabinet";
        simulClass = "Filing_SIM_EPOCH";
        staticClass = "Filing_EPOCH";
        weaponHolderProxy = "FilingProxy_EPOCH";
        availableTextures[] = {"\x\addons\a3_epoch_assets\textures\filing\filing_co.paa","\x\addons\a3_epoch_assets\textures\filing\filing_blue_co.paa","\x\addons\a3_epoch_assets\textures\filing\filing_green_co.paa"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\filing\filing_co.paa"};
        destrType = "DestructEngine";
        class DestructionEffects {};
        class Destruction
        {
            animations[] = {{"x\addons\a3_epoch_assets\models\filing_move.rtm",0.5,3}};
        };
        class UserActions
        {
            class OpenCabinet
            {
                displayName = "$STR_EPOCH_Search";
                displayNameDefault = "<img image='\A3\ui_f\data\map\VehicleIcons\iconvehicle_ca.paa' size='2.5' />";
                onlyforplayer = 1;
                position = "Door_knopf";
                radius = 3;
                condition = "damage this < 1";
                statement = "this call EPOCH_LootIT;";
            };
        };
    };
    class CargoProxy_EPOCH : WeaponHolder
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\filing_proxy.p3d";
        displayName = "$STR_EPOCH_FilingCabinet";
        isGround = 0;
    };
    class Carnival_Tent : Static
    {
        author = "Sequisha";
        mapSize = 6.19;
        scope = 2;
        displayName = "$STR_EPOCH_CarnivalTent";
        model = "\x\addons\a3_epoch_assets_3\carnival\models\carnyTent.p3d";
        ladders[] = {{"start1","end1"}};
        icon = "iconObject_5x2";
        vehicleclass = "Epoch_objects";
        destrType = "DestructNo";
        cost = 5000;
    };
    class Cargo_Container : Static
    {
        mapSize = 6.19;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_CfgVehicles_Land_Cargo20_orange_F0";
        model = "\A3\Structures_F\Ind\Cargo\Cargo20_orange_F.p3d";
        ladders[] = {{"start1","end1"}};
        weaponHolderProxy = "Land_PaperBox_C_EPOCH";
        maxloot = 8;
        icon = "iconObject_5x2";
        vehicleClass = "Container";
        destrType = "DestructNo";
        cost = 5000;
        numberOfDoors = 2;
        selectionDamage = "DamT_1";
        class AnimationSources
        {
            class LockedDoor_source
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0.1;
            };
            class Door_1_source
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class Door_2_source
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };
        class UserActions
        {
            class OpenDoor_1
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_EPOCH_Search";
                position = "Door_1_trigger";
                priority = 0.4;
                radius = 1.5;
                onlyForPlayer = 0;
                condition = "(this animationPhase 'Door_1_rot') < 0.5";
                statement = "[this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen; this call EPOCH_LootIT;";
            };
        };
        actionBegin1 = "OpenDoor_1";
        actionEnd1 = "OpenDoor_1";
        actionBegin2 = "OpenDoor_2";
        actionEnd2 = "OpenDoor_2";
    };
    class WeaponHolder_Single_F;
    class Grown_Plants_F : WeaponHolder_Single_F {};
    class Poppy_EPOCH : Grown_Plants_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\poppy.p3d";
        displayName = "$STR_EPOCH_Poppy";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Poppy
            {
                magazine = "Poppy";
                count = 1;
            };
        };
    };
    class Goldenseal_EPOCH : Grown_Plants_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\goldenseal.p3d";
        displayName = "$STR_EPOCH_Goldenseal";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Goldenseal
            {
                magazine = "Goldenseal";
                count = 1;
            };
        };
    };
    class Pumpkin_EPOCH : Grown_Plants_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\vegetation\models\pumpkin.p3d";
        displayName = "$STR_EPOCH_Pumpkin";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Pumpkin
            {
                magazine = "Pumpkin";
                count = 1;
            };
        };
    };
    class ContainerSupply;
    class Land_WoodenBox_C_EPOCH : ContainerSupply
    {
        mapSize = 2.03;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_CfgVehicles_Land_WoodenBox_F0";
        model = "\A3\Structures_F\Civ\Constructions\WoodenBox_F.p3d";
        icon = "iconObject_4x1";
    };
    class Land_PaperBox_C_EPOCH : ContainerSupply
    {
        mapSize = 1.459;
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_CfgVehicles_Land_PaperBox_closed_F0";
        model = "\A3\Structures_F_EPA\Mil\Scrapyard\PaperBox_closed_F.p3d";
        icon = "iconObject_1x1";
    };
    class Transport_EPOCH : NonStrategic
    {
        author = "Sequisha";
        model = "\x\addons\a3_epoch_assets\models\tele.p3d";
        mapSize = 2;
        accuracy = 1000;
        destrType = "DestructNo";
        class UserActions
        {
            class EnterBuilding
            {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_EPOCH_Teleport";
                position = "Epoch_Action_Point";
                priority = 1;
                radius = 3;
                onlyForPlayer = 0;
                condition = "this == this";
                statement = "this call EPOCH_EnterBuilding";
            };
        };
    };
    class Transport_E_EPOCH : Transport_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\tele_east.p3d";
    };
    class Transport_W_EPOCH : Transport_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\tele_west.p3d";
    };
    class Transport_N_EPOCH : Transport_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\tele_north.p3d";
    };
    class Transport_C_EPOCH : Transport_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\tele_central.p3d";
    };
    class BloodSplat : NonStrategic
    {
        author = "$STR_A3_Bohemia_Interactive";
        model = "\A3\characters_F\blood_splash.p3d";
        mapSize = 2;
        accuracy = 1000;
        destrType = "DestructNo";
        armor = 20;
    };
    class centerplane_ui : NonStrategic
    {
        mapSize = 1;
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_centerplane";
        vehicleClass = "Helpers";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\center_plane.p3d";
        hiddenSelections[] = {"usertexture","usertextureL","usertextureR"};
        hiddenSelectionsTextures[] = {""};
    };
    class logo_plane_EPOCH : NonStrategic
    {
        mapSize = 1;
        author = "AWOL";
        scope = 2;
        displayName = "$STR_EPOCH_EpochLogo";
        vehicleClass = "Helpers";
        model = "\x\addons\a3_epoch_assets\models\logo.p3d";
    };
    class Animal;
    class Animal_Base_F : Animal
    {
        scope = 0;
        class EventHandlers;
    };
    class Construct_F : Animal_Base_F
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_Constuct";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\construct.p3d";
        hasGeometry = 1;
        moves = "CfgMovesConstruct_F";
        class VariablesScalar {};
        class VariablesString {};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\animals_f_beta\Goat\data\goat.rvmat","A3\animals_f_beta\Goat\data\W1_goat.rvmat","A3\animals_f_beta\Goat\data\W2_goat.rvmat"};
        };
        class EventHandlers;
    };
    class Shark_Base_F : Animal_Base_F
    {
        scope = 0;
        moves = "CfgMovesGreatWhite_F";
        memoryPointAim = "pilot";
        memoryPointCameraTarget = "camera";
        minHeight = "(-1 * waterDepth)";
        avgHeight = "(-1 * waterDepth)/4";
        maxHeight = -1.5;
        straightDistance = 2;
        turning = 5;
        class VariablesScalar {};
        class VariablesString {};
    };
    class GreatWhite_F : Shark_Base_F
    {
        author = "Sequisha";
        scope = 1;
        displayName = "$STR_EPOCH_GreatWhite";
        model = "\x\addons\a3_epoch_assets\models\shark_epoch.p3d";
        picture = "\x\addons\a3_epoch_assets\models\shark.paa";
        moves = "CfgMovesGreatWhite_F";
        hasGeometry = 1;
        agentTasks[] = {};
    };
    class Goat_random_EPOCH : Animal_Base_F
    {
        scope = 1;
        displayName = "$STR_A3_CfgVehicles_Goat_Base_F0";
        model = "\A3\animals_f_beta\Goat\Goat_F.p3d";
        hasGeometry = 1;
        agentTasks[] = {};
        moves = "CfgMovesGoat_F";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\animals_f_beta\Goat\data\goat.rvmat","A3\animals_f_beta\Goat\data\W1_goat.rvmat","A3\animals_f_beta\Goat\data\W2_goat.rvmat"};
        };
    };
    class Sheep_random_EPOCH : Animal_Base_F
    {
        scope = 1;
        displayName = "$STR_A3_CfgVehicles_Sheep_random_F0";
        model = "\A3\animals_f_beta\Sheep\Sheep_F.p3d";
        hasGeometry = 1;
        moves = "CfgMovesSheep_F";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\animals_f_beta\sheep\data\sheep.rvmat","A3\animals_f_beta\sheep\data\W1_sheep.rvmat","A3\animals_f_beta\sheep\data\W2_sheep.rvmat"};
        };
    };
    class Cock_random_F;
    class Cock_random_EPOCH : Cock_random_F
    {
        agentTasks[] = {};
    };
    class Hen_random_F;
    class Hen_random_EPOCH : Hen_random_F
    {
        agentTasks[] = {};
    };
    class Rabbit_F : Animal_Base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_CfgVehicles_Rabbit_F0";
        model = "\A3\Animals_F\rabbit\rabbit_F.p3d";
        side = 3;
        moves = "CfgMovesRabbit_F";
        fsmFormation = "";
        fsmDanger = "";
        maxTurnAngularVelocity = 30;
        costTurnCoef = "1e-005";
        boneHead = "head";
        bonePrimaryWeapon = "head";
        weaponBone = "head";
        triggerAnim = "";
        class VariablesScalar {};
        class VariablesString {};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Animals_F\Rabbit\data\Rabbit.rvmat","A3\Animals_F\Rabbit\data\W1_Rabbit.rvmat","A3\Animals_F\Rabbit\data\W2_Rabbit.rvmat"};
        };
        class EventHandlers : EventHandlers
        {
            init = "deleteVehicle (_this select 0)";
        };
    };
    class Rabbit_EPOCH : Animal_Base_F
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_CfgVehicles_Rabbit_F0";
        model = "\A3\Animals_F\rabbit\rabbit_F.p3d";
        side = 3;
        moves = "CfgMovesRabbit_F";
        fsmFormation = "";
        fsmDanger = "";
        maxTurnAngularVelocity = 30;
        costTurnCoef = "1e-005";
        boneHead = "head";
        bonePrimaryWeapon = "head";
        weaponBone = "head";
        triggerAnim = "";
        class VariablesScalar {};
        class VariablesString {};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Animals_F\Rabbit\data\Rabbit.rvmat","A3\Animals_F\Rabbit\data\W1_Rabbit.rvmat","A3\Animals_F\Rabbit\data\W2_Rabbit.rvmat"};
        };
        agentTasks[] = {};
        hasGeometry = 1;
    };
    class Snake_random_EPOCH : Animal_Base_F
    {
        scope = 1;
        agentTasks[] = {};
        displayName = "$STR_EPOCH_DiceSnake";
        model = "\A3\Animals_F\Snakes\snake_F.p3d";
        side = 3;
        moves = "CfgMovesSnakes_F";
        fsmFormation = "";
        fsmDanger = "";
        maxTurnAngularVelocity = 30;
        costTurnCoef = "1e-005";
        boneHead = "head";
        bonePrimaryWeapon = "head";
        weaponBone = "head";
        triggerAnim = "";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Animals_F\Snakes\data\Snake_Dice_CO.paa"};
    };
    class Snake2_random_EPOCH : Snake_random_EPOCH
    {
        displayName = "$STR_EPOCH_LeopardSnake";
        hiddenSelectionsTextures[] = {"\A3\Animals_F\Snakes\data\Snake_Leopard_CO.paa"};
    };
    class Snake_random_F : Animal_Base_F
    {
        scope = 1;
        displayName = "$STR_A3_CfgVehicles_Snake_random_F0";
        model = "\A3\Animals_F\Snakes\snake_F.p3d";
        side = 3;
        moves = "CfgMovesSnakes_F";
        fsmFormation = "";
        fsmDanger = "";
        maxTurnAngularVelocity = 30;
        costTurnCoef = "1e-005";
        boneHead = "head";
        bonePrimaryWeapon = "head";
        weaponBone = "head";
        triggerAnim = "";
        class EventHandlers : EventHandlers
        {
            init = "deleteVehicle (_this select 0)";
        };
    };
    class Fin_blackwhite_F;
    class Fin_random_EPOCH : Fin_blackwhite_F
    {
        agentTasks[] = {};
        hasGeometry = 1;
        interactMode = -1;
    };
    class Alsatian_Black_F;
    class Alsatian_Random_EPOCH : Alsatian_Black_F
    {
        agentTasks[] = {};
        hasGeometry = 1;
        interactMode = -1;
    };
    class C_Kart_01_Fuel_F;
    class K01 : C_Kart_01_Fuel_F
    {
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip Kart";
                displayName = "$STR_EPOCH_FlipKart";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
    class C_Kart_01_Blu_F;
    class K02 : C_Kart_01_Blu_F
    {
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip Kart";
                displayName = "$STR_EPOCH_FlipKart";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
    class C_Kart_01_Red_F;
    class K03 : C_Kart_01_Red_F
    {
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip Kart";
                displayName = "$STR_EPOCH_FlipKart";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
    class C_Kart_01_Vrana_F;
    class K04 : C_Kart_01_Vrana_F
    {
        class UserActions
        {
            class PressXToFlipTheThing
            {
                displayNameDefault = "Flip Kart";
                displayName = "$STR_EPOCH_FlipKart";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "alive this && not canmove this && crew this isEqualTo []";
                statement = "this setvectorup [0,0,1]";
            };
        };
    };
    class UAV_01_base_F;
    class I_UAV_01_F : UAV_01_base_F
    {
        fuelCapacity = 50000;
    };
	class MineBase;
	class BarrelBomb_EPOCH: MineBase
	{
		author = "DirtySanchez";
		mapSize = 0.43;
		class SimpleObject
		{
			animate[] = {};
			hide[] = {};
			verticalOffset = -0.001;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\x\addons\a3_epoch_community\textures\barrelbomb\barrelbomb_icon_ca.paa";
		_generalMacro = "BarrelBomb_EPOCH";
		scope = 2;
		icon = "iconExplosiveGP";
		ammo = "BarrelBomb_EPOCH_Remote_Ammo";
		model = "\x\addons\a3_epoch_community\models\barrel_bomb.p3d";
		displayName = "Barrel Bomb(Upright)";
		DLC = "Curator";
	};
	class BarrelBomb2_EPOCH: BarrelBomb_EPOCH
	{
		author = "DirtySanchez";
		editorPreview = "\x\addons\a3_epoch_assets_1\pictures\equip_oildrum_e_CA.paa";
		ammo = "BarrelBomb2_EPOCH_Remote_Ammo";
		model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
		displayName = "Barrel Bomb(Horizontal)";
	};
	class CinderFloor_SIM_EPOCH: Constructions_modular_F
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		model = "\x\addons\a3_epoch_community\models\cinderfloor.p3d";
		displayName = "$STR_EPOCH_CinderFloor";
		slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
	};
	class CinderFloor_EPOCH: Const_floors_static_F
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		model = "\x\addons\a3_epoch_community\models\cinderfloor.p3d";
		displayName = "$STR_EPOCH_CinderFloor";
		armor = 12000;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\cinderfloor\cinderfloor_co.paa"};
		selectionDamage = "zbytek";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets_1\textures\metal_floor.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class CinderFloor_Ghost_EPOCH: Const_Ghost_EPOCH
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		model = "\x\addons\a3_epoch_community\models\cinderfloor_Ghost.p3d";
		displayName = "$STR_EPOCH_CinderFloorGhost";
		ladders[] = {};
	};
	class Wreck_base_F;
	class Land_Wreck_Satellite_EPOCH: Wreck_base_F
	{
		author = "Helion4/DirtySanchez";
		mapSize = 4.91;
		class SimpleObject
		{
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.727;
			verticalOffsetWorld = 0;
		};
		editorPreview = "";
		_generalMacro = "Land_Wreck_Satellite_EPOCH";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_EPOCH_SatelliteWreckName";
		model = "\x\addons\a3_epoch_community\models\satellite.p3d";
		icon = "iconObject_1x2";
	};
	class Item_ItemGPS;
	class Item_ItemGeigerCounter_EPOCH: Item_ItemGPS
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_EPOCH_ItemGeigerName";
		author = "Helion4/DirtySanchez";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		class TransportItems
		{
			class ItemGeigerCounter_EPOCH
			{
				name = "ItemGeigerCounter_EPOCH";
				count = 1;
			};
		};
	};
	class Land_New_WiredFence_10m_F;
	class BarbedWire_EPOCH: Land_New_WiredFence_10m_F
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		model = "\x\addons\a3_epoch_community\models\barbed_wire.p3d";
		displayName = "$STR_EPOCH_BarbedWire";
		armor = 1000;
		class Damage
		{
			tex[] = {};
			mat[] = {"\x\addons\a3_epoch_community\textures\barbed_wire\barbed_wire.rvmat"};
		};
	};
	class CinderWallDoorwHatch_EPOCH: Const_Cinder_static_F
	{
		author = "Helion4/DirtySanchez";
		scope = 2;
		model = "\x\addons\a3_epoch_community\cinder_door\cinder_door.p3d";
		displayName = "$STR_EPOCH_CinderBlockDoorwHatch";
		class AnimationSources
		{
			class open_door
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
				sound = "MetalBigDoorsSound";
			};
			class open_hatch
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
				sound = "MetalOldBigDoorsSound";
			};
			class lock_door
			{
				source = "user";
				animPeriod = 3;
				initPhase = 1;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "$STR_EPOCH_Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "door";
				radius = 3;
				condition = "(this animationPhase ""open_door"" < 0.5) && (this animationPhase ""lock_door"" < 0.5)";
				statement = "this animate [""open_door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "$STR_EPOCH_Close";
				condition = "this animationPhase ""open_door"" >= 0.5";
				statement = "this animate [""open_door"", 0]";
			};
			class Lock_door: Open_door
			{
				displayName = "$STR_EPOCH_Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				condition = "!(call EPOCH_lockCheck) && (this animationPhase ""open_door"" < 0.5) && (this animationPhase ""lock_door"" < 0.5)";
				statement = "this animate [""lock_door"", 1]";
			};
			class Unlock_door: Lock_door
			{
				displayName = "$STR_EPOCH_Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "!(call EPOCH_lockCheck) && (this animationPhase ""open_door"" < 0.5) && (this animationPhase ""Lock_door"" >= 0.5)";
				statement = "this animate [""Lock_door"", 0];";
			};
			class Open_hatch
			{
				displayName = "$STR_EPOCH_OpenHatch";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "hatch";
				radius = 3;
				condition = "this animationPhase ""open_hatch"" < 0.5";
				statement = "this animate [""open_hatch"", 1]";
			};
			class Close_hatch: Open_hatch
			{
				displayName = "$STR_EPOCH_CloseHatch";
				condition = "this animationPhase ""open_hatch"" >= 0.5";
				statement = "this animate [""open_hatch"", 0]";
			};
		};
	};
	class MetalTower_EPOCH: Const_floors_static_F
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Metal_Base_Tower\Metal_floor_tower.p3d";
		displayName = "$STR_EPOCH_MetalTower";
		armor = 7500;
		hiddenSelections[] = {"bot","camo","camo3","top"};
		hiddenSelectionsTextures[] = {"a3\structures_f\data\metal\metal_plates3_co.paa", "x\addons\a3_epoch_assets_1\textures\mf_co.paa","x\addons\a3_epoch_assets_1\textures\mf_co.paa","x\addons\a3_epoch_assets_1\textures\mf_co.paa"};
		class AnimationSources
		{
			class NWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class EWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class SWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class WWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				onlyforplayer = 1;
				position = "NWall_trigger";
				radius = 2.5;
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" < 0.5)";
				statement = "[this,""NWall"",1] call EPOCH_changeWallState";
			};
			class remove_nwall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "NWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" >= 0.5)";
				statement = "[this,""NWall"",0] call EPOCH_changeWallState";
			};
			class add_ewall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" < 0.5)";
				statement = "[this,""EWall"",1] call EPOCH_changeWallState";
			};
			class remove_ewall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" >= 0.5)";
				statement = "[this,""EWall"",0] call EPOCH_changeWallState";
			};
			class add_swall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" < 0.5)";
				statement = "[this,""SWall"",1] call EPOCH_changeWallState";
			};
			class remove_swall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" >= 0.5)";
				statement = "[this,""SWall"",0] call EPOCH_changeWallState";
			};
			class add_wwall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" < 0.5)";
				statement = "[this,""WWall"",1] call EPOCH_changeWallState";
			};
			class remove_wwall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" >= 0.5)";
				statement = "[this,""WWall"",0] call EPOCH_changeWallState";
			};
		};
	};
	class MetalTower_SIM_EPOCH: Constructions_modular_F
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Metal_Base_Tower\Metal_floor_tower.p3d";
		displayName = "$STR_EPOCH_MetalTower";
		slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_1\textures\mf_co.paa","a3\structures_f\data\metal\metal_plates3_co.paa"};
		class AnimationSources
		{
			class NWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class EWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class SWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class WWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class MetalTower_Ghost_EPOCH: Const_Ghost_EPOCH
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Metal_Base_Tower\Metal_floor_tower.p3d";
		displayName = "$STR_EPOCH_MetalTowerGhost";
		ladders[] = {};
	};
	class CinderTower_EPOCH: Const_floors_static_F
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Cinder_Base_Tower\cinder_tower_upgrade.p3d";
		displayName = "$STR_EPOCH_CinderTower";
		armor = 7500;
		class AnimationSources
		{
			class NWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class EWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class SWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class WWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				onlyforplayer = 1;
				position = "NWall_trigger";
				radius = 2.5;
				condition = "true"; //"(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" < 0.5)";
				statement = "[this,""NWall"",1] call EPOCH_changeWallState";
			};
			class remove_nwall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "NWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" >= 0.5)";
				statement = "[this,""NWall"",0] call EPOCH_changeWallState";
			};
			class add_ewall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" < 0.5)";
				statement = "[this,""EWall"",1] call EPOCH_changeWallState";
			};
			class remove_ewall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" >= 0.5)";
				statement = "[this,""EWall"",0] call EPOCH_changeWallState";
			};
			class add_swall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" < 0.5)";
				statement = "[this,""SWall"",1] call EPOCH_changeWallState";
			};
			class remove_swall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" >= 0.5)";
				statement = "[this,""SWall"",0] call EPOCH_changeWallState";
			};
			class add_wwall: add_nwall
			{
				displayName = "$STR_EPOCH_AddWall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" < 0.5)";
				statement = "[this,""WWall"",1] call EPOCH_changeWallState";
			};
			class remove_wwall: add_nwall
			{
				displayName = "$STR_EPOCH_RemoveWall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" >= 0.5)";
				statement = "[this,""WWall"",0] call EPOCH_changeWallState";
			};
		};
	};
	class CinderTower_SIM_EPOCH: Constructions_modular_F
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Cinder_Base_Tower\cinder_tower_upgrade.p3d";
		displayName = "$STR_EPOCH_CinderTower";
		slingLoadCargoMemoryPoints[] = {"N","S","E","W"};
		hiddenSelections[] = {"Camo","camo3"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_1\textures\mf_co.paa","a3\structures_f\data\metal\metal_plates3_co.paa"};
		class AnimationSources
		{
			class NWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class EWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class SWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class WWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class CinderTower_Ghost_EPOCH: Const_Ghost_EPOCH
	{
		author = "SteamPunkGears/Helion4";
		scope = 2;
		model = "\x\addons\a3_epoch_community\Cinder_Base_Tower\cinder_tower_upgrade_ghost.p3d";
		displayName = "$STR_EPOCH_CinderTowerGhost";
		ladders[] = {};
  };
	class IG_Logo: NonStrategic
	{
		author="Timst";
		model="\x\addons\a3_epoch_community\models\IG_logo.p3d";
		mapSize=2;
		accuracy=1000;
		destrType="IG Logo";
		armor=20;
	};
	class IG_Box_s_SIM: Constructions_modular_F
	{
		author="Helion / Timst";
		scope=2;
		model="\x\addons\a3_epoch_community\models\IG_box_small.p3d";
		displayName="IG Box small";
	};
	class IG_Box_s: Buildable_Storage
	{
		author="Helion / Timst";
		scope=2;
		model="\x\addons\a3_epoch_community\models\IG_box_small.p3d";
		displayName="IG Box small";
		maximumLoad=900;
	};
	class IG_Box_l_SIM: Constructions_modular_F
	{
		author="Helion / Timst";
		scope=2;
		model="\x\addons\a3_epoch_community\models\IG_box_large.p3d";
		displayName="IG Box small";
	};
	class IG_Box_l: Buildable_Storage
	{
		author="Helion / Timst";
		scope=2;
		model="\x\addons\a3_epoch_community\models\IG_box_large.p3d";
		displayName="IG Box large";
		maximumLoad=4200;

	};
	class Epoch_Female_JeansPatched1_F : Epoch_Female_base_F
	{
		author = "ComatoseBadger/DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_FemaleJeansPatched1";
		modelSides[] = {1};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\kTorso_Eco.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched1_uniform";
	};
	class Epoch_Female_JeansPatched2_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched2"; //"Female Jeans(Blue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched2_uniform";
    };
	class Epoch_Female_JeansPatched3_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched3"; //"Female Jeans(Blue Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched3_uniform";
    };
	class Epoch_Female_JeansPatched4_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched4"; //"Female Jeans(CSAT Desert)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATDesert.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched4_uniform";
    };
	class Epoch_Female_JeansPatched5_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched5"; //"Female Jeans(CSAT Urban)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATUrban.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched5_uniform";
    };
	class Epoch_Female_JeansPatched6_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched6"; //"Female Jeans(DarkBlue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_DarkBluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched6_uniform";
    };
	class Epoch_Female_JeansPatched7_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched7"; //"Female Jeans(Green Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_GreenSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched7_uniform";
    };
	class Epoch_Female_JeansPatched8_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched8"; //"Female Jeans(Hero2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero 2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched8_uniform";
    };
	class Epoch_Female_JeansPatched9_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched9"; //"Female Jeans(Hero)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched9_uniform";
    };
	class Epoch_Female_JeansPatched10_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched10"; //"Female Jeans(LumberJack)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Lumberjack.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched10_uniform";
    };
	class Epoch_Female_JeansPatched11_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched11"; //"Female Jeans(LumberJack Green)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_LumberjackGreen.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched11_uniform";
    };
	class Epoch_Female_JeansPatched12_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched12"; //"Female Jeans(Nemo)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Nemo.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched12_uniform";
    };
	class Epoch_Female_JeansPatched13_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched13"; //"Female Jeans(Pink 2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Pink2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched13_uniform";
    };
	class Epoch_Female_JeansPatched14_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched14"; //"Female Jeans(Pink Hearts)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkHearts.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched14_uniform";
    };
	class Epoch_Female_JeansPatched15_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched15"; //"Female Jeans(Pink Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched15_uniform";
    };
	class Epoch_Female_JeansPatched16_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched16"; //"Female Jeans(Pink Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkWoodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched16_uniform";
    };
	class Epoch_Female_JeansPatched17_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched17"; //"Female Jeans(Purple Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched17_uniform";
    };
	class Epoch_Female_JeansPatched18_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched18"; //"Female Jeans(Purple Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched18_uniform";
    };
	class Epoch_Female_JeansPatched19_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched19"; //"Female Jeans(RG Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_RGPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched19_uniform";
    };
	class Epoch_Female_JeansPatched20_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched20"; //"Female Jeans(Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Woodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched20_uniform";
    };
	class Epoch_Female_JeansPatched21_F : Epoch_Female_JeansPatched1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansPatched21"; //"Female Jeans(Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BlackSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlueJeansPatched.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansPatched21_uniform";
    };
	class Epoch_Female_JeansBlkBrn1_F : Epoch_Female_base_F
	{
		author = "ComatoseBadger/DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_FemaleJeansBlkBrn1"; // "Female Jeans(Black Brown)";
		modelSides[] = {1};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\kTorso_Eco.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn1_uniform";
	};
	class Epoch_Female_JeansBlkBrn2_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn2"; //"Female JeansBB(Blue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn2_uniform";
    };
	class Epoch_Female_JeansBlkBrn3_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn3"; //"Female JeansBB(Blue Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn3_uniform";
    };
	class Epoch_Female_JeansBlkBrn4_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn4"; //"Female JeansBB(CSAT Desert)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATDesert.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn4_uniform";
    };
	class Epoch_Female_JeansBlkBrn5_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn5"; //"Female JeansBB(CSAT Urban)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATUrban.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn5_uniform";
    };
	class Epoch_Female_JeansBlkBrn6_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn6"; //"Female JeansBB(DarkBlue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_DarkBluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn6_uniform";
    };
	class Epoch_Female_JeansBlkBrn7_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn7"; //"Female JeansBB(Green Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_GreenSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn7_uniform";
    };
	class Epoch_Female_JeansBlkBrn8_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn8"; //"Female JeansBB(Hero2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero 2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn8_uniform";
    };
	class Epoch_Female_JeansBlkBrn9_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn9"; //"Female JeansBB(Hero)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn9_uniform";
    };
	class Epoch_Female_JeansBlkBrn10_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn10"; //"Female JeansBB(LumberJack)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Lumberjack.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn10_uniform";
    };
	class Epoch_Female_JeansBlkBrn11_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn11"; //"Female JeansBB(LumberJack Green)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_LumberjackGreen.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn11_uniform";
    };
	class Epoch_Female_JeansBlkBrn12_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn12"; //"Female JeansBB(Nemo)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Nemo.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn12_uniform";
    };
	class Epoch_Female_JeansBlkBrn13_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn13"; //"Female JeansBB(Pink 2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Pink2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn13_uniform";
    };
	class Epoch_Female_JeansBlkBrn14_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn14"; //"Female JeansBB(Pink Hearts)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkHearts.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn14_uniform";
    };
	class Epoch_Female_JeansBlkBrn15_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn15"; //"Female JeansBB(Pink Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn15_uniform";
    };
	class Epoch_Female_JeansBlkBrn16_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn16"; //"Female JeansBB(Pink Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkWoodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn16_uniform";
    };
	class Epoch_Female_JeansBlkBrn17_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn17"; //"Female JeansBB(Purple Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn17_uniform";
    };
	class Epoch_Female_JeansBlkBrn18_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn18"; //"Female JeansBB(Purple Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn18_uniform";
    };
	class Epoch_Female_JeansBlkBrn19_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn19"; //"Female JeansBB(RG Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_RGPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn19_uniform";
    };
	class Epoch_Female_JeansBlkBrn20_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn20"; //"Female JeansBB(Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Woodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn20_uniform";
    };
	class Epoch_Female_JeansBlkBrn21_F : Epoch_Female_JeansBlkBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlkBrn21"; //"Female JeansBB(Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BlackSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_BlackBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlkBrn21_uniform";
    };
	class Epoch_Female_JeansArBrn1_F : Epoch_Female_base_F
	{
		author = "ComatoseBadger/DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_FemaleJeansArBrn1"; // "Female Jeans(Arid Brown)";
		modelSides[] = {1};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\kTorso_Eco.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn1_uniform";
	};
	class Epoch_Female_JeansArBrn2_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn2"; //"Female Jeans(Blue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn2_uniform";
    };
	class Epoch_Female_JeansArBrn3_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn3"; //"Female Jeans(Blue Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn3_uniform";
    };
	class Epoch_Female_JeansArBrn4_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn4"; //"Female Jeans(CSAT Desert)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATDesert.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn4_uniform";
    };
	class Epoch_Female_JeansArBrn5_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn5"; //"Female Jeans(CSAT Urban)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATUrban.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn5_uniform";
    };
	class Epoch_Female_JeansArBrn6_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn6"; //"Female Jeans(DarkBlue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_DarkBluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn6_uniform";
    };
	class Epoch_Female_JeansArBrn7_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn7"; //"Female Jeans(Green Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_GreenSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn7_uniform";
    };
	class Epoch_Female_JeansArBrn8_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn8"; //"Female Jeans(Hero2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero 2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn8_uniform";
    };
	class Epoch_Female_JeansArBrn9_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn9"; //"Female Jeans(Hero)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn9_uniform";
    };
	class Epoch_Female_JeansArBrn10_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn10"; //"Female Jeans(LumberJack)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Lumberjack.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn10_uniform";
    };
	class Epoch_Female_JeansArBrn11_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn11"; //"Female Jeans(LumberJack Green)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_LumberjackGreen.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn11_uniform";
    };
	class Epoch_Female_JeansArBrn12_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn12"; //"Female Jeans(Nemo)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Nemo.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn12_uniform";
    };
	class Epoch_Female_JeansArBrn13_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn13"; //"Female Jeans(Pink 2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Pink2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn13_uniform";
    };
	class Epoch_Female_JeansArBrn14_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn14"; //"Female Jeans(Pink Hearts)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkHearts.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn14_uniform";
    };
	class Epoch_Female_JeansArBrn15_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn15"; //"Female Jeans(Pink Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn15_uniform";
    };
	class Epoch_Female_JeansArBrn16_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn16"; //"Female Jeans(Pink Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkWoodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn16_uniform";
    };
	class Epoch_Female_JeansArBrn17_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn17"; //"Female Jeans(Purple Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn17_uniform";
    };
	class Epoch_Female_JeansArBrn18_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn18"; //"Female Jeans(Purple Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn18_uniform";
    };
	class Epoch_Female_JeansArBrn19_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn19"; //"Female Jeans(RG Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_RGPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn19_uniform";
    };
	class Epoch_Female_JeansArBrn20_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn20"; //"Female Jeans(Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Woodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn20_uniform";
    };
	class Epoch_Female_JeansArBrn21_F : Epoch_Female_JeansArBrn1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansArBrn21"; //"Female Jeans(Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BlackSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansArBrn21_uniform";
    };
	class Epoch_Female_JeansBlack1_F : Epoch_Female_base_F
	{
		author = "ComatoseBadger/DirtySanchez";
		scope = 2;
		displayName = "$STR_EPOCH_FemaleJeansBlack1"; // "Female Jeans(Arid Brown)";
		modelSides[] = {1};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
		uniformClass = "U_JeansBlack1_uniform";
	};
	class Epoch_Female_JeansBlack2_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack2"; //"Female Jeans(Blue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack2_uniform";
    };
	class Epoch_Female_JeansBlack3_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack3"; //"Female Jeans(Blue Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BluePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack3_uniform";
    };
	class Epoch_Female_JeansBlack4_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack4"; //"Female Jeans(CSAT Desert)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATDesert.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack4_uniform";
    };
	class Epoch_Female_JeansBlack5_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack5"; //"Female Jeans(CSAT Urban)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_CSATUrban.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack5_uniform";
    };
	class Epoch_Female_JeansBlack6_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack6"; //"Female Jeans(DarkBlue Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_DarkBluePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack6_uniform";
    };
	class Epoch_Female_JeansBlack7_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack7"; //"Female Jeans(Green Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_GreenSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack7_uniform";
    };
	class Epoch_Female_JeansBlack8_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack8"; //"Female Jeans(Hero2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero 2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack8_uniform";
    };
	class Epoch_Female_JeansBlack9_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack9"; //"Female Jeans(Hero)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Hero.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack9_uniform";
    };
	class Epoch_Female_JeansBlack10_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack10"; //"Female Jeans(LumberJack)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Lumberjack.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack10_uniform";
    };
	class Epoch_Female_JeansBlack11_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack11"; //"Female Jeans(LumberJack Green)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_LumberjackGreen.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack11_uniform";
    };
	class Epoch_Female_JeansBlack12_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack12"; //"Female Jeans(Nemo)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Nemo.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack12_uniform";
    };
	class Epoch_Female_JeansBlack13_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack13"; //"Female Jeans(Pink 2)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Pink2.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack13_uniform";
    };
	class Epoch_Female_JeansBlack14_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack14"; //"Female Jeans(Pink Hearts)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkHearts.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack14_uniform";
    };
	class Epoch_Female_JeansBlack15_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack15"; //"Female Jeans(Pink Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack15_uniform";
    };
	class Epoch_Female_JeansBlack16_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack16"; //"Female Jeans(Pink Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PinkWoodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack16_uniform";
    };
	class Epoch_Female_JeansBlack17_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack17"; //"Female Jeans(Purple Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack17_uniform";
    };
	class Epoch_Female_JeansBlack18_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack18"; //"Female Jeans(Purple Polka)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_PurplePolka.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack18_uniform";
    };
	class Epoch_Female_JeansBlack19_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack19"; //"Female Jeans(RG Plaid)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_RGPlaid.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack19_uniform";
    };
	class Epoch_Female_JeansBlack20_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack20"; //"Female Jeans(Woodland)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_Woodland.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack20_uniform";
    };
	class Epoch_Female_JeansBlack21_F : Epoch_Female_JeansBlack1_F
    {
        displayName = "$STR_EPOCH_FemaleJeansBlack21"; //"Female Jeans(Skullz)";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_community\textures\keesha\tops\Torso_BlackSkulls.paa","\x\addons\a3_epoch_community\textures\keesha\pants\Pants_AridBrown.paa","\x\addons\a3_epoch_assets\textures\kBust_ECO.paa"};
		uniformClass = "U_JeansBlack21_uniform";
    };
	class Garden_SIM_EPOCH : Constructions_modular_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\epoch_Garden.p3d";
        displayName = "$STR_EPOCH_Garden";
    };
    class Garden_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\epoch_Garden_ghost.p3d";
        displayName = "$STR_EPOCH_GardenGhost";
        ladders[] = {};
    };
    class Garden_EPOCH : Buildable_Storage
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\epoch_Garden.p3d";
        displayName = "$STR_EPOCH_Garden";
        maximumLoad = 800;
    };
    class HempPlant_EPOCH : Grown_Plants_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\hemp_plant.p3d";
        displayName = "$STR_EPOCH_HempPlant";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Hemp
            {
                magazine = "Hemp";
                count = 1;
            };
        };
    };
	class PoppyPlant_EPOCH : Grown_Plants_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\poppy_plant.p3d";
        displayName = "$STR_EPOCH_PoppyPlant";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Poppy
            {
                magazine = "Poppy";
                count = 1;
            };
        };
    };
	class SunflowerPlant_EPOCH : Grown_Plants_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\Sunflower_plant.p3d";
        displayName = "$STR_EPOCH_SunflowerPlant";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Sunflower
            {
                magazine = "Sunflower";
                count = 1;
            };
        };
    };
	class SaplingPlant_EPOCH : Grown_Plants_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\sapling.p3d";
        displayName = "$STR_EPOCH_SaplingPlant";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_Sapling
            {
                magazine = "Sapling";
                count = 1;
            };
        };
    };
	class SaplingTeenPlant_EPOCH : Grown_Plants_F
    {
        author = "Helion4/DirtySanchez";
        scope = 2;
        model = "\x\addons\a3_epoch_community\models\Farming\sapling_teen.p3d";
        displayName = "$STR_EPOCH_SaplingTeenPlant";
        transportMaxItems = 0;
        transportMaxMagazines = 1;
        transportMaxWeapons = 0;
        class TransportMagazines
        {
            class _xx_SaplingTeen
            {
                magazine = "SaplingTeen";
                count = 1;
            };
        };
    };
    class BurnBarrel_SIM_EPOCH : Constructions_modular_F
    {
        author = "BI";
        scope = 2;
		model = "\A3\Structures_F\Items\Vessels\MetalBarrel_empty_F.p3d";
        displayName = "$STR_EPOCH_BurnBarrel";
    };
    class BurnBarrel_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Items\Vessels\MetalBarrel_empty_F.p3d";
        displayName = "$STR_EPOCH_BurnBarrel";
        ladders[] = {};
    };
    class BurnBarrel_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.62;
        scope = 2;
		model = "\A3\Structures_F\Items\Vessels\MetalBarrel_empty_F.p3d";
        displayName = "$STR_EPOCH_BurnBarrel";
		vehicleClass = "Epoch_objects";
		destrType = "DestructEngine";
		simulation = "fire";
		keepHorizontalPlacement = 0;
        class EventHandlers
		{
			init = "(_this select 0) inflame false";
		};
		class UserActions
		{
			class FlameON
			{
				displayNameDefault = ""; // can add fire icon here
				displayName = "Light Fire";
				position = "";
				priority = 11;
				radius = 1.5;
				aiMaxRange = "1 * 3";
				onlyForPlayer = 0;
				condition = "!inflamed && ('lighter_epoch' in magazines player)";
				statement = "(_this select 0) inflame true";
			};
			class FlameOFF
			{
				displayNameDefault = "";
				displayName = "Put Out Fire";
				position = "";
				priority = 11;
				radius = 1.5;
				aiMaxRange = "1 * 3";
				onlyForPlayer = 0;
				condition = "inflamed";
				statement = "(_this select 0) inflame false";
			};
		};
		class Effects
		{
			class Light1
			{
				simulation = "light";
				type = "SmallFireLight";
			};
			class sound
			{
				simulation = "sound";
				type = "Fire";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation = "particles";
				type = "SmallFireBarrel";
			};
			class Refract1
			{
				simulation = "particles";
				type = "Refract";
			};
		};
    };
    class LightPole_SIM_EPOCH : Constructions_modular_F
    {
        author = "BI";
        scope = 2;
		model = "\A3\Structures_F\Civ\Lamps\LampShabby_F.p3d";
        displayName = "$STR_EPOCH_LightPole";
    };
    class LightPole_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Lamps\LampShabby_F.p3d";
        displayName = "$STR_EPOCH_LightPole";
        ladders[] = {};
    };
    class LightPole_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.79;
        scope = 2;
		model = "\A3\Structures_F\Civ\Lamps\LampShabby_F.p3d";
        displayName = "$STR_EPOCH_LightPole";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTree";
		armor = 200;
		class Reflectors
		{
			class Light_1
			{
				color[] = {1100,700,500};
				ambient[] = {11,7,5};
				intensity = 5;
				size = 1;
				innerAngle = 80;
				outerAngle = 130;
				coneFadeCoef = 3;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 100;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.8;
					hardLimitStart = 30;
					hardLimitEnd = 40;
				};
			};
		};
    };
    class SmallForestCamoNet_SIM_EPOCH : Constructions_modular_F
    {
        author = "BI";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallForestCamoNet";
    };
    class SmallForestCamoNet_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallForestCamoNet";
        ladders[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class SmallForestCamoNet_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 14.59;
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallForestCamoNet";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTent";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class SmallDesertCamoNet_SIM_EPOCH : Constructions_modular_F
    {
        author = "BI";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallDesertCamoNet";
    };
    class SmallDesertCamoNet_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallDesertCamoNet";
        ladders[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class SmallDesertCamoNet_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 14.59;
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_F.p3d";
        displayName = "$STR_EPOCH_SmallDesertCamoNet";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTent";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class LargeForestCamoNet_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeForestCamoNet";
    };
    class LargeForestCamoNet_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeForestCamoNet";
        ladders[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class LargeForestCamoNet_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 19.32;
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeForestCamoNet";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTent";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class LargeDesertCamoNet_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeDesertCamoNet";
    };
    class LargeDesertCamoNet_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeDesertCamoNet";
        ladders[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class LargeDesertCamoNet_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 14.59;
        scope = 2;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
        displayName = "$STR_EPOCH_LargeDesertCamoNet";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTent";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CA.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Shelters\Data\CamoNet_BLUFOR.rvmat"};
    };
    class FirePlace_02_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\Campfire_F.p3d";
        displayName = "$STR_EPOCH_FirePlace_02";
    };
    class FirePlace_02_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\Campfire_F.p3d";
        displayName = "$STR_EPOCH_FirePlace_02";
        ladders[] = {};
    };
    class FirePlace_02_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 2.17;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.19;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\Campfire_F.p3d";
        displayName = "$STR_EPOCH_FirePlace_02";
		vehicleClass = "Epoch_objects";
		destrType = "DestructNo";
		simulation = "fire";
		cost = 0;
		keepHorizontalPlacement = 0;
        class EventHandlers
		{
			init = "(_this select 0) inflame false";
		};
		class UserActions
		{
			class FlameON
			{
				displayNameDefault = ""; // can add fire icon here
				displayName = "Light Fire";
				position = "";
				priority = 11;
				radius = 1.5;
				aiMaxRange = "1 * 3";
				onlyForPlayer = 0;
				condition = "!inflamed && ('lighter_epoch' in magazines player)";
				statement = "(_this select 0) inflame true";
			};
			class FlameOFF
			{
				displayNameDefault = "";
				displayName = "Put Out Fire";
				position = "";
				priority = 11;
				radius = 1.5;
				aiMaxRange = "1 * 3";
				onlyForPlayer = 0;
				condition = "inflamed";
				statement = "(_this select 0) inflame false";
			};
		};
		class Effects
		{
			class Light1
			{
				simulation = "light";
				type = "SmallFireLight";
			};
			class sound
			{
				simulation = "sound";
				type = "Fire_camp";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation = "particles";
				type = "SmallFireF";
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
			};
		};
	};
    class FieldToilet_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\FieldToilet_F.p3d";
        displayName = "$STR_EPOCH_FieldToilet";
    };
    class FieldToilet_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\FieldToilet_F.p3d";
        displayName = "$STR_EPOCH_FieldToilet";
        ladders[] = {};
    };
    class FieldToilet_EPOCH : Buildable_Storage
    {
        author = "BI";
		mapSize = 2.24;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"door_1_rot",0},{"door_1_locked_rot",0}};
			hide[] = {};
			verticalOffset = 1.22;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Civ\Camping\FieldToilet_F.p3d";
        displayName = "$STR_EPOCH_FieldToilet";
		vehicleClass = "Epoch_objects";
		destrType = "DestructNo";
        maximumLoad = 50;
		numberOfDoors = 1;
		waterLeakiness = 0.2;
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "PlasticDoorsSound";
				soundPosition = "Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Door_1_locked_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Door_1_trigger";
				priority = 11;
				radius = 1;
				aiMaxRange = "1 * 3";
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement = "([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				priority = 11;
				condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement = "([this, 1, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin1 = "OpenDoor_1";
		actionEnd1 = "OpenDoor_1";
	};
    class Scaffolding_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Constructions\Scaffolding_F.p3d";
        displayName = "$STR_EPOCH_Scaffolding";
    };
    class Scaffolding_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Constructions\Scaffolding_F.p3d";
        displayName = "$STR_EPOCH_Scaffolding";
        ladders[] = {};
    };
    class Scaffolding_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 15.782;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.694;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Civ\Constructions\Scaffolding_F.p3d";
        displayName = "$STR_EPOCH_Scaffolding";
		vehicleClass = "Epoch_objects";
		destrType = "DestructBuilding";
		armor = 500;
		keepHorizontalPlacement = 1;
    };
    class Sink_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Sink_F.p3d";
        displayName = "$STR_EPOCH_Sink";
    };
    class Sink_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Sink_F.p3d";
        displayName = "$STR_EPOCH_Sink";
        ladders[] = {};
    };
    class Sink_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 2.17;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.618;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Sink_F.p3d";
        displayName = "$STR_EPOCH_Sink";
		vehicleClass = "Epoch_objects";
		destrType = "DestructDefault";
		armor = 300;
    };
    class PortableLight_Single_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_single_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Single";
    };
    class PortableLight_Single_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_single_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Single";
        ladders[] = {};
    };
    class PortableLight_Single_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 0.824;
		class SimpleObject
		{
			animate[] = {{"light_1_pitch_rot",0},{"light_1_jaw_rot",0.13}};
			hide[] = {"light_1_hide"};
			verticalOffset = 1.082;
			verticalOffsetWorld = 0;
		};
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_single_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Single";
		vehicleClass = "Epoch_objects";
		class AnimationSources
		{
			class Light_1_pitch_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = "1/45";
			};
			class Light_1_jaw_source
			{
				source = "user";
				initPhase = 0.13;
				animPeriod = 2;
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1000,1200};
				ambient[] = {10,10,12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
	};
    class PortableLight_Double_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_double_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Double";
    };
    class PortableLight_Double_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_double_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Double";
        ladders[] = {};
    };
    class PortableLight_Double_EPOCH : PortableLight_Single_EPOCH
    {
        author = "BI";
		mapSize = 1.352;
		class SimpleObject
		{
			animate[] = {{"light_1_pitch_rot",0},{"light_1_jaw_rot",0.13}};
			hide[] = {"light_1_hide","light_2_hide"};
			verticalOffset = 1.082;
			verticalOffsetWorld = 0;
		};
        scope = 2;
		model = "\A3\Structures_F_EPA\Civ\Constructions\PortableLight_double_F.p3d";
        displayName = "$STR_EPOCH_PortableLight_Double";
		vehicleClass = "Epoch_objects";
		aggregateReflectors[] = {{"Light_1","Light_2"}};
		class Reflectors: Reflectors
		{
			class Light_1: Light_1{};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
			};
		};
	};
    class WatchTower_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Accessories\LifeguardTower_01_F.p3d";
        displayName = "$STR_EPOCH_WatchTower";
    };
    class WatchTower_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Accessories\LifeguardTower_01_F.p3d";
        displayName = "$STR_EPOCH_WatchTower";
		ladders[] = {{"Ladder_1_start","Ladder_1_end"}};
    };
    class WatchTower_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 3.67;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 3.019;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Accessories\LifeguardTower_01_F.p3d";
        displayName = "$STR_EPOCH_WatchTower";
		vehicleClass = "Epoch_objects";
		destrType = "DestructDefault";
		armor = 300;
		ladders[] = {{"Ladder_1_start","Ladder_1_end"}};
    };
    class SunShade_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Camping\Sunshade_01_F.p3d";
        displayName = "$STR_EPOCH_SunShade";
    };
    class SunShade_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Camping\Sunshade_03_F.p3d";
        displayName = "$STR_EPOCH_SunShade";
        ladders[] = {};
    };
    class SunShade_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 2.17;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.618;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Camping\Sunshade_03_F.p3d";
        displayName = "$STR_EPOCH_SunShade";
		vehicleClass = "Epoch_objects";
		destrType = "DestructTree";
		armor = 5;
    };
    class FuelPump_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F_EPC\Civ\Camping\Sunshade_03_F.p3d";
        displayName = "$STR_EPOCH_FuelPump";
    };
    class FuelPump_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_f\Ind\FuelStation_Small\fs_feed_F.p3d";
        displayName = "$STR_EPOCH_FuelPump";
        ladders[] = {};
    };
    class FuelPump_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 2.17;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.826;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_f\Ind\FuelStation_Small\fs_feed_F.p3d";
        displayName = "$STR_EPOCH_FuelPump";
		vehicleClass = "Epoch_objects";
		memoryPointSupply = "Refuel_pos";
		transportFuel = 50000;
		disableInventory = 1;
		class DestructionEffects
		{
			class FuelStationSmk1
			{
				simulation = "particles";
				type = "FuelStationSmk1";
				position = "";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";
				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "FuelFire1";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelDestr
			{
				simulation = "destroy";
				type = "FuelStationDestr";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
			class FuelSmoke1
			{
				simulation = "particles";
				type = "FuelFire1";
				position = "ObjectDestructionSmokeFuelS";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke2
			{
				simulation = "particles";
				type = "ObjectDestructionSmokeFuelS1_2";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
		};
	};
    class BagBunker_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\BagBunker\BagBunker_Small_F.p3d";
        displayName = "$STR_EPOCH_BagBunker";
    };
    class BagBunker_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Mil\BagBunker\BagBunker_Small_F.p3d";
        displayName = "$STR_EPOCH_BagBunker";
        ladders[] = {};
    };
    class BagBunker_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 4.215;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.966;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Mil\BagBunker\BagBunker_Small_F.p3d";
        displayName = "$STR_EPOCH_BagBunker";
		vehicleClass = "Epoch_objects";
		destrType = "DestructBuilding";
		accuracy = 1000;
		armor = 500;
		class DestructionEffects{};
    };
    class SandbagWall_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Short_F.p3d";
        displayName = "$STR_EPOCH_SandbagWall";
    };
    class SandbagWall_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Short_F.p3d";
        displayName = "$STR_EPOCH_SandbagWall";
        ladders[] = {};
    };
    class SandbagWall_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 1.98;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.415;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Short_F.p3d";
        displayName = "$STR_EPOCH_SandbagWall";
		vehicleClass = "Epoch_objects";
		destrType = "DestructNo";
		armor = 1000;
		cost = 1000;
		accuracy = 1000;
		animated = 0;
		class AttributeValues
		{
			objectIsSimple = 0;
		};
		class DestructionEffects{};
    };
    class SandbagWallLong_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
        displayName = "$STR_EPOCH_SandbagWallLong";
    };
    class SandbagWallLong_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
        displayName = "$STR_EPOCH_SandbagWallLong";
        ladders[] = {};
    };
    class SandbagWallLong_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 3.12;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.42;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
        displayName = "$STR_EPOCH_SandbagWallLong";
		vehicleClass = "Epoch_objects";
		destrType = "DestructNo";
		armor = 1000;
		cost = 1000;
		accuracy = 1000;
		animated = 0;
		class AttributeValues
		{
			objectIsSimple = 0;
		};
		class DestructionEffects{};
    };
    class BarGate_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Walls\BarGate_F.p3d";
        displayName = "$STR_EPOCH_BarGate";
    };
    class BarGate_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Walls\BarGate_F.p3d";
        displayName = "$STR_EPOCH_BarGate";
        ladders[] = {};
    };
    class BarGate_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 8.75;
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"door_1_rot",0}};
			hide[] = {};
			verticalOffset = 4.05;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Walls\BarGate_F.p3d";
        displayName = "$STR_EPOCH_BarGate";
		vehicleClass = "Epoch_objects";
		destrType = "DestructWall";
		animated = 1;
		armor = 150;
		cost = 1000;
		numberOfDoors = 1;
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "RoadGateDoors";
				soundPosition = "Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Door_1_locked_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
		};
		class UserActions
		{
			class OpenGate_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Bar_1_trigger";
				radius = 3;
				aiMaxRange = 9;
				onlyForPlayer = 0;
				condition = "this animationPhase 'Door_1_rot' < 0.5";
				statement = "this animate ['Door_1_rot', 1]";
			};
			class CloseGate_1: OpenGate_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "this animationPhase 'Door_1_rot' >= 0.5";
				statement = "this animate ['Door_1_rot', 0]";
			};
		};
		actionBegin1 = "OpenGate_1";
		actionEnd1 = "OpenGate_1";
	};
    class WaterPump_SIM_EPOCH : Constructions_modular_F
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Water_source_F.p3d";
        displayName = "$STR_EPOCH_WaterPump";
    };
    class WaterPump_Ghost_EPOCH : Const_Ghost_EPOCH
    {
        author = "Grahame";
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Water_source_F.p3d";
        displayName = "$STR_EPOCH_WaterPump";
        ladders[] = {};
    };
    class WaterPump_EPOCH : Constructions_static_F
    {
        author = "BI";
		mapSize = 2.17;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.143;
			verticalOffsetWorld = 0;
			init = "''";
		};
        scope = 2;
		model = "\A3\Structures_F\Civ\Accessories\Water_source_F.p3d";
        displayName = "$STR_EPOCH_WaterPump";
		vehicleClass = "Epoch_objects";
		destrType = "DestructNo";
		keepHorizontalPlacement = 1;
		class DestructionEffects{};
    };
};

/*[[[end]]]*/
