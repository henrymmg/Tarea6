all: IC.o  evolve.o CondIni1.txt CondIni2.txt IC_dosgalaxias.txt

IC.txt: IC.c
        ./IC.o 10.0 8.0 -30.0 0.0 IC.txt

IC.o: IC.c
        cc IC.c -o IC.o

evolve.o: evolve.c
        cc evolve.c -o evolve.o

IC1.txt: IC.c evolve.c
        ./IC.o 0.0 0.0 0.0 0.0 CondIni1.txt

IC2.txt: IC.c evolve.c
        ./IC.o 150.0 200.0 0.0 -100.0 CondIni2.txt

