// Fundamentals module source
#define _CRT_SECURE_NO_WARNINGS               //Included to overcome the scanf warnings
#define BUFFER_SIZE 80                        
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"                      //Include the header file

void fundamentals(void)                        //Defining the function "fundamentals", which deals with the indexing part of the project
{



	//V3
	printf("*** Start of Copying Strings Demo ***\n");   //Start of the function message
	char destination[BUFFER_SIZE];                       // Initialize the character arrays to store the source and destination strings
	char source[BUFFER_SIZE];
	do {

		destination[0] = '\0';                           // Reset the destination string to an empty string using the null character
		printf("Destination string is reset to empty\n"); 
		printf("Type the source string (q - to quit) :\n");
		fgets(source, BUFFER_SIZE, stdin);               //get the source string using fgets
		source[strlen(source) - 1] = '\0';               //Remove the newline character at the end of the source string
		if (strcmp(source, "q") != 0) {                  // If the user did not enter "q" for the source string, copy the source string to the destination string using strcpy()
			strcpy(destination, source);
			printf("New destination string is \'%s'\n", destination);

		}

	} while (strcmp(source, "q") != 0);                 // Continue looping as long as the user does not enter "q" for the source string
	printf("*** End of Copying Strings Demo ***\n\n");
}

