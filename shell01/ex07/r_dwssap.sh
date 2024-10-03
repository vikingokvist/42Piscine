#!/bin/sh
cat /etc/passwd |\
grep -v '\#' |\
awk -F : '{print $1}' |\
rev |\
sort -r |\
awk 'NR % 2==1' |\
awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' |\
paste -sd"," - |\
sed 's/,/, /g' |\
sed 's/$/./' |\
tr -d "\n"

