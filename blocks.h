//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "date '+%R'",					60,		0},
	{" ", "$HOME/.scripts/date.sh",			60,		0},
    {"", "$HOME/.scripts/battery_status.sh", 10, 0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {" ", "ip addr | awk '$2 ~ 192 {print $2}' | sed \"s/\\/24//g\"", 60, 0},
    {"  ", "", 0, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  |  ";
static unsigned int delimLen = 5;
