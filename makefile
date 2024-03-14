#compilor
CC=gcc

#Header file
H=NumClass.h

#Warrnings
GW= -g -Wall

Loop= basicClassification.o advancedClassificationLoop.o
Rec= basicClassification.o advancedClassificationRecursion.o


#o objects
advancedClassificationLoop.o: advancedClassificationLoop.c $(H)
	$(CC) $(GW) -c advancedClassificationLoop.c
basicClassification.o: basicClassification.c $(H)
	$(CC) $(GW) -c basicClassification.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c $(H)
	$(CC) $(GW) -c advancedClassificationRecursion.c
	
main.o: main.c $(H)
	$(CC) $(GW) -c main.c


#static librarys:

loop_s: libclassloops.a

libclassloops.a: $(Loop)
	ar rcs libclassloops.a $(Loop)

recursive_s: libclassrec.a 

libclassrec.a: $(Rec)
	ar rcs libclassrec.a $(Rec)


#Dynamic librarys:
#loop 
loop_d: libclassloops.so

libclassloops.so: $(Loop)
	$(CC) -shared -fpic -o libclassloops.so $(Loop)

recursive_d: libclassrec.so
#rec
libclassrec.so: $(Rec)
	$(CC) -shared -fpic -o libclassrec.so $(Rec)

mains: main.o libclassrec.a
	$(CC) $(GW) main.o ./libclassrec.a -o mains

maindloop: libclassloops.so
	$(CC) $(GW) main.o ./libclassloops.so -o maindloop

maindrec: libclassrec.so
	$(CC) $(GW) main.o ./libclassrec.so -o maindrec

#Create all
.PHONY: all
all: mains loop_d maindloop maindrec loop_s recursive_d recursive_s

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.a
	rm -f *.so
	rm -f mains
	rm -f loop_d
	rm -f maindloop
	rm -f maindrec