#!/bin/bash
gsed -i "s/ \`/ <code>/g" *.inc
gsed -i "s/\`/<\/code>/g" *.inc
cat psql_tips_begin.inc > psql_tips_all.html
for f in [0-9][0-9][0-9].inc
do
  name=$(basename $f .inc)
	cat psql_tips_begin.inc > psql_tips_$name.html
	echo "   <div id='tip$name'>" >> psql_tips_all.html
	echo "    <a href='#tip$name'><h2 class='breath'>Psql Tip #$name</h2></a>" >> psql_tips_all.html
	echo "    <h2 class='breath'>Psql Tip #$name</h2>" >> psql_tips_$name.html
	cat $f >> psql_tips_$name.html
	cat $f >> psql_tips_all.html
	echo "   </div>" >> psql_tips_all.html
	cat psql_tips_end.inc >> psql_tips_$name.html
done
cat psql_tips_end.inc >> psql_tips_all.html

