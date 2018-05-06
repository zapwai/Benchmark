#!/usr/bin/perl
use strict;
use Time::HiRes qw( time );
my $start = time();
 # run things
my $end = time();
printf("%.12f\n", $end - $start);
