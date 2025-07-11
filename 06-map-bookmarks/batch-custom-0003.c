/*
####################################
#
# --- BATCH-CUSTOM-0003.C ---
#
# This uses MGRS. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0003.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0003.c -o a.out-1\n");
  system("mkdir 00_0003_custom\n");
  system("./a.out-1 31N AA 66021 00000 \"Custom\" > 00_0003_custom/0003.html\n");
  system("rm a.out-1\n");
}

