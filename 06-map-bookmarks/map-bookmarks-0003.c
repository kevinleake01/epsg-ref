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
  printf("<h1>EPSG-REF Map Bookmarks 0003<br>using the Military Grid Reference System</h1>\n");
  printf("<h2>For %s<br>at MGRS: %s %s %s %s</h2>\n", argv[5], argv[1], argv[2], argv[3], argv[4]);
  printf("<p>\n");
  printf("<a href=\"https://geographiclib.sourceforge.io/cgi-bin/GeoConvert?input=%s%s%s%s\">GeographicLib Geoconvert</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://www.simplegrg.com/?grid=%s%s%s%s\">Simple GRG</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=10&scale=meters&basemap=Open_Street_Map\">Mappingsupport GISSurfer: OpenStreetMap Zoom x10</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=10&scale=meters&basemap=Open_Topo_Map\">Mappingsupport GISSurfer: OpenTopoMap Zoom x10</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=10&scale=meters&basemap=ESRI_aerial_clarity\">Mappingsupport GISSurfer: ESRI Aerial Clarity Zoom x10</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=10&scale=meters&basemap=ESRI_aerial_newer\">Mappingsupport GISSurfer: ESRI Aerial Newer Zoom x10</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=10&scale=meters&basemap=ESRI_navigation\">Mappingsupport GISSurfer: ESRI Navigation Zoom x10</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=Open_Street_Map\">Mappingsupport GISSurfer: OpenStreetMap Zoom x15</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=Open_Topo_Map\">Mappingsupport GISSurfer: OpenTopoMap Zoom x15</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_aerial_clarity\">Mappingsupport GISSurfer: ESRI Aerial Clarity Zoom x15</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_aerial_newer\">Mappingsupport GISSurfer: ESRI Aerial Newer Zoom x15</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s%s%s%s&zoom=15&scale=meters&basemap=ESRI_navigation\">Mappingsupport GISSurfer: ESRI Navigation Zoom x15</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("NOTE: You will have to copy and paste the MGRS location into the website<br>\n");
  printf("links listed below. Copy one of the MGRS addresses to the clipboard:<br>\n");
  printf("<input type=\"text\" value=\"%s %s %s %s\"> or ", argv[1], argv[2], argv[3], argv[4]); 
  printf("<input type=\"text\" value=\"%s%s%s%s\"><br>", argv[1], argv[2], argv[3], argv[4]); 
  printf("<br>\n");
  printf("<a href=\"https://caltopo.com/map.html\">CalTopo</a><br>\n");
  printf("<a href=\"https://mapscaping.com/mgrs-coordinate-converter/\">Mapscaping: MGRS Coordinate Converter</a><br>\n");
  printf("<a href=\"https://legallandconverter.com/p50.html\">Legal Land Converter: MGRS / USNG to Latitude and Longitude</a><br>\n");
  printf("<a href=\"https://dominoc925-pages.appspot.com/mapplets/cs_mgrs.html\">Dominoc925: MGRS</a><br>\n");
  printf("<a href=\"https://hawg-ops.com/\">Hawg View</a><br>\n");
  printf("<a href=\"https://www.earthpoint.us/convert.aspx\">Earth Point: Convert Coordinates</a><br>\n");
  printf("<a href=\"https://www.movable-type.co.uk/scripts/latlong-utm-mgrs.html\">Movable Type: MGRS to Lat/Long</a><br>\n");
  printf("<a href=\"https://easycalculator.org/military-grid-reference-system-converter\">Easy Calculator: MGRS Coordinate Converter</a><br>\n");
  printf("<a href=\"https://nicholas-fong.github.io/mgrs/mgrs.html\">Nicholas Fong: Convert MGRS to Latitude Longitude #1</a><br>\n");
  printf("<a href=\"https://nicholas-fong.github.io/mgrsX/mgrsX.html\">Nicholas Fong: Convert MGRS to Latitude Longitude #2</a><br>\n");
  printf("<a href=\"https://pjobson.github.io/bulk-coordinate-converter/\">Bulk Coordinate Conversion</a><br>\n");
  printf("<a href=\"https://www.cachesleuth.com/batchconvertcoordinates.html\">CacheSleuth: Batch Coordinate Converter</a><br>\n");
  printf("<a href=\"https://products.aspose.app/gis/coordinates\">Aspose: Geo Coordinates Parser and Converter</a><br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

