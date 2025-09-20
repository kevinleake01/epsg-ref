/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0009 ---
#
# This is a tool to quickly set your co-ordinates
# using EPSG.IO.
# 
# Example Usage:
# 
# gcc map-bookmarks-0009.c; ./a.out 27700 538885 177322 "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF Map Bookmarks 0009</title>\n");
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
  printf("<h1>EPSG-REF Map Bookmarks 0009<br>using Epsg.io</h1>\n");
  printf("<h2>For %s<br>at EPSG:%s: %s %s</h2>\n", argv[4], argv[1], argv[2], argv[3]);
  printf("<p>\n");
  printf("Use this section for Eastings-Northings order:<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://epsg.io/transform#s_srs=%s&x=%s&y=%s\">Epsg.io Transform</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=streets\">Epsg.io Map: Streets - Zoom x10</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=satellite\">Epsg.io Map: Satellite - Zoom x10</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=osm\">Epsg.io Map: Maptiler OSM - Zoom x10</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=streets\">Epsg.io Map: Streets - Zoom x15</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=satellite\">Epsg.io Map: Satellite - Zoom x15</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=osm\">Epsg.io Map: Maptiler OSM - Zoom x15</a><br>\n", argv[1], argv[2], argv[3]);
  printf("--------------------------------------<br>\n");
  printf("Use this section for Northings-Eastings order:<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://epsg.io/transform#s_srs=%s&x=%s&y=%s\">Epsg.io Transform</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=streets\">Epsg.io Map: Streets - Zoom x10</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=satellite\">Epsg.io Map: Satellite - Zoom x10</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=10&layer=osm\">Epsg.io Map: Maptiler OSM - Zoom x10</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=streets\">Epsg.io Map: Streets - Zoom x15</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=satellite\">Epsg.io Map: Satellite - Zoom x15</a><br>\n", argv[1], argv[3], argv[2]);
  printf("<a href=\"https://epsg.io/map#srs=%s&x=%s&y=%s&z=15&layer=osm\">Epsg.io Map: Maptiler OSM - Zoom x15</a><br>\n", argv[1], argv[3], argv[2]);
   printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

