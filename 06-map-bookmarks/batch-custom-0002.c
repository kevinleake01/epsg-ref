/*
####################################
#
# --- BATCH-CUSTOM-0002.C ---
#
# This uses Mapcodes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0002.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0002.c -o a.out-1\n");
  system("mkdir 0002_custom\n");
  system("./a.out-1 AAA HHHHC X0KG \"Custom\" > 0002_custom/0002.html\n");
  system("rm a.out-1\n");
}

