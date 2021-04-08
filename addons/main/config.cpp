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

	LEGACY_CLASS(afghan_house_a);
	LEGACY_CLASS(afghan_houses);
	LEGACY_CLASS(afghan_houses_c);
	LEGACY_CLASS(afghan_houses_c2);
	LEGACY_CLASS(afghan_houses_old);
	LEGACY_CLASS(bridge);
	LEGACY_CLASS(bridge_wood);
	LEGACY_CLASS(cargo_cont);
	LEGACY_CLASS(case_d);
	LEGACY_CLASS(cat_dumper);
	LEGACY_CLASS(ch_office_b);
	LEGACY_CLASS(constructioncrane);
	LEGACY_CLASS(fences);
	LEGACY_CLASS(flowers);
	LEGACY_CLASS(forklift);
	LEGACY_CLASS(generalstore);
	LEGACY_CLASS(hangar_2);
	LEGACY_CLASS(hanger);
	LEGACY_CLASS(ind);
	LEGACY_CLASS(ind_coltan_mine);
	LEGACY_CLASS(ind_conveyer);
	LEGACY_CLASS(ind_fuelstation);
	LEGACY_CLASS(ind_garage01);
	LEGACY_CLASS(ind_oil_mine);
	LEGACY_CLASS(ind_powerstation);
	LEGACY_CLASS(ind_shed);
	LEGACY_CLASS(ind_workshop01);
	LEGACY_CLASS(kitchen_chair_a);
	LEGACY_CLASS(kitchen_table_a);
	LEGACY_CLASS(lobby_chair);
	LEGACY_CLASS(lobby_table);
	LEGACY_CLASS(metalcrate);
	LEGACY_CLASS(mil);
	LEGACY_CLASS(misc_beds);
	LEGACY_CLASS(misc_breadoven);
	LEGACY_CLASS(misc_cases);
	LEGACY_CLASS(misc_chairs);
	LEGACY_CLASS(misc_dead);
	LEGACY_CLASS(misc_decorations);
	LEGACY_CLASS(misc_ramps);
	LEGACY_CLASS(misc_signs);
	LEGACY_CLASS(misc_steps);
	LEGACY_CLASS(misc_tables);
	LEGACY_CLASS(mosque_big);
	LEGACY_CLASS(pc);
	LEGACY_CLASS(radio_b);
	LEGACY_CLASS(sidewalks);
	LEGACY_CLASS(tv_a);
	LEGACY_CLASS(vending_machine);
	LEGACY_CLASS(wall);
	LEGACY_CLASS(wall_k);
	LEGACY_CLASS(wall_l);
};
