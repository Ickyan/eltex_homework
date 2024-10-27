#!/bin/bash

#task1-3
for ((i=1; i<21; i++))
do
	mkdir -p "$i"
	echo "$i.txt" > "$i/$i.txt"
	ln -s "$PWD/$i/$i.txt" "$PWD/$i.txt""
done

#task 4 rm file !4
for i in {1..20};
do
	if ! grep -q "4" "$i/$i.txt";
	then
		rm -f "$i/$i.txt"
	fi
done

#task5
echo "New file contents" > 14/14.txt


