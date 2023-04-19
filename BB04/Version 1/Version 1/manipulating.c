#define _CRT_SECURE_NO_WARNINGS //It is typically added at the beginning of a program to disable security warnings related to the use of certain functions
#define BUFFER_SIZE 80 //Here macro is definded
#include "manipulating.h" // Here manipulating header file is included in the code

void manipulating() //Here function manipulating with return type voidand no arguments is defined
{
	/* Version 1 */

	printf("*** Start of Concatenating Strings Demo ***\n"); // Here a message is passed through printf function which indicates the start of the program.
	char	string1[BUFFER_SIZE]; // Declares a character array named "string1" with size "BUFFER_SIZE" i.e. 80.
	char	string2[BUFFER_SIZE]; // Declares a character array named "string2" with size "BUFFER_SIZE" i.e. 80.
	
	do {
		printf("Type the 1st string (q - to quit):\n"); // Displays a message to prompt the user to enter the first string.
		fgets(string1, BUFFER_SIZE, stdin); // Reads a line of input from the user and stores it in "string1".
		
		string1[strlen(string1) - 1] = '\0'; // Removes the newline character from the end of the string
		
		if ((strcmp(string1, "q") != 0)) // If the user has not entered "q" to quit, compare the strings
		{
			printf("Type the 2nd string: \n"); // Prompts the user to enter the second string.
			fgets(string2, BUFFER_SIZE, stdin); // Reads a line of input from the user and stores it in "string2".
		
			string2[strlen(string2) - 1] = '\0'; // Removes the newline character from the end of the string
			
			strcat(string1, string2); // Concatenates "string2" to the end of "string1"
			
			printf("Concatenated string is \'%s\'\n", string1); // Prints the concatenated string
		}

	} while (strcmp(string1, "q") != 0); // Loop continues until the user enters "q" to quit
	
	printf("*** End of Concatenating strings Demo ***\n\n"); // Indicates the end of the program


	/* Version 2 */
	
	/* Version 3 */

}

