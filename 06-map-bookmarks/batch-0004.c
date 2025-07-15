/*
####################################
#
# --- BATCH-0004.C ---
#
# To run this program:
#
# gcc batch-0004.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0004.c -o a.out-1\n");
  system("mkdir 0004_compass\n");
  system("./a.out-1 6FG22222 22 \"0N 0E\" > 0004_compass/000.html\n");
  system("./a.out-1 CFX2X2X2 X2 \"90N\" > 0004_compass/north.html\n");
  system("./a.out-1 2F222222 22 \"90S\" > 0004_compass/south.html\n");
  system("./a.out-1 6MGG2222 22 \"0N 90E\" > 0004_compass/east.html\n");
  system("./a.out-1 66GG2222 22 \"0N 90W\" > 0004_compass/west.html\n");
  system("./a.out-1 62G22222 22 \"0N 180E\" > 0004_compass/180.html\n");
  system("rm a.out-1\n");
}

