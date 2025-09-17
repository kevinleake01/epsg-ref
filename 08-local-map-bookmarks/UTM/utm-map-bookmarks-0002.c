/*
####################################
#
# --- UTM-MAP-BOOKMARKS-0002.C ---
#
# This is a tool to quickly set your co-ordinates using the
# Universal Transverse Mercator, using North or South.
# 
# Example Usage:
# 
# gcc utm-map-bookmarks-0002.c; ./a.out 30 n 708216 5707226 "Royal Observatory Greenwich, London" > royal-observatory-greenwich.html
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
  printf("<title>EPSG-REF UTM Map Bookmarks 0002</title>\n");
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
  printf("<h1>EPSG-REF UTM Map Bookmarks 0002<br>using North or South</h1>\n");
  printf("<h2>For %s<br>at UTM: %s %s %s %s</h2>\n", argv[5], argv[1], argv[2], argv[3], argv[4]);
  printf("<p>\n");
  printf("<a href=\"https://geographiclib.sourceforge.io/cgi-bin/GeoConvert?input=%s%s %s %s\">GeographicLib Geoconvert</a><br>\n", argv[1], argv[2], argv[3], argv[4]);
  printf("<br>\n");
  printf("--------------------------------------<br>\n");
  printf("NOTE: You will have to copy and paste the UTM location into the website<br>\n");
  printf("links listed below:<br>\n");
  printf("UTM Location: <input type=\"text\" value=\"%s %s %s %s\"><br>\n", argv[1], argv[2], argv[3], argv[4]); 
  printf("UTM Zone: <input type=\"text\" value=\"%s\"><br>\n", argv[1]);
  printf("North or South: <input type=\"text\" value=\"%s\"><br>\n", argv[2]);
  printf("Easting: <input type=\"text\" value=\"%s\"><br>\n", argv[3]);
  printf("Northing: <input type=\"text\" value=\"%s\"><br>\n", argv[4]);
  printf("<br>\n");
  printf("<a href=\"https://caltopo.com/map.html\">CalTopo</a><br>\n");
  printf("<a href=\"https://www.geoplaner.com/\">Geoplaner</a><br>\n");
  printf("<a href=\"https://mapscaping.com/utm-coordinates-converter/\">Mapscaping: UTM Coordinate Converter</a><br>\n");
  printf("<a href=\"https://legallandconverter.com/p44.html\">Legal Land Converter: UTM to Latitude and Longitude</a><br>\n");
  printf("<a href=\"https://awsm-tools.com/utm-to-lat-long\">AWSM Tools: UTM to latitude longitude</a><br>\n");
  printf("<a href=\"https://dominoc925-pages.appspot.com/mapplets/cs_utm.html\">Dominoc925: UTM</a><br>\n");
  printf("<a href=\"https://hawg-ops.com/\">Hawg View</a><br>\n");
  printf("<a href=\"https://www.earthpoint.us/convert.aspx\">Earth Point: Convert Coordinates</a><br>\n");
  printf("<a href=\"https://www.movable-type.co.uk/scripts/latlong-utm-mgrs.html\">Movable Type: UTM to Lat/Long</a><br>\n");
  printf("<a href=\"https://www.ngs.noaa.gov/NCAT/\">NGS Coordinate Conversion and Transformation Tool</a><br>\n");
  printf("<a href=\"https://www.dcode.fr/utm-coordinates\">Dcode.fr: UTM Coordinates</a><br>\n");
  printf("<a href=\"https://pjobson.github.io/bulk-coordinate-converter/\">Bulk Coordinate Conversion</a><br>\n");
  printf("<a href=\"https://www.cachesleuth.com/batchconvertcoordinates.html\">CacheSleuth: Batch Coordinate Converter</a><br>\n");
  printf("<a href=\"https://products.aspose.app/gis/coordinates\">Aspose: Geo Coordinates Parser and Converter</a><br>\n");
  printf("<a href=\"https://www.engineeringtoolbox.com/utm-latitude-longitude-d_1370.html\">The Engineering Toolbox</a><br>\n");
  printf("<a href=\"https://glandnav.com/tools/utm-to-latlng-converter\">GLandsoft: UTM to Lat/Long</a><br>\n");
  printf("<a href=\"https://coordinates-converter.com/en\">Coordinates Converter</a><br>\n");
  printf("<a href=\"https://www.distancelatlong.com/latlong/convert-utm-to-latlong/\">DistanceLatLong: UTM to Lat/long</a><br>\n");
  printf("<a href=\"https://rcn.montana.edu/Resources/Converter.aspx\">Montana State University: Convert Geographic Units</a><br>\n");
  printf("<a href=\"https://utm-converter.dharmzeey.com/utm-latlon/\">UTM-converter.dharmzeey.com</a><br>\n");
  printf("<a href=\"https://timmit.ca/tools/utm/index.shtml\">Timmit: UTM lat,long bulk converters</a><br>\n");
  printf("<a href=\"https://cosmomath.com/conversion/coordinates-converter/\">CosmoMath: Advanced Coordinates Converter</a><br>\n");
  printf("<a href=\"https://coordvert.com/en/coordinates-converter/utm/decimal\">Coordvert.com: Convert UTM coordinates to Decimal degrees coordinates</a><br>\n");
  printf("<a href=\"https://tool-online.com/en/coordinate-converter.php\">ToolOnline: Online coordinate converter</a><br>\n");
  printf("<a href=\"https://www.eddmaps.org/tools/latlongconv.cfm\">EDD Maps: Latitude/Longitude Converter</a><br>\n");
  printf("<a href=\"https://www.lddgo.net/en/coordinate/projection\">Coordinate Projection Calculator Online</a><br>\n");
  printf("<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

