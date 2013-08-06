otw.dic: nouns.csv
	cat nouns.csv | sed 's/,1,A/\/A/; s/,1,I/\/B/; s/,2,A/\/C/; s/,2,I/\/D/; s/,3,A/\/E/; s/,3,I/\/F/; s/,4a,A/\/G/; s/,4a,I/\/H/; s/,4b,A/\/I/; s/,5,A/\/J/; s/,5,I/\/K/; s/,6,A/\/L/; s/,6,I/\/M/; s/,7,A/\/N/; s/,7,I/\/O/; s/,C,A/\/P/' > $@ 
plurals.txt: nouns.csv
	egrep ',1,A' nouns.csv | sed 's/,.*/ag/' | perl syncope.pl > $@
	egrep ',1,I' nouns.csv | sed 's/,.*/an/' | perl syncope.pl >> $@
	egrep ',2,A' nouns.csv | sed 's/,.*/g/' >> $@
	egrep ',2,I' nouns.csv | sed 's/,.*/n/' >> $@
	egrep '3,A' nouns.csv | sed 's/i\?,.*/wag/' >> $@
	egrep '3,I' nouns.csv | sed 's/i\?,.*/wan/' >> $@
	egrep ',5,A' nouns.csv | sed 's/i\?,.*/iig/' >> $@
	egrep ',5,I' nouns.csv | sed 's/i\?,.*/iin/' >> $@

synctest: FORCE
	cat synctest.txt | sed 's/ .*//' > tempin.txt
	cat tempin.txt | perl syncope.pl > tempout.txt
	-paste tempin.txt tempout.txt | tr "\t" " " | diff -u synctest.txt -
	rm -f tempin.txt tempout.txt

clean:
	rm -f otw.dic plurals.txt

FORCE:
