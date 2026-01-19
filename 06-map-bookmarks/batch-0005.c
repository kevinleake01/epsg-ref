/*
####################################
#
# --- BATCH-0005.C ---
#
# To run this program:
#
# gcc batch-0005.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0005.c -o a.out-1\n");
  system("mkdir 0005_compass\n");
  system("./a.out-1 aqqoAL \"0N 0E\" > 0005_compass/000.html\n");
  system("./a.out-1 f_r9FK \"90N\" > 0005_compass/north.html\n");
  system("./a.out-1 Kr_oQf \"90S\" > 0005_compass/south.html\n");
  system("./a.out-1 yqqoAL \"0N 90E\" > 0005_compass/east.html\n");
  system("./a.out-1 SqqoAL \"0N 90W\" > 0005_compass/west.html\n");
  system("./a.out-1 6qqoAL \"0N 180E\" > 0005_compass/180.html\n");
  system("rm a.out-1\n");
}

