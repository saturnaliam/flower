#include "flower.h"
#include <stdio.h>

int main() {
  printf("%sBLACK FG\x1b[0m | ", FLOWER_FG_BLACK);
  printf("%sBLACK BG\x1b[0m | ", FLOWER_BG_BLACK);
  printf("%sBRIGHT BLACK FG\x1b[0m | ", FLOWER_FG_BRIGHTBLACK);
  printf("%sBRIGHT BLACK BG\x1b[0m\n", FLOWER_BG_BRIGHTBLACK);
  printf("%sRED FG\x1b[0m | ", FLOWER_FG_RED);
  printf("%sRED BG\x1b[0m | ", FLOWER_BG_RED);
  printf("%sBRIGHT RED FG\x1b[0m | ", FLOWER_FG_BRIGHTRED);
  printf("%sBRIGHT RED BG\x1b[0m\n", FLOWER_BG_BRIGHTRED);
  printf("%sGREEN FG\x1b[0m | ", FLOWER_FG_GREEN);
  printf("%sGREEN BG\x1b[0m | ", FLOWER_BG_GREEN);
  printf("%sBRIGHT GREEN FG\x1b[0m | ", FLOWER_FG_BRIGHTGREEN);
  printf("%sBRIGHT GREEN BG\x1b[0m\n", FLOWER_BG_BRIGHTGREEN);
  printf("%sYELLOW FG\x1b[0m | ", FLOWER_FG_YELLOW);
  printf("%sYELLOW BG\x1b[0m | ", FLOWER_BG_YELLOW);
  printf("%sBRIGHT YELLOW FG\x1b[0m | ", FLOWER_FG_BRIGHTYELLOW);
  printf("%sBRIGHT YELLOW BG\x1b[0m\n", FLOWER_BG_BRIGHTYELLOW);
  printf("%sBLUE FG\x1b[0m | ", FLOWER_FG_BLUE);
  printf("%sBLUE BG\x1b[0m | ", FLOWER_BG_BLUE);
  printf("%sBRIGHT BLUE FG\x1b[0m | ", FLOWER_FG_BRIGHTBLUE);
  printf("%sBRIGHT BLUE BG\x1b[0m\n", FLOWER_BG_BRIGHTBLUE);
  printf("%sMAGENTA FG\x1b[0m | ", FLOWER_FG_MAGENTA);
  printf("%sMAGENTA BG\x1b[0m | ", FLOWER_BG_MAGENTA);
  printf("%sBRIGHT MAGENTA FG\x1b[0m | ", FLOWER_FG_BRIGHTMAGENTA);
  printf("%sBRIGHT MAGENTA BG\x1b[0m\n", FLOWER_BG_BRIGHTMAGENTA);
  printf("%sCYAN FG\x1b[0m | ", FLOWER_FG_CYAN);
  printf("%sCYAN BG\x1b[0m | ", FLOWER_BG_CYAN);
  printf("%sBRIGHT CYAN FG\x1b[0m | ", FLOWER_FG_BRIGHTCYAN);
  printf("%sBRIGHT CYAN BG\x1b[0m\n", FLOWER_BG_BRIGHTCYAN);
  printf("%sWHITE FG\x1b[0m | ", FLOWER_FG_WHITE);
  printf("%sWHITE BG\x1b[0m | ", FLOWER_BG_WHITE);
  printf("%sBRIGHT WHITE FG\x1b[0m | ", FLOWER_FG_BRIGHTWHITE);
  printf("%sBRIGHT WHITE BG\x1b[0m\n", FLOWER_BG_BRIGHTWHITE);
}
