/*
####################################
#
# --- BATCH-CUSTOM-0001.C ---
#
# This uses Lat-Long Coordinates. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0001.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0001.c -o a.out-1\n");
  system("mkdir 0001_custom\n");
  system("./a.out-1 0.000001 0.000001 \"Custom\" > 0001_custom/0001.html\n");
  system("rm a.out-1\n");
}

