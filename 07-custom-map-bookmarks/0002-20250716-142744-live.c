/*
####################################
#
# Various places to live. Many of the Map-Bookmarks are near the Airport.
#
# To run this program:
#
# gcc 0002-20250716-142744-live.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks-0002.c -o a.out-1\n");
  system("mkdir 0002_20250716_142744_live\n");
  system("./a.out-1 IDN 9CWS 78 \"Bali\" > 0002_20250716_142744_live/0001-bali.html\n");
  system("./a.out-1 THA 71P9 18P \"Ko Samui\" > 0002_20250716_142744_live/0002-ko-samui.html\n");
  system("./a.out-1 VNM K41V V9S \"Phu Quoc\" > 0002_20250716_142744_live/0003-phu-quoc.html\n");
  system("./a.out-1 MYS L55 8F \"Penang\" > 0002_20250716_142744_live/0004-penang.html\n");
  system("./a.out-1 PRT BHZ D5 \"Algarve\" > 0002_20250716_142744_live/0005-algarve.html\n");
  system("./a.out-1 MX-ROO X2 6TN \"Isla De Mujeres\" > 0002_20250716_142744_live/0006-mujeres.html\n");
  system("./a.out-1 MX-JAL 14M 5H \"Puerto Vallarta\" > 0002_20250716_142744_live/0007-puerto-vallarta.html\n");
  system("./a.out-1 BLZ QYR JQ \"Ambergris Caye\" > 0002_20250716_142744_live/0008-ambergris.html\n");
  system("./a.out-1 HND TSD WH \"Roatan\" > 0002_20250716_142744_live/0009-roatan.html\n");
  system("./a.out-1 CRI 15 HX5 \"Atenas\" > 0002_20250716_142744_live/0010-atenas.html\n");
  system("./a.out-1 PAN XH0 WL \"Coronado\" > 0002_20250716_142744_live/0011-coronado.html\n");
  system("./a.out-1 PAN 4QK LPK \"Bocas Del Toro\" > 0002_20250716_142744_live/0012-bocas-toro.html\n");
  system("./a.out-1 PAN PJ 3N5 \"Panama City\" > 0002_20250716_142744_live/0013-panama-city.html\n");
  system("./a.out-1 ABW MQ GW \"Aruba\" > 0002_20250716_142744_live/0014-aruba.html\n");
  system("./a.out-1 DOM ZRR 369 \"Punta Cana\" > 0002_20250716_142744_live/0015-punta-cana.html\n");
  system("rm a.out-1\n");
}

