string: main.o userinput.o StringList.o StringNode.o StringList.h
	gcc -g  -Wall -o string main.o userinput.o StringList.o StringNode.o StringList.h
	
main.o: main.c StringList.h
	gcc -g -Wall -c -o main.o main.c
	
userinput.o: userinput.c StringList.h 
	gcc -g  -Wall -c -o userinput.o userinput.c 
	
StringList.o: StringList.c StringList.h
	gcc -g  -Wall -c -o StringList.o StringList.c
	
	
StringNode.o : StringNode.c StringList.h
	gcc -g -Wall -c -o StringNode.o StringNode.c
clean:
	rm -f string 
