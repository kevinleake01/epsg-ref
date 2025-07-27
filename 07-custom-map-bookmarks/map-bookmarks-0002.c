/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0002 ---
#
# This is a tool to quickly set your co-ordinates
# using Mapcodes.
# 
# Example Usage:
# 
# gcc map-bookmarks-0002.c; ./a.out GBR L1 Q8Z "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
# gcc map-bookmarks-0002.c; ./a.out GBR 762.0HW-BTL2 "Ordinance Survey Great Britain, Southampton" > ordinance-survey-gb.html
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
  printf("<title>EPSG-REF Map Bookmarks 0002</title>\n");
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
  printf("<h1>EPSG-REF Map Bookmarks 0002</h1>\n");
  printf("<h2>For %s<br>at Mapcode: %s %s.%s</h2>\n", argv[4], argv[1], argv[2], argv[3]);
  printf("<p>\n");
  printf("<a href=\"https://api.mapcode.com/mapcode/xml/coords/%s%%20%s.%s\">Mapcode REST-API XML</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://api.mapcode.com/mapcode/json/coords/%s%%20%s.%s\">Mapcode REST-API JSON</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<a href=\"https://www.mymapcodes.com/go/?t=%s&ma=%s&mb=%s\">MyMapcodes</a><br>\n", argv[1], argv[2], argv[3]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("NOTE: You will have to copy and paste the Mapcode location into the website<br>\n");
  printf("links listed here. Copy this to the clipboard:<br>\n");
  printf("<input type=\"text\" value=\"%s %s.%s\"><br>", argv[1], argv[2], argv[3]); 
  printf("<br>\n");
  printf("<a href=\"https://s3.eu-central-1.amazonaws.com/download.mapcode.com/getcoordst.html\">Mapcode Map: Google</a><br>\n");
  printf("<a href=\"https://s3.eu-central-1.amazonaws.com/download.mapcode.com/getcoords.html\">Mapcode Map: TomTom</a><br>\n");
  printf("<a href=\"https://plan.tomtom.com/\">General TomTom Map</a><br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

