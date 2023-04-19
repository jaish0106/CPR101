// Fundamentals module source
#define _CRT_SECURE_NO_WARNINGS               //Included to overcome the scanf warnings
#define BUFFER_SIZE 80                        
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"                      //Include the header file

void fundamentals(void)                        //Defining the function "fundamentals", which deals with the indexing part of the project
{


	//V2
	printf("*** Start of Measuring Strings Demo ***\n");    //Start of Measuring Strings
	char buffer2[BUFFER_SIZE];                              //Creating a chracter array called buffer2 which can hold 80 chracters including the null terminator
	do {                                                    // A do/while loop will executed until buffer2's vslue is equal to "q"
		printf("Type a string (q - to quit):\n");          
		fgets(buffer2, BUFFER_SIZE, stdin);                  //Gets the input from the user and stores it in array "buffer2"
		buffer2[strlen(buffer2) - 1] = '\0';
		if (strcmp(buffer2, "q") != 0)                       // Checks if the input string is not "q"
			printf("The length of the \'%s\' is %d characters\n",  // Prints the length of the input string
				buffer2, (int)strlen(buffer2));

	} while (strcmp(buffer2, "q") != 0);                     // Loops until the input string is "q"
	printf("*** End of Measuring Strings Demo ***\n\n");     //Prints a message indicating the end of the function

}