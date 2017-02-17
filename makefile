IlichGarcia_Examen1: Stark.o Lannister.o Targaryen.o NobleFamily.o Dothraki.o RoyalGuard.o -lncurses -o IlichGarcia_Examen1

	g++ Stark.o Lannister.o Targaryen.o NobleFamily.o Dothraki.o RoyalGuard.o

IlichGarcia_Examen1.o:	IlichGarcia_Examen1.cpp Stark.h Lannister.h Targaryen.h NobleFamily.h Dothraki.h RoyalGuard.h
	g++ -c IlichGarcia_Examen1.cpp

Stark.o:	Stark.cpp Stark.h
	g++ -c Stark.cpp

Lannister.o: Lannister.cpp Lannister.h
	g++ -c Lannister.cpp

Targaryen.o: Targaryen.cpp Targaryen.h
	g++ -c Targaryen.cpp

NobleFamily.o:	NobleFamily.cpp NobleFamily.h
	g++ -c NobleFamily.cpp

Dothraki.o:	Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp

RoyalGuard.o: RoyalGuard.cpp RoyalGuard.h
	g++ -c RoyalGuard.cpp
