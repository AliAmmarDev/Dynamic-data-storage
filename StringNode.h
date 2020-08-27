//struct 
struct debt_struct
{
	char *string; //pointer to strings
	int amount; //frequency of string
	
	struct debt_struct *nextString; //pointer to next string
};

typedef struct debt_struct StringNode;

StringNode *CreateFilledNode(char *debtor, int owing); //function to create node


