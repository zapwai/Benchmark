#!/usr/bin/perl
use strict;  use Time::HiRes qw( time );  use Math::Random;
my $start = time(); 
my $N = $ARGV[0] || 10;
for (my $i=0; $i < $N; $i++){
  print (random_normal(), "\n");
}
my $end = time();
printf("\n");
printf("%.12f\n", $end - $start);
