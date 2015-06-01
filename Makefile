#Makefile

.c.o:

objs = palindrome.o max_palindrome.o check_palindrome.o

makepalin: $(objs)
	gcc -Wall -O2 -o makepalin $(objs)

palindrome.o: parin.h

max_palindrome.o: parin.h

.PHONY: clean
clean:
	rm -f Parindrome $(objs)
