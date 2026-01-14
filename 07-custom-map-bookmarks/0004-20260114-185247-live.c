/*
####################################
#
# Various places to live. Many of the Map-Bookmarks are near the Airport.
#
# To run this program:
#
# gcc 0004-20260114-185247-live.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0004.c -o a.out-1\n");
  system("mkdir 0004_20260114_185247_live\n");
  system("./a.out-1 6P3Q7547 838 \"Bali\" > 0004_20260114_185247_live/0001-bali.html\n");
  system("./a.out-1 6PX2G3X7 FQW \"Ko Samui\" > 0004_20260114_185247_live/0002-ko-samui.html\n");
  system("./a.out-1 7P255X7X 26Q \"Phu Quoc\" > 0004_20260114_185247_live/0003-phu-quoc.html\n");
  system("./a.out-1 6PQ277V8 45X \"Penang\" > 0004_20260114_185247_live/0004-penang.html\n");
  system("./a.out-1 8C9J22CM 92R \"Algarve\" > 0004_20260114_185247_live/0005-algarve.html\n");
  system("./a.out-1 76HM7743 3GW \"Isla De Mujeres\" > 0004_20260114_185247_live/0006-mujeres.html\n");
  system("./a.out-1 75GPMQH2 88Q \"Puerto Vallarta\" > 0004_20260114_185247_live/0007-puerto-vallarta.html\n");
  system("./a.out-1 769JW2CP 274 \"Ambergris Caye\" > 0004_20260114_185247_live/0008-ambergris.html\n");
  system("./a.out-1 768M8F9F 65X \"Roatan\" > 0004_20260114_185247_live/0009-roatan.html\n");
  system("./a.out-1 66XQXJHC M34 \"Atenas\" > 0004_20260114_185247_live/0010-atenas.html\n");
  system("./a.out-1 67W2G3VP 39J \"Coronado\" > 0004_20260114_185247_live/0011-coronado.html\n");
  system("./a.out-1 66XV8QR4 557 \"Bocas Del Toro\" > 0004_20260114_185247_live/0012-bocas-toro.html\n");
  system("./a.out-1 67X23J87 R2P \"Panama City\" > 0004_20260114_185247_live/0013-panama-city.html\n");
  system("./a.out-1 774FGX3R JWX \"Aruba\" > 0004_20260114_185247_live/0014-aruba.html\n");
  system("./a.out-1 77CHHJ6J RW6 \"Punta Cana\" > 0004_20260114_185247_live/0015-punta-cana.html\n");
  system("rm a.out-1\n");
}

