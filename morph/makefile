
otw.dic: na1.txt ni1.txt
	cat na1.txt | sed 's/$$/\/NG\tpo:na/' > $@
	cat na1.txt | sed 's/$$/ag/' | perl syncope.pl | sed 's/ag$$/\/XA\tpo:na/' >> $@
	sed -i "1s/.*/`cat $@ | wc -l`\n&/" $@
	#egrep ',1,I' nouns.csv | sed 's/,.*/an/' | perl syncope.pl >> $@
	#egrep ',2,A' nouns.csv | sed 's/,.*/g/' >> $@
	#egrep ',2,I' nouns.csv | sed 's/,.*/n/' >> $@
	#egrep '3,A' nouns.csv | sed 's/i\?,.*/wag/' >> $@
	#egrep '3,I' nouns.csv | sed 's/i\?,.*/wan/' >> $@
	#egrep ',5,A' nouns.csv | sed 's/i\?,.*/iig/' >> $@
	#egrep ',5,I' nouns.csv | sed 's/i\?,.*/iin/' >> $@

na1.txt: nouns.csv
	egrep ',1,A' nouns.csv | sed 's/,.*//' > $@

ni1.txt: nouns.csv
	egrep ',1,I' nouns.csv | sed 's/,.*//' > $@

na2.txt: nouns.csv
	egrep ',2,A' nouns.csv | sed 's/,.*//' > $@

ni2.txt: nouns.csv
	egrep ',2,I' nouns.csv | sed 's/,.*//' > $@

na3.txt: nouns.csv
	egrep ',3,A' nouns.csv | sed 's/,.*//' > $@

ni3.txt: nouns.csv
	egrep ',3,I' nouns.csv | sed 's/,.*//' > $@

na5.txt: nouns.csv
	egrep ',5,A' nouns.csv | sed 's/,.*//' > $@

ni5.txt: nouns.csv
	egrep ',5,I' nouns.csv | sed 's/,.*//' > $@

synctest: FORCE
	cat synctest.txt | sed 's/ .*//' > tempin.txt
	cat tempin.txt | perl syncope.pl > tempout.txt
	-paste tempin.txt tempout.txt | tr "\t" " " | diff -u synctest.txt -
	rm -f tempin.txt tempout.txt

test: FORCE
	cat test-in.txt | hunspell -d ./otw -m > test-temp.txt
	-diff -u test-out.txt test-temp.txt
	rm -f test-temp.txt

# To add tests... add words to test-in.txt, then do
# $ make test
# If diff looks ok, then do
# $ make testupdate
testupdate: FORCE
	cat test-in.txt | hunspell -d ./otw -m > test-out.txt

clean:
	rm -f otw.dic plurals.txt na1.txt ni1.txt

FORCE:
