class f_spacer_0
{
	title = "--	Black Sh33p --";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_spacer_1
{
	title = "::	Volumetric Fog:";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_param_vfog
{
	title = "        Custom Fog";
	values[] = {0, 1};
	texts[] = {"Off", "On"};
	default = 0;
	code = "f_param_vfog = %1;";
};
class f_spacer_2
{
	title = "::	UAV Introduction:";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_param_uav
{
	title = "        UAV";
	values[] = {0, 1};
	texts[] = {"Off", "On"};
	default = 0;
	code = "f_param_uav = %1;";
};
class f_spacer_3
{
	title = "::	Headless Client:";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_param_hc
{
	title = "        HC";
	values[] = {0, 1};
	texts[] = {"Off", "On"};
	default = 0;
	code = "f_param_hc = %1; publicVariable ""f_param_hc"";";
};
class f_spacer_4
{
	title = "::	Igi Load Script:";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_param_igi
{
	title = "        Igi Load";
	values[] = {0, 1};
	texts[] = {"Off", "On"};
	default = 0;
	code = "f_param_igi = %1;";
};
class f_spacer_5
{
	title = "::	View Distance:";
	values[] = {0};
	texts[] = {""};
	default = 0;
	code = "";
};
class f_param_vd
{
	title = "        Distance";
	values[] = {500,3000, 4000, 5000, 6000, 7000, 8000,};
	texts[] = {"500","3000", "4000", "5000", "6000", "7000", "8000", };
	default = 500;
	code = "f_param_vd = %1;";
};