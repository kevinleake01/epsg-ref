/*
####################################
#
# --- BATCH-0001.C ---
#
# To run this program:
#
# gcc batch-0001.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0001.c -o a.out-1\n");
  system("mkdir 0001_compass\n");
  system("./a.out-1 0.000001 0.000001 \"0N 0E\" > 0001_compass/000.html\n");
  system("./a.out-1 89.999999 0.000001 \"90N\" > 0001_compass/north.html\n");
  system("./a.out-1 -89.999999 0.000001 \"90S\" > 0001_compass/south.html\n");
  system("./a.out-1 0.000001 90.000001 \"0N 90E\" > 0001_compass/east.html\n");
  system("./a.out-1 0.000001 -89.999999  \"0N 90W\" > 0001_compass/west.html\n");
  system("./a.out-1 0.000001 -179.999999 \"0N 180E\" > 0001_compass/180.html\n");
  system("rm a.out-1\n");
}

