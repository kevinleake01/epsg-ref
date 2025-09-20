/*
####################################
#
# --- BATCH-CUSTOM-0006.C ---
#
# This uses Google Maps Shortlink Codes. Please edit this file to suit your needs.
#
# To run this program:
#
# gcc batch-custom-0006.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0006.c -o a.out-1\n");
  system("mkdir 0006_custom\n");
  system("./a.out-1 epsw9gJK6qWCZ3RX9 \"Custom\" > 0006_custom/0006.html\n");
  system("rm a.out-1\n");
}

