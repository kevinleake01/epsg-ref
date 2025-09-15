/*
####################################
#
# Map-Bookmarks of a few water parks. Happy Splashing! :-)
#
# To run this program:
#
# gcc 20250920-153740-waterparks.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc epsg4326-map-bookmarks.c -o a.out-1\n");
  system("mkdir 00_20250920_153740_waterparks\n");
  system("./a.out-1 51.987789 20.460298 \"Suntago\" > 00_20250920_153740_waterparks/0001-suntago.html\n");
  system("./a.out-1 52.039019 13.748589 \"Tropical Islands\" > 00_20250920_153740_waterparks/0002-tropical-islands.html\n");
  system("./a.out-1 28.071765 -16.726606 \"Siam Park\" > 00_20250920_153740_waterparks/0003-siam-park.html\n");
  system("./a.out-1 -0.093110 109.371103 \"Paradis\" > 00_20250920_153740_waterparks/0004-paradis.html\n");
  system("./a.out-1 -2.468166 111.419299 \"Balimbuuur\" > 00_20250920_153740_waterparks/0005-balimbuuur.html\n");
  system("./a.out-1 -2.506949 112.934475 \"Sampit\" > 00_20250920_153740_waterparks/0006-sampit.html\n");
  system("./a.out-1 -2.173367 113.870328 \"Kalawa\" > 00_20250920_153740_waterparks/0007-kalawa.html\n");
  system("./a.out-1 -8.728575 115.169113 \"Waterbom\" > 00_20250920_153740_waterparks/0008-waterbom.html\n");
  system("./a.out-1 -4.362571 15.352578 \"Aqua Splash DRC\" > 00_20250920_153740_waterparks/0009-aquasplash-drc.html\n");
  system("./a.out-1 -2.972888 -60.086919 \"Hope Bay\" > 00_20250920_153740_waterparks/0010-hope-bay.html\n");
  system("./a.out-1 8.501273 -80.340787 \"Splash Kingdom Parque Acuatico\" > 00_20250920_153740_waterparks/0011-splash-kingdom.html\n");
  system("./a.out-1 -17.772088 -48.751809 \"Hot Park\" > 00_20250920_153740_waterparks/0012-hot-park.html\n");
  system("./a.out-1 -3.843843 -38.390452 \"Beach Park\" > 00_20250920_153740_waterparks/0013-beach-park.html\n");
  system("./a.out-1 25.132424 55.118310 \"Atlantis Aquaventure World\" > 00_20250920_153740_waterparks/0014-atlantis-aquaventure.html\n");
  system("./a.out-1 24.486631 54.599609 \"Yas Waterworld\" > 00_20250920_153740_waterparks/0015-yas-waterworld.html\n");
  system("./a.out-1 43.236060 76.776843 \"Aquapark Hawaii\" > 00_20250920_153740_waterparks/0016-aquapark-hawaii.html\n");
  system("./a.out-1 42.827009 74.599816 \"Aquapark Ala-Too\" > 00_20250920_153740_waterparks/0017-aquapark-alatoo.html\n");
  system("./a.out-1 41.272906 69.300666 \"Limpopo Waterpark\" > 00_20250920_153740_waterparks/0018-limpopo.html\n");
  system("./a.out-1 39.658954 66.907896 \"Aquapark Sogdiana\" > 00_20250920_153740_waterparks/0019-sogdiana.html\n");
  system("./a.out-1 8.781762 39.002926 \"Kuriftu Water Park\" > 00_20250920_153740_waterparks/0020-kuriftu.html\n");
  system("./a.out-1 -2.463644 112.448469 \"Davit KM77 Selunuk Swimming Pool\" > 00_20250920_153740_waterparks/0021-selanuk.html\n");
  system("rm a.out-1\n");
}

