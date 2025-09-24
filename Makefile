compile: main.c fichier.c fichier.h
			gcc -o main *.c	 
run: 
	./main
clean:	
	rm -rf main