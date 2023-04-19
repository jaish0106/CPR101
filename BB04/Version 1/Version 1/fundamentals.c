// Fundamentals module source
#define _CRT_SECURE_NO_WARNINGS               //Included to overcome the scanf warnings
#define BUFFER_SIZE 80                        
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"                      //Include the header file

void fundamentals(void)                        //Defining the function "fundamentals", which deals with the indexing part of the project
{
	//v1

	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];                   //Creating a char array "buffer1" which can store upto 79 characters, and 1 null terminator at the end.
	char numInput[NUM_INPUT_SIZE];               //Creating another char arry "numInput" which can hold upto 9 characters, and 1 null terminaor at the end.
	size_t position;                             //Creating an int uninitialized varibale "position", unsigned refers to an integer ehich can never br a negative value.

	do {                                         //A do/while loop will executed until "buffer1" value is equal to "q", and if q is enterd the program will end.
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);      //Gets input from user and stores it into the array "buffer1".
		buffer1[strlen(buffer1) - 1] = '\0';     //sets last character of the string stored in buffer1 to the null character '\0'.
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);   //Gets the input from user and stores it in the array "numInput"
			numInput[strlen(numInput) - 1] = '\0';    //sets last character of the string stored in numInput to the null character '\0'
			position = atoi(numInput);                //Position is assigned to the integer value of numInput using atoi function, the atoi function here converets the chatacter type into the integer type.
			if (position >= strlen(buffer1)) {        //An if condition is defined, whwere it enters the condition if the position's value is greater than or equal ti the length of the buffer 1 string.
				position = strlen(buffer1) - 1;       //Position is assigned as length of buffer1 string substracted by 1.
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);

		}


	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");

}