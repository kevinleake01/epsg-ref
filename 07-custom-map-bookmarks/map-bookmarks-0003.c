/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0003 ---
#
# This is a tool to quickly set your co-ordinates
# using MGRS.
# 
# Example Usage:
# 
# gcc map-bookmarks-0003.c; ./a.out 30U YC 08216 07226 "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
#
####################################
*/

#include <stdio.h>

/* --- Function Prototypes go here --- */
int main(int argc, char *argv[]);

/* --- Global variables go here --- */

int main(int argc, char *argv[])
{
  printf("<!DOCTYPE html>\n");
  printf("<html lang=\"en\">\n");
  printf("<head>\n");
  printf("<meta charset=\"utf-8\" >\n");
  printf("<title>EPSG-REF Map Bookmarks 0003</title>\n");
  printf("<style>\n");
  printf("body {\n");
  printf("  background-color: #000000;\n");
  printf("  color: #FFFFFF;\n");
  printf("  font-family: monospace;\n");
  printf("}\n");
  printf("h1 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("h2 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("a:link {\n");
  printf("  color: #FF0000;\n");
  printf("}\n");
  printf("a:visited {\n");
  printf("  color: #00FF00;\n");
  printf("}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>EPSG-REF Map Bookmarks 0003</h1>\n");
  printf("<h2>For %s<br>at MGRS: %s %s %s %s</h2>\n", argv[5], argv[1], argv[2], argv[3], argv[4]);
  printf("<p>\n");
  printf("<a href=\"https://geographiclib.sourceforge.io/cgi-bin/GeoConvert?input=%s%s%s%s\">GeographicLib Geoconvert</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=Open_Street_Map\">Mappingsupport GISSurfer: OpenStreetMap</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=Open_Topo_Map\">Mappingsupport GISSurfer: OpenTopoMap</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_aerial_clarity\">Mappingsupport GISSurfer: ESRI Aerial Clarity</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_aerial_newer\">Mappingsupport GISSurfer: ESRI Aerial Newer</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_navigation\">Mappingsupport GISSurfer: ESRI Navigation</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

