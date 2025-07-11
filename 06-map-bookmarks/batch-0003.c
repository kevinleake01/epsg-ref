/*
####################################
#
# --- BATCH-0003.C ---
#
# To run this program:
#
# gcc batch-0003.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0003.c -o a.out-1\n");
  system("mkdir 00_0003_compass\n");
  system("./a.out-1 31N AA 66021 00000 \"0N 0E\" > 00_0002_compass/000.html\n");
  system("./a.out-1 Z AG 00000 99999 \"90N\" > 00_0002_compass/north.html\n");
  system("./a.out-1 B AN 00000 00000 \"90S\" > 00_0002_compass/south.html\n");
  system("./a.out-1 46N AF 66021 00000 \"0N 90E\" > 00_0002_compass/east.html\n");
  system("./a.out-1 16N AF 66021 00000 \"0N 90W\" > 00_0002_compass/west.html\n");
  system("./a.out-1 01N AA 66021 00000 \"0N 180E\" > 00_0002_compass/180.html\n");
  system("rm a.out-1\n");
}

