#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "StringNode.h"


StringNode *CreateFilledNode(char *debtor, int owing)
{
	StringNode *newNode = (StringNode *) malloc (sizeof(StringNode)); //allocating memory for nodes
	
	newNode -> string = strdup (debtor); //copying values
	newNode -> amount = owing; // copying values
	
	newNode -> nextString = NULL; //set pointer to null
	return newNode; //return node
}












