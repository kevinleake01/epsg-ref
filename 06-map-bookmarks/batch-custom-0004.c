/*
####################################
#
# --- BATCH-CUSTOM-0004.C ---
#
# This Open Location Plus Codes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0004.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0004.c -o a.out-1\n");
  system("mkdir 00_0004_custom\n");
  system("./a.out-1 6FG22222 22 \"Custom\" > 00_0004_custom/0004.html\n");
  system("rm a.out-1\n");
}

