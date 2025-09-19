/*
####################################
#
# --- EPSG-REF MAP-BOOKMARKS-0007 ---
#
# This is a tool to quickly set your co-ordinates
# using Mapy.com.
# 
# Example Usage:
# 
# gcc map-bookmarks-0007.c; ./a.out rerupaguga "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF Map Bookmarks 0007</title>\n");
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
  printf("<h1>EPSG-REF Map Bookmarks 0007</h1>\n");
  printf("<h2>For %s<br>at Mapy.com Shortlink Code: %s</h2>\n", argv[2], argv[1]);
  printf("<p>\n");
  printf("NOTE: Mapy.com Shortlink Codes encodes location, zoom, layers, and points of interest.<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://mapy.com/s/%s\">Mapy.com</a><br>\n", argv[1]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

