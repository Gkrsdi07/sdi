ems:main.c addemp.o listallemp.o searchemp.o deleteemprecord.o empms.h
	gcc main.c addemp.c listallemp.c searchemp.c deleteemprecord.c -o ems

addemp.o:addemp.c
	gcc -c addemp.c -o addemp.o

listallemp.o:listallemp.c
	gcc -c listallemp.c -o listallemp.o

searchemp.o:searchemp.c
	gcc -c searchemp.c -o searchemp.o

deleteemprecord.o:deleteemprecord.c
	gcc -c deleteemprecord.c -o deleteemprecord.o

clean:
	rm *.o ems
