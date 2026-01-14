/*
####################################
#
# Various places to live. Many of the Map-Bookmarks are near the Airport.
#
# To run this program:
#
# gcc 0003-20260114-125419-live.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0003.c -o a.out-1\n");
  system("mkdir 0003_20260114_125419_live\n");
  system("./a.out-1 50L KR 97881 32933 \"Bali\" > 0003_20260114_125419_live/0001-bali.html\n");
  system("./a.out-1 47P PL 16824 55700 \"Ko Samui\" > 0003_20260114_125419_live/0002-ko-samui.html\n");
  system("./a.out-1 48P US 90246 23558 \"Phu Quoc\" > 0003_20260114_125419_live/0003-phu-quoc.html\n");
  system("./a.out-1 47N PF 40232 85179 \"Penang\" > 0003_20260114_125419_live/0004-penang.html\n");
  system("./a.out-1 29S NA 91844 97698 \"Algarve\" > 0003_20260114_125419_live/0005-algarve.html\n");
  system("./a.out-1 16Q EJ 26334 50416 \"Isla De Mujeres\" > 0003_20260114_125419_live/0006-mujeres.html\n");
  system("./a.out-1 13Q DC 74052 86569 \"Puerto Vallarta\" > 0003_20260114_125419_live/0007-puerto-vallarta.html\n");
  system("./a.out-1 16Q CE 97868 81601 \"Ambergris Caye\" > 0003_20260114_125419_live/0008-ambergris.html\n");
  system("./a.out-1 16Q ED 50524 04182 \"Roatan\" > 0003_20260114_125419_live/0009-roatan.html\n");
  system("./a.out-1 16P GS 87276 04246 \"Atenas\" > 0003_20260114_125419_live/0010-atenas.html\n");
  system("./a.out-1 17P PK 19507 44465 \"Coronado\" > 0003_20260114_125419_live/0011-coronado.html\n");
  system("./a.out-1 17P LL 63324 32728 \"Bocas Del Toro\" > 0003_20260114_125419_live/0012-bocas-toro.html\n");
  system("./a.out-1 17P PL 77236 02662 \"Panama City\" > 0003_20260114_125419_live/0013-panama-city.html\n");
  system("./a.out-1 19P CP 90511 82508 \"Aruba\" > 0003_20260114_125419_live/0014-aruba.html\n");
  system("./a.out-1 19Q EA 66719 52485 \"Punta Cana\" > 0003_20260114_125419_live/0015-punta-cana.html\n");
  system("rm a.out-1\n");
}

