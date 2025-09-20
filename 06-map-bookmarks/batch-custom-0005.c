/*
####################################
#
# --- BATCH-CUSTOM-0005.C ---
#
# This uses OpenStreetMap Shortlink Codes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0005.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0005.c -o a.out-1\n");
  system("mkdir 0005_custom\n");
  system("./a.out-1 aqqqqr \"Custom\" > 0005_custom/0005.html\n");
  system("rm a.out-1\n");
}

