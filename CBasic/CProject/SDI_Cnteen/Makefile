SDIC:main.c mnu.o Bf.o Lnch.o snks.o Dnr.o sdi.h
        gcc main.c mnu.c Bf.c Lnch.c snks.c Dnr.c -o SDIC

mnu.o:mnu.c
        gcc -c mnu.c -o mnu.o

Bf.o:Bf.c
        gcc -c Bf.c -o Bf.o

Lnch.o:Lnch.c
	gcc -c Lunch.c -o Lunch.o

snks.o:snks.c
	gcc -c snks.c -o snks.o

Dnr.o:Dnr.c
	gcc -c Dnr.c -o Dnr.o

clean:
	rm *.o
