# EPSG-REF

EPSG-REF is a co-ordinate reference system using EPSG numbers. It is excellent for Land Surveying,<br>
Map Orientation, Navigation, and finding location points similar to Geohash, Mapcode, MGRS,<br>
Plus Codes, and H3.<br>
<br>
Here is an example of using EPSG-REFs. This is at the Royal Observatory in Greenwich, South-East London:<br>
<br>
EPSG:4326: 51.47786 -0.00147<br>
EPSG:27700: 538885 177327<br>
EPSG:32630: 708216 5707231<br>
<br>
The first (EPSG:4326) is WGS84 Lat-Long, the second (EPSG:27700) is OSGB36 Great Britain,<br>
and the third (EPSG:32630) is WGS84 UTM Zone 30N.<br>
<br>
The Geoid, Datum, and Projection systems used in maps and cartography are solved by the EPSG numbers,<br>
and you do not have to worry about them.<br>
<br>
-----------------------------<br>
Here is a list of some EPSG Numbers:<br>
<br>
EPSG:4326 --- WGS84<br>
EPSG:3857 --- Web Mercator<br>
EPSG:32601 to EPSG:32660 --- WGS84 UTM Zones 1N to 60N<br>
EPSG:32701 to EPSG:32760 --- WGS84 UTM Zones 1S to 60S<br>
EPSG:5041 --- WGS84 UPS North<br>
EPSG:5042 --- WGS84 UPS South<br>
<br>
EPSG:26901 to EPSG:26923 --- NAD83 UTM Zones 1N to 23N (USA and Canada)<br>
EPSG:25828 to EPSG:25837 --- ETRS89 UTM Zones 28N to 37N (Europe)<br>
EPSG:27700 --- OSGB36 (Great Britain)<br>
EPSG:2157 --- IRENET95 / ITM (Ireland)<br>
EPSG:2056 --- CH1903+ / LV95 (Switzerland)<br>
EPSG:31965 to EPSG:31976 --- SIRGAS 2000 UTM Zones 11N to 22N (Central and South America)<br>
EPSG:31977 to EPSG:31985 --- SIRGAS 2000 UTM Zones 17S to 25S (South America)<br>
EPSG:2046 to EPSG:2055 --- Hartebeesthoek94 Lo15 to Lo33 (South Africa)<br>
EPSG:2641 to EPSG:2698 --- Pulkovo 1995 / 3-degree Gauss-Kruger Zones 7 to 64 (Russia)<br>
EPSG:6669 to EPSG:6687 --- JGD2011 / Japan Plane Rectangular CS I to XIX (Japan)<br>
EPSG:3414 --- SVY21 / Singapore TM (Singapore)<br>
EPSG:7846 to EPSG:7859 --- GDA2020 MGA Zones 46 to 59 (Australia)<br>
EPSG:2133 to EPSG:2135 --- NZGD2000 UTM Zones 58S to 60S (New Zealand)<br>
<br>
NOTE: There are many more EPSG numbers, and there are far too many to list here.<br>
<br>
-----------------------------<br>
If you are using Proj, there is a tool named cs2cs that will convert EPSG numbers. We are going back to the<br>
Royal Observatory in Greenwich to convert EPSG:4326 (WGS84 Lat,Long) to EPSG:27700 (OSGB36) by doing this:<br>
<br>
$ echo "51.47786 -0.00147" | cs2cs EPSG:4326 EPSG:27700<br>
<br>
And to convert back to EPSG:4326 (WGS84 Lat,Long):<br>
<br>
$ echo "538885 177327" | cs2cs EPSG:27700 EPSG:4326 -d 5<br>
<br>
-----------------------------<br>
Website links:<br>
<br>
https://epsg.org<br>
https://epsg.io<br>
https://crs-explorer.proj.org/<br>
https://www.spatialreference.org/ref<br>
<br>
-----------------------------<br>
-----------------------------<br>
Here are some more EPSG-REF examples for you to explore:<br>
<br>
Festplassen, Bergen, Norway:<br>
<br>
EPSG:4326: 60.39102 5.32608<br>
EPSG:25831: 628193 6697220<br>
EPSG:25832: 297573 6700603<br>
EPSG:3044: 6700603 297573<br>
-----------------------------<br>
Zurich Hauptbahnhof, Switzerland:<br>
<br>
EPSG:4326: 47.37819 8.53934<br>
EPSG:2056: 2683124 1248067<br>
EPSG:32632: 465226 5247295<br>
-----------------------------<br>
Ala Moana Beach, Honolulu, Hawaii:<br>
<br>
EPSG:26963: 515715 13599<br>
-----------------------------<br>
Washington Monument, DC, USA:<br>
<br>
EPSG:32618: 323482 4306480<br>
EPSG:32146: 3627072 2136745<br>
EPSG:26985: 396941 135737<br>
-----------------------------<br>
Singapore Changi Airport:<br>
<br>
EPSG:3414: 37732 45259<br>
-----------------------------<br>
Arvika, Sweden:<br>
<br>
EPSG:3006: 6615379 364287<br>
-----------------------------<br>
Santa Maria, Sal, Cape Verde:<br>
<br>
EPSG:4826: 278145 213400<br>
-----------------------------<br>
Greenmarket Square, Cape Town, South Africa:<br>
<br>
EPSG:2048: 53626 3755240<br>
EPSG:9221: 843879 796553<br>
-----------------------------<br>
Manly Beach, Sydney, NSW, Australia:<br>
<br>
EPSG:7856: 341527 6259020<br>
EPSG:8058: 9696625 4431231<br>
-----------------------------<br>
Aquamarine Resort, Akshi, Kazakhstan:<br>
<br>
EPSG:4326: 45.95462 81.56835<br>
EPSG:2504: 5091246 544098<br>
-----------------------------<br>
Pevek, Chukotka:<br>
<br>
EPSG:2519: 7736064 471673<br>
EPSG:5940: 4067689 1047757<br>
-----------------------------<br>
Amundsen-Scott South Pole Station:<br>
<br>
ESPG:5042: 2000000 2000000<br>
ESPG:3031: 0 0<br>
-----------------------------<br>
<br>
<br>

