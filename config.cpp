class CfgPatches
{
	class VSM_helmet_weight_change
	{
		author="prazv";
		name="VSM helmet weight change";
		requiredAddons[]=
		{
			"VSM_HELMETS",
			"VSM_Fast_config",
			"VSM_OGA_Fix",
			"Alpine_Vests_Config",
			"AOR2_Vests_Config",
			"Arid_Vests_Config",
			"DTS_vests_Config",
			"AOR2_Config",
			"Black_vests_Config"
		};
		requiredVersion=0.1;
		units[]={};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class VSM_base_fast_helmet;
	class H_HelmetB;
	//fast helmets
	class VSM_highcutslick_black: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_highcutslick_OD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_highcutslick_tan: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_highcutslick_white: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_alpinecover: ItemCore
	{
        class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_coveraor1: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_black: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fast_helmet_covermcblack: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_covermulticam: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_OD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_tan: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fast_helmet_covertropic: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_fasthelmet_white: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	//opscore
	class VSM_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AOR2_opscore_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AOR2_opscore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_multicam: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_ocp: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_aor1: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Black_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_oga_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OGA_OD_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_ProjectHonor_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Tan_spray_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OD_spray_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_MulticamTropic_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_M81_OPS: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_2_multicam: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_2_ocp: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OPS_2_AOR1: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Black_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_oga_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OGA_OD_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_ProjectHonor_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_MulticamTropic_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_M81_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Tan_spray_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_OD_Spray_OPS_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class BLK2_opscore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class White_opscore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class Alpine_opscore_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class Alpine_opscore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ARD_opscore: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ARD_opscore_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class BLK_opscore_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class White_opscore_2: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	//mich2000
	class VSM_Mich2000_MulticamTropic: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_M81: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_CamoSprayOD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_CamoSprayTAN: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_OGA: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_OGA_OD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_ProjectHonor: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_Multicam: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_AOR1: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_ocp: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_MulticamTropic: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_OCP: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_aor1: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_M81: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_CamoSprayOD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_CamoSprayTAN: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_OGA: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_OGA_OD: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_ProjectHonor: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class VSM_Mich2000_2_Multicam: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	//modular helmet
	class Alpine_Helmet_IA: H_HelmetB
	{
		class ItemInfo: HeadgearItem
		{
			mass = 32;
		};
	};
	class AOR2_Helmet_IA: H_HelmetB
	{
		class ItemInfo: HeadgearItem
		{
			mass = 32;
		};
	};
	class Arid_Helmet_IA: H_HelmetB
	{
		class ItemInfo: HeadgearItem
		{
			mass = 32;
		};
	};
	class DTS_Helmet_IA: H_HelmetB
	{
		class ItemInfo: HeadgearItem
		{
			mass = 32;
		};
	};
};


