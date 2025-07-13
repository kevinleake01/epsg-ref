/*
####################################
#
# A list of some distant remote locations. Have a guess - Where are they?
#
# To run this program:
#
# gcc 0004-20250721-182741-remote.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0004.c -o a.out-1\n");
  system("mkdir 0004_20250721_182741_remote\n");
  system("./a.out-1 5CPP29Q2 3CW \"Rose and Crown Airport Store\" > 0004_20250721_182741_remote/0001-rose-crown.html\n");
  system("./a.out-1 6C473J8M 69F \"Two Boats Pool\" > 0004_20250721_182741_remote/0002-two-boats-pool.html\n");
  system("./a.out-1 6G95J858 H7 \"Douches Village Hall\" > 0004_20250721_182741_remote/0003-douches-hall.html\n");
  system("./a.out-1 4H5HHV95 25 \"Alfred Faure\" > 0004_20250721_182741_remote/0004-alfred-faure.html\n");
  system("./a.out-1 7J2JR5MJ HM \"Sea Shells Beach Resort\" > 0004_20250721_182741_remote/0005-sea-shells-resort.html\n");
  system("./a.out-1 6RVH9Q74 2G \"Oan Resort\" > 0004_20250721_182741_remote/0006-oan-resort.html\n");
  system("./a.out-1 6VVH527Q MH \"Laura Beach\" > 0004_20250721_182741_remote/0007-laura-beach.html\n");
  system("./a.out-1 6VQ59289 VP9 \"Island Hopper Hotel\" > 0004_20250721_182741_remote/0008-island-hopper-hotel.html\n");
  system("./a.out-1 6VHM95H4 QW2 \"Runways End Pub\" > 0004_20250721_182741_remote/0009-runways-end.html\n");
  system("./a.out-1 7VF87MM2 VV2 \"Wake Island Memorial Chapel\" > 0004_20250721_182741_remote/0010-wake-memorial.html\n");
  system("./a.out-1 72W46J8F 2QX \"Midway House\" > 0004_20250721_182741_remote/0011-midway.html\n");
  system("./a.out-1 63H4XGMC WHQ \"Sunset Horizon Fishing Lodge\" > 0004_20250721_182741_remote/0012-sunset-horizon.html\n");
  system("rm a.out-1\n");
}

