# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    table_gen.pl                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 13:38:09 by hcordoba          #+#    #+#              #
#    Updated: 2021/08/26 13:38:10 by hcordoba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
       if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print "."; }
}
print "\n";
}
