#!/usr/bin/perl
#
# --- GeoCodeXYZ.pl ---
#
# https://metacpan.org/pod/Geo::Code::XYZ
#
# This program encodes a location using Lat, Long, and Elevation into 3geonames.org addresses, and decodes back
# to Lat, Long, and Elevation.
#
# To install the program from cpanminus:
#
# $ sudo cpanm Geo::Code::XYZ
#
# For more info about 3Geonames, go to https://3geonames.org/ and https://geocode.xyz/
#
#
use strict;
use Geo::Code::XYZ;
my $g = Geo::Code::XYZ->new();

# -------------------------------------------
# --- Encoding to 3Geonames and Geocodes: ---
# -------------------------------------------
# Please set your Lat, Long, and Elevation here:
my ($x,$y,$z) = (51.47786,-0.00147,0);

my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>0);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>1);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>2);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>3);
print $geocode . "\n";

# -------------------------------------------------
# --- Decoding back to Lat, Long, and Elevation ---
# -------------------------------------------------
# Please set your 3geonames/geocode here:
my $xyz = $g->geocode(gc=>"LONDON-SYLACAUGA-GERMOND");

my ($lat,$lon,$el) = @$xyz;
print "\n\n$lat,$lon,$el\n\n";
 
