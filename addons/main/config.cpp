#define LEGACY_CLASS(CLASS_NAME) class CLASS_NAME \
{ \
	addonRootClass = jbad_##CLASS_NAME##; \
	name = CLASS_NAME; \
	requiredVersion = 1.0; \
	requiredAddons[] = {jbad_##CLASS_NAME##}; \
	units[] = {}; \
	weapons[] = {}; \
}

class CfgPatches
{
	class anrop_jbad_legacy_compat
	{
		addonRootClass = "jbad_defines";
		name = "Anrop Jbad Legacy Compat";
		author = "Anrop";
		url = "https://www.anrop.se";
		requiredVersion = 1.0;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};

	LEGACY_CLASS(afghan_houses);
	LEGACY_CLASS(afghan_houses_c);
	LEGACY_CLASS(afghan_houses_old);
	LEGACY_CLASS(cargo_cont);
	LEGACY_CLASS(case_d);
	LEGACY_CLASS(flowers);
	LEGACY_CLASS(generalstore);
	LEGACY_CLASS(hangar_2);
	LEGACY_CLASS(ind_coltan_mine);
	LEGACY_CLASS(ind_conveyer);
	LEGACY_CLASS(ind_fuelstation);
	LEGACY_CLASS(ind_garage01);
	LEGACY_CLASS(ind_powerstation);
	LEGACY_CLASS(ind_shed);
	LEGACY_CLASS(kitchen_chair_a);
	LEGACY_CLASS(lobby_chair);
	LEGACY_CLASS(mil);
	LEGACY_CLASS(mosque_big);
	LEGACY_CLASS(radio_b);
	LEGACY_CLASS(tv_a);
	LEGACY_CLASS(vending_machine);
	LEGACY_CLASS(wall);
	LEGACY_CLASS(wall_k);
	LEGACY_CLASS(wall_l);
};
