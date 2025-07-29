/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0004 ---
#
# This is a tool to quickly set your co-ordinates
# using Open Location Plus codes.
# 
# Example Usage:
# 
# gcc map-bookmarks-0004.c; ./a.out 9C3XFXHX 4C "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF Map Bookmarks 0004</title>\n");
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
  printf("<h1>EPSG-REF Map Bookmarks 0004</h1>\n");
  printf("<h2>For %s<br>at Open Location Plus Code: %s+%s</h2>\n", argv[3], argv[1], argv[2]);
  printf("<p>\n");
  printf("<a href=\"https://plus.codes/%s%%2B%s\">Plus Codes Map</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://plus.codes/api?address=%s%%2B%s\">Plus Codes API</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.google.com/maps/place/%s%%2B%s\">Google Maps</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://mapy.com/en/zakladni?q=%s%%2B%s&z=15\">Mapy.com: Basic</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://mapy.com/en/turisticka?q=%s%%2B%s&z=15\">Mapy.com: Outdoor</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://mapy.com/en/letecka?q=%s%%2B%s&z=15\">Mapy.com: Aerial</a><br>\n", argv[1], argv[2]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("NOTE: You will have to copy and paste the Open Location Plus Code into the website<br>\n");
  printf("links listed here. Copy this to the clipboard:<br>\n");
  printf("<input type=\"text\" value=\"%s+%s\"><br>", argv[1], argv[2]); 
  printf("<br>\n");
  printf("<a href=\"https://www.dcode.fr/open-location-code\">Dcode.fr: Open Location Code</a><br>\n");
  printf("<a href=\"https://coordinates-converter.com/en\">Coordinates Converter</a><br>\n");
  printf("<a href=\"https://www.fdsd.co.uk/convert-coord/\">Geographical Coordinate Converter</a><br>\n");
  printf("<a href=\"https://www.earthpoint.us/Convert.aspx\">Earth Point: Convert Coordinates</a><br>\n");
  printf("<a href=\"https://cvzi.github.io/open-location-code-demo/\">Demo for Open Location Codes</a><br>\n");
  printf("<a href=\"https://nicholas-fong.github.io/OpenLocationCode/openlocationcode.html\">Nicholas Fong: OpenLocationCode to GPS</a><br>\n");
  printf("<a href=\"https://9revolution9.com/tools/geo/geocode/\">Revolution9: Geocode Map Viewer</a><br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

