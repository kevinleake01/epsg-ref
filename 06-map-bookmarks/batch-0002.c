/*
####################################
#
# --- BATCH-0002.C ---
#
# To run this program:
#
# gcc batch-0002.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0002.c -o a.out-1\n");
  system("mkdir 0002_compass\n");
  system("./a.out-1 AAA HHHHC X0KG \"0N 0E\" > 0002_compass/000.html\n");
  system("./a.out-1 AAA ZH0H0 H1HG \"90N\" > 0002_compass/north.html\n");
  system("./a.out-1 ATA HK3N ZZLZ \"90S\" > 0002_compass/south.html\n");
  system("./a.out-1 AAA HR7L4 D09G \"0N 90E\" > 0002_compass/east.html\n");
  system("./a.out-1 ECU GPC6 PVV \"0N 90W\" > 0002_compass/west.html\n");
  system("./a.out-1 KIR L384 7K5 \"0N 180E\" > 0002_compass/180.html\n");
  system("rm a.out-1\n");
}

