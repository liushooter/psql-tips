#!/bin/bash
gsed -i "s/ \`/ <code>/g" *.inc
gsed -i "s/\`/<\/code>/g" *.inc
cat psql_tips_begin.inc > ../html/psql_tips_all.html
for f in [0-9][0-9][0-9].inc
do
  name=$(basename $f .inc)
	cat psql_tips_begin.inc > ../html/psql_tips_$name.html
	echo "   <div id='tip$name'>" >> ../html/psql_tips_all.html
	echo "    <a href='#tip$name'><h2 class='breath'>Psql Tip #$name</h2></a>" >> ../html/psql_tips_all.html
	echo "    <h2 class='breath'>Psql Tip #$name</h2>" >> ../html/psql_tips_$name.html
	cat $f >> ../html/psql_tips_$name.html
	cat $f >> ../html/psql_tips_all.html
	echo "   </div>" >> ../html/psql_tips_all.html
	cat psql_tips_end.inc >> ../html/psql_tips_$name.html
done
cat psql_tips_end.inc >> ../html/psql_tips_all.html

