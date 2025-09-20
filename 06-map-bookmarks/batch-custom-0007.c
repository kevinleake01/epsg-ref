/*
####################################
#
# --- BATCH-CUSTOM-0007.C ---
#
# This uses Mapy.com Shortlink Codes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0007.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0007.c -o a.out-1\n");
  system("mkdir 0007_custom\n");
  system("./a.out-1 gabukuzazu \"Custom\" > 0007_custom/0007.html\n");
  system("rm a.out-1\n");
}

