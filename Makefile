HangmanGame: main.o client.o
	gcc -Wall -o HangmanGame main.o client.o

main.o: main.c
	gcc -Wall -c main.c

client.o: client.c
	gcc -Wall -c client.c

clean:
	rm Hangman
	rm HangmanGame
	rm *.o

