/*
####################################
#
# --- EPSG:27700 MAP-BOOKMARKS ---
#
# This is a tool to quickly set your co-ordinates using EPSG:27700.
# 
# Example Usage:
# 
# gcc epsg27700-map-bookmarks.c; ./a.out 538885 177327 "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF Local Map Bookmarks</title>\n");
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
  printf("<h1>EPSG:27700 Map Bookmarks<br>Valid for: Great Britain (England, Wales, Scotland)</h1>\n");
  printf("<h2>For %s<br>at EPSG:27700: %s %s</h2>\n", argv[3], argv[1], argv[2]);
  printf("<p>\n");
  printf("<a href=\"http://streetmap.co.uk/grid/%s_%s_120\">Streetmap.co.uk</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://gridreferencefinder.com/os.php?x=%s&y=%s\">UK Grid Reference Finder</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://epsg.io/transform#s_srs=27700&x=%s&y=%s\">Epsg.io Transform</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=27700&x=%s&y=%s&z=10&layer=streets\">Epsg.io Map: Streets - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=27700&x=%s&y=%s&z=10&layer=satellite\">Epsg.io Map: Satellite - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=27700&x=%s&y=%s&z=10&layer=osm\">Epsg.io Map: Maptiler OSM - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

