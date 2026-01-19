/*
####################################
#
# --- BATCH-0006.C ---
#
# To run this program:
#
# gcc batch-0006.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0006.c -o a.out-1\n");
  system("mkdir 0006_compass\n");
  system("./a.out-1 5qC3Vx91rUUtSKLe7 \"0N 0E\" > 0006_compass/000.html\n");
  system("./a.out-1 7CESYTsTn8UFWQZd8 \"90N\" > 0006_compass/north.html\n");
  system("./a.out-1 nnTRakKNBmGSHAJ4A \"90S\" > 0006_compass/south.html\n");
  system("./a.out-1 z81cW97RtRrUhK5WA \"0N 90E\" > 0006_compass/east.html\n");
  system("./a.out-1 M2F7KW9ejiSUsReu8 \"0N 90W\" > 0006_compass/west.html\n");
  system("./a.out-1 d2K57jBR32m7JWpM9 \"0N 180E\" > 0006_compass/180.html\n");
  system("rm a.out-1\n");
}

