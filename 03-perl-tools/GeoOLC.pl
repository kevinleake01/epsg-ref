#!/usr/bin/perl
#
# --- GeoOLC.pl ---
#
# https://metacpan.org/pod/Geo::OLC
#
# This program encodes a location using Lat, Long into Plus Codes, and back.
#
# To install the program from cpanminus:
#
# $ sudo cpanm Geo::OLC
#
# For more info about Plus Codes, go to https://maps.google.com/pluscodes/
#
#
use strict;
use Geo::OLC qw(encode decode);
use Geo::OLC qw(:all);

# -------------------------------
# --- Encoding to Plus Codes: ---
# -------------------------------
# Please set your Lat, Long, and precision here:
my $code = encode(51.47786, -0.00147, 11);
#
print "$code \n\n";
# ----------------------------------
# --- Decoding back to Lat, Long ---
# ----------------------------------
# Please set your Plus Code here:
my $ref = decode("9C3XFXHX+4CR");

print "@{$ref->{lower}} (Lower)\n";
print "@{$ref->{center}} (Center)\n";
print "@{$ref->{upper}} (Upper)\n\n";



 
