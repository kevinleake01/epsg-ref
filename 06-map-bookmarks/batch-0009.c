/*
####################################
#
# --- BATCH-0009.C ---
#
# To run this program:
#
# gcc batch-0009.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0009.c -o a.out-1\n");
  system("mkdir 0009_compass\n");
  system("./a.out-1 32631 166033 10 \"0N 0E\" > 0009_compass/000.html\n");
  system("./a.out-1 5041 2000000 2000000 \"90N\" > 0009_compass/north.html\n");
  system("./a.out-1 5042 2000000 2000000 \"90S\" > 0009_compass/south.html\n");
  system("./a.out-1 32646 166033 10 \"0N 90E\" > 0009_compass/east.html\n");
  system("./a.out-1 32616 166033 10 \"0N 90W\" > 0009_compass/west.html\n");
  system("./a.out-1 32601 166033 10 \"0N 180E\" > 0009_compass/180.html\n");
  system("rm a.out-1\n");
}

