App:SDetails.c math.o phy.o chem.o bio.c marks.h
        gcc SDetails.c math.c phy.c chem.c bio.c -o mrks

math.o:math.c
        gcc -c math.c -o math.o

phy.o:phy.c
	gcc -c phy.c -o phy.o

chem.o:chem.c
        gcc -c chem.c -o chem.o

bio.o:bio.c
	gcc -c bio.c -o bio.o

clean:
	rm *.o

