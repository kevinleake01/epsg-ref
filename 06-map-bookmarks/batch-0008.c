/*
####################################
#
# --- BATCH-0008.C ---
#
# To run this program:
#
# gcc batch-0008.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0008.c -o a.out-1\n");
  system("mkdir 0008_compass\n");
  system("./a.out-1 CLhP5TLo \"0N 0E\" > 0008_compass/000.html\n");
  system("./a.out-1 CLhPJXk5 \"90N\" > 0008_compass/north.html\n");
  system("./a.out-1 CLhPNOoS \"90S\" > 0008_compass/south.html\n");
  system("./a.out-1 CLhPRO-r \"0N 90E\" > 0008_compass/east.html\n");
  system("./a.out-1 CLhPVNiv \"0N 90W\" > 0008_compass/west.html\n");
  system("./a.out-1 CLhPJM7L \"0N 180E\" > 0008_compass/180.html\n");
  system("rm a.out-1\n");
}

