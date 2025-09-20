/*
####################################
#
# --- BATCH-CUSTOM-0009.C ---
#
# This uses Epsg.io. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0009.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0009.c -o a.out-1\n");
  system("mkdir 0009_custom\n");
  system("./a.out-1 32631 166033 12 \"Custom\" > 0009_custom/0009.html\n");
  system("rm a.out-1\n");
}

