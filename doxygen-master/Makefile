program: main.o display.o myClass.o display.h myClass.h
		gcc -o program main.o display.o myClass.o

myClass.o: myClass.c myClass.h
		gcc -c myClass.c

main.o: main.c display.h myClass.h
		gcc -c main.c

display.o: display.c display.h
		gcc -c display.c
