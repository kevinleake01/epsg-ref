/*
####################################
#
# --- BATCH-0007.C ---
#
# To run this program:
#
# gcc batch-0007.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0007.c -o a.out-1\n");
  system("mkdir 0007_compass\n");
  system("./a.out-1 daherogada \"0N 0E\" > 0007_compass/000.html\n");
  system("./a.out-1 kutulevoma \"90N\" > 0007_compass/north.html\n");
  system("./a.out-1 lozohujoje \"90S\" > 0007_compass/south.html\n");
  system("./a.out-1 jehatobolu \"0N 90E\" > 0007_compass/east.html\n");
  system("./a.out-1 kapovolosa \"0N 90W\" > 0007_compass/west.html\n");
  system("./a.out-1 rekoconezu \"0N 180E\" > 0007_compass/180.html\n");
  system("rm a.out-1\n");
}

