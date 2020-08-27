#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "StringList.h"




void userinput(int fileSize, unsigned char *charBuffer, StringList *stringList)
{
	int counter; //counter 
	int characters = 0; //characters in string
	char lowercase; //lowercase characters
	int tempindex;
	int frequency = 1; //frequency of string in file		

	for (counter = 0; counter < fileSize; counter++)
	{
		char CurrentString[characters+1];
		CurrentString[characters] = 0;
		lowercase = tolower(charBuffer[counter]); //converting all alpha characters to lowercase
		if (lowercase < 97 || lowercase > 122) //if ascii value is between 'a' and 'z'
		{
			if (tolower(charBuffer[counter-1]) > 96 && tolower(charBuffer[counter-1]) < 123) 
			{// if character before the lowercase letter
				
				for (tempindex = characters; tempindex >= 1; tempindex--)
				{
					CurrentString[characters-tempindex] = tolower(charBuffer[counter-tempindex]);
				}
				if (FindByKey(stringList, CurrentString) != NULL) //if string is repeated
				{	
					FindByKey(stringList, CurrentString) -> amount++; //increment the frequency
				}
				else
				{
					AddNode(stringList,CreateFilledNode(CurrentString, frequency)); //
				}
				characters = 0; //reset the characters in string
			}
		}
		else
		{
			characters++;
		}
	}
}

