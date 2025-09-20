/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0005 ---
#
# This is a tool to quickly set your co-ordinates
# using OpenStreetMap Shortlink Codes.
# 
# Example Usage:
# 
# gcc map-bookmarks-0005.c; ./a.out euuvvjxB "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF Map Bookmarks 0005</title>\n");
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
  printf("<h1>EPSG-REF Map Bookmarks 0005<br>using OpenStreetMap Shortlink Codes</h1>\n");
  printf("<h2>For %s<br>at OpenStreetMap Shortlink Code: %s</h2>\n", argv[2], argv[1]);
  printf("<p>\n");
  printf("<a href=\"https://osm.org/go/%s\">OpenStreetMap: Standard</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=Y\">OpenStreetMap: CyclOSM</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=C\">OpenStreetMap: Cycle Map</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=T\">OpenStreetMap: Transport Map</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=P\">OpenStreetMap: Tracestrack Topo</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=H\">OpenStreetMap: Humanitarian</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=S\">OpenStreetMap: Shortbread</a><br>\n", argv[1]);
  printf("<a href=\"https://osm.org/go/%s?layers=V\">OpenStreetMap: Maptiler OMT</a><br>\n", argv[1]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

