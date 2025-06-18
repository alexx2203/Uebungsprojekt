#ifndef FARBEN_H
#define FARBEN_H
#include <stdio.h>


const char BLACK[]="\033[30m";
const char RED[]="\033[31m";
const char GREEN[]="\033[32m";
const char YELLOW[]="\033[33m";
const char BLUE[]="\033[34m";
const char MAGENTA[]="\033[35m";
const char CYAN[]="\033[36m";
const char WHITE[]="\033[37m";

const char BRIGHT_BLACK[]="\033[90m";
const char BRIGHT_RED[]="\033[91m";
const char BRIGHT_GREEN[]="\033[92m";
const char BRIGHT_YELLOW[]="\033[93m";
const char BRIGHT_BLUE[]="\033[94m";
const char BRIGHT_MAGENTA[]="\033[95m";
const char BRIGHT_CYAN[]="\033[96m";
const char BRIGHT_WHITE[]="\033[97m";

const char RESET[]="\033[0m";

const char bg_BLACK[]="\033[40m";
const char bg_RED[]="\033[41m";
const char bg_GREEN[]="\033[42m";
const char bg_YELLOW[]="\033[43m";
const char bg_BLUE[]="\033[44m";
const char bg_MAGENTA[]="\033[45m";
const char bg_CYAN[]="\033[46m";
const char bg_WHITE[]="\033[47m";

const char bg_BRIGHT_BLACK[]="\033[100m";
const char bg_BRIGHT_RED[]="\033[101m";
const char bg_BRIGHT_GREEN[]="\033[102m";
const char bg_BRIGHT_YELLOW[]="\033[103m";
const char bg_BRIGHT_BLUE[]="\033[104m";
const char bg_BRIGHT_MAGENTA[]="\033[105m";
const char bg_BRIGHT_CYAN[]="\033[106m";
const char bg_BRIGHT_WHITE[]="\033[107m";

void cursor_pos(int zeile,int spalte)
{
  printf("\033[%i;%iH",zeile,spalte);
}

void color(int fg)
{
  printf("\033[%im",fg);
}
void clear(void)
{
printf("\033[2J\033[H");
}
#endif /* FARBEN_H */
