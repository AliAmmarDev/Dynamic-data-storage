#include "StringNode.h"

//struct
struct string_list
{
	StringNode *topNode; //pointer to first node in list
};

typedef struct string_list StringList;



void InitialiseList(StringList *stringList); //function to initialise list

void userinput(int fileSize, unsigned char *charBuffer, StringList *stringList); //function to iterate through the file

int CountNodes(StringList *stringList); //function to count nodes

void PrintList(StringList *stringList); //function to print output

void AddNode(StringList *stringList, StringNode *stringNode); //function to add nodes to list

StringNode *FindByKey (StringList *stringList, char *keyName); //function to find specific nodes






