#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "StringList.h"

void InitialiseList(StringList *stringList)
{
	stringList -> topNode = NULL; //set the node pointer to null ie. empty list
}

int CountNodes (StringList *stringList)
{
	int nNodes = 0; //counting nodes
	StringNode *walkNode; //node to use for walking down list
	
	for (walkNode = stringList -> topNode; walkNode != NULL; walkNode = walkNode -> nextString )
	{//loop from first node to null and increment by pointer
		nNodes++;
	}
	return nNodes; //return nodes
}

void PrintList (StringList *stringList)
{
	StringNode *walkNode = stringList -> topNode;//node to use for walking down list
	printf("%d Different Strings Found In File\n", CountNodes(stringList));
	printf("-------------------\n");
	int wordcounter = CountNodes(stringList)+1; //showing the order of the strings as they appear
	for ( ; walkNode != NULL; walkNode = walkNode -> nextString)
	{ //increment by pointer till null is reached
		printf("String %02d: ", wordcounter - CountNodes(stringList));
		wordcounter++; //increment the counter
		printf(" %30s   |   Frequency: %d\n", walkNode -> string, walkNode -> amount);
	}
	printf("----------\n");
	printf("\n");
}


void AddNode (StringList *stringList, StringNode *stringNode)
{
	StringNode *lastNode = stringList -> topNode; //look for last node in list
	if (lastNode == NULL) //empty list
	{
		stringNode -> nextString = NULL; //set pointer to null
		stringList -> topNode = stringNode; //set list to point to node
	}
	else //non empty list
	{
		while (lastNode -> nextString != NULL) //find last node
		{
			lastNode = lastNode -> nextString;
		}
		lastNode -> nextString = stringNode; //set pointer to new node
		stringNode -> nextString = NULL; //set new node to point to null
	}
}



StringNode *FindByKey (StringList *stringList, char *keyName)
{
	StringNode *keyNode = stringList -> topNode; //pointer to use to find node
	
	while (keyNode != NULL) //find the key
	{
		if (strcmp (keyNode -> string, keyName) == 0) //compare string key and name
		{
			return keyNode; //return keynode
		}
		keyNode = keyNode -> nextString; //move to the next node
	}
	return keyNode; //return keynode
}

