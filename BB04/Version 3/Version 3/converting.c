

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

	printf("*** Start of Converting Strings to double Demo ***\n");
	//Variables declared
	char    doubleString[BUFFER_SIZE];
	double  doubleNumber;

	do {
		printf("Type the double numeric string (q - to quit) :\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';
		if (strcmp(doubleString, "q") != 0) {
			//convert string to double
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");

	
/* Version 3 */
//>> insert here
	printf("*** Start of Converting Strings to long Demo ***\n");
	//Variables declared
	char    longString[BUFFER_SIZE];
	long  longNumber;

	do {
		printf("Type the long numeric string (q - to quit) :\n");
		fgets(longString, BUFFER_SIZE, stdin);
		longString[strlen(longString) - 1] = '\0';
		if (strcmp(longString, "q") != 0) {
			//convert string to long
			longNumber = atol(longString);
			printf("Converted number is %f\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);
	printf("*** End of Converting Strings to long Demo ***\n\n");

