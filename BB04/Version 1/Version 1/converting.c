

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
//include header file 
#include "converting.h"


void converting() {
/* Version 1 */
	//>> insert here

	printf("*** Start of Converting Strings to int Demo ***\n");
	
	//Declare Variables
	char    intString[BUFFER_SIZE];
	int		intNumber;

	//Enter loop
	do {
		//Prompt User Input
		printf("Type an int numeric string (q - to quit) :\n");
		fgets(intString, BUFFER_SIZE, stdin);

		intString[strlen(intString) - 1] = '\0';
		//Check if input is NOT exit command and begin
		if (strcmp(intString, "q") != 0) {
			//convert string to int
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");

	                                               



/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}
