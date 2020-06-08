//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/status-modules/updates",					   3600,	               0},
	{"", "~/.local/bin/status-modules/volume",					      0,		           20},
	{"", "~/.local/bin/status-modules/battery",					     10,	              21},
	{"", "~/.local/bin/status-modules/wifi",					        60,	              22},
	{"", "date +%d/%m/%y",				                              0,		            0},
	{"", "date +%H:%M",					                             60,		            0},
   {"", "~/.local/bin/status-modules/power",                                                      0,               23},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  |  ";
