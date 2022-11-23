main: main.o profile.o network.o social3.o
	g++ -o main main.o profile.o network.o social3.o

tests: tests.o profile.o network.o social3.o
	g++ -o tests tests.o profile.o network.o social3.o



profile.o: profile.cpp profile.h

network.o: network.cpp network.h

social3.o: social3.cpp social3.h

main.o: main.cpp profile.h network.h social3.h

tests.o: tests.cpp doctest.h profile.h network.h social3.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f *.o main profile network tests social3