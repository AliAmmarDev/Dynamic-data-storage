#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "StringList.h"

int main(int argc, char **argv)
{
//start main

	fseek(stdin, 0, SEEK_END); //go to the end of the file
	long fileSize = ftell(stdin); //find out the size of the file
	rewind(stdin); //go back to the start of the file
	unsigned char *charBuffer = (unsigned char *) malloc(fileSize); //allocate memory for characters
	fread( charBuffer, 1, fileSize, stdin); //cast the buffer to void*
	
	StringList myList; //calling function
	InitialiseList(&myList); //calling function
	userinput (fileSize, charBuffer, &myList); //calling function
	PrintList(&myList);
	fclose(stdin); //close the file
	return 0;	
//end main
}
	
