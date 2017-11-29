#!/bin/bash

REP=$(dirname $(readlink -f $0))
cd $REP

echo $REP

/usr/bin/iwatch -v -c "$REP/build.sh" $REP/*.md |& tee -a $REP/iwatch.log 
 



