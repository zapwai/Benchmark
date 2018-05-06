#!/usr/bin/perl
use strict;
use Time::HiRes qw( time );

my @a = (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233);

my $start1 = time();
my @b;
push(@b, $_) foreach (@a);
my $end1 = time();

my $start2 = time();
my @c = @a;
my $end2 = time();

printf("cell-by-cell time: %.12f\n", $end1 - $start1);
printf(" vector copy time: %.12f\n", $end2 - $start2);

print "@a \n";
print "@b \n";
print "@c \n";
