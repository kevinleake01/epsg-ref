/*
####################################
#
# --- BATCH-CUSTOM-0008.C ---
#
# This uses Yandex Maps Shortlink Codes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0008.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0008.c -o a.out-1\n");
  system("mkdir 0008_custom\n");
  system("./a.out-1 CLeouU-E \"Custom\" > 0008_custom/0008.html\n");
  system("rm a.out-1\n");
}

