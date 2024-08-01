#!/usr/bin/perl
#
# --- GeoHash.pl ---
#
# https://metacpan.org/pod/Geo::Hash
#
# This program encodes a location using Lat, Long into Geohash, and back.
#
# To install the program from cpanminus:
#
# $ sudo cpanm Geo::Hash
#
# For more info about Geohash, go to http://geohash.org/
#
#
use strict;
use Geo::Hash;
 
my $gh = Geo::Hash->new;

# ----------------------------
# --- Encoding to Geohash: ---
# ----------------------------
# Please set your Lat, Long, and precision here:
my $hash = $gh->encode(51.47786, -0.00147, 12);
#
print "$hash \n\n";
# ----------------------------------
# --- Decoding back to Lat, Long ---
# ----------------------------------
# Please set your Geohash here:
my ($lat, $long) = $gh->decode("gcpuzgqbm8xu");

print "$lat $long \n\n";

 
