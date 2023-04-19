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
	
	printf("*** Start of Comparing strings Demo ***\n"); // Indicates the start of the program.
	char compare1[BUFFER_SIZE]; // Declares a character array named "compare1" with size "BUFFER_SIZE" i.e. 80.
	char compare2[BUFFER_SIZE]; // Declares a character array named "compare2" with size "BUFFER_SIZE" i.e. 80.
	int result; // Declares an integer variable named "result"

	do {

		printf("Type the 1st string to compare (q - to quit) : \n"); // Prompts the user to enter the first string
		fgets(compare1, BUFFER_SIZE, stdin); // Reads a line of input from the user and stores it in "compare1"

		compare1[strlen(compare1) - 1] = '\0'; // Removes the newline character from the end of the string

		if (strcmp(compare1, "q") != 0) { // If the user has not entered "q" to quit, compare the strings

			printf("Type the 2nd string to compare:\n"); // Prompts the user to enter the second string
			fgets(compare2, BUFFER_SIZE, stdin); // Reads a line of input from the user and stores it in "compare2"

			compare2[strlen(compare2) - 1] = '\0'; // Removes the newline character from the end of the string

			result = strcmp(compare1, compare2); // Compares "compare1" and "compare2" and stores the result in "result"

			if (result < 0)
				printf("'%s' string is less than '%s'\n", compare1, compare2); // If the result is negative, print that "compare1" is less than "compare2"

			else if (result == 0)
				printf("'%s' string is equal to '%s'\n", compare1, compare2); // If the result is zero, print that "compare1" is equal to "compare2"

			else
				printf("'%s' string is greater than '%s'\n", compare1, compare2); // If the result is positive, print that "compare1" is greater than "compare2"
		}

	} while (strcmp(compare1, "q") != 0); // Loop continues until the user enters "q" to quit

	printf("*** End of Comparing strings Demo ***\n\n"); // Indicates the end of the program

	/* Version 3 */
	printf("*** Start of Searching strings Demo ***\n"); // Display a message indicating the start of the program
	char	haystack[BUFFER_SIZE];  // Declare a character array named "haystack" with size of BUFFER_SIZE i.e. 80
	char	needle[BUFFER_SIZE]; // Declare another character array named "needle" with size of BUFFER_SIZE i.e. 80
	char* occurrence = NULL; // Declare a pointer variable named "occurrence" and initialize it to NULL

	do {
		printf("Type the string (q - to quit): \n"); // Prompt the user to enter a string
		fgets(haystack, BUFFER_SIZE, stdin); // Read the input string from the user and store it in "haystack"

		haystack[strlen(haystack) - 1] = '\0'; // Remove the newline character at the end of the string

		if (strcmp(haystack, "q") != 0) { // Check if the input string is equal to "q"

			printf("Type the substring:\n"); // Prompt the user to enter a substring to search for
			fgets(needle, BUFFER_SIZE, stdin); // Read the substring from the user and store it in "needle"

			needle[strlen(needle) - 1] = '\0'; // Remove the newline character at the end of the string

			occurrence = strstr(haystack, needle); // Search for the substring in the input string and store the result in "occurrence"

			if (occurrence) // If the substring is found
				printf("'%s' found at %d position\n", needle, (int)(occurrence - haystack)); // Display the position of the substring in the input string

			else
				printf("Not found \n"); // Display a message indicating that the substring is not found
		}

	} while (strcmp(haystack, "q") != 0); // Continue looping until the user enters "q"

	printf("*** End of Searching Strings Demo ***\n\n"); // Display a message indicating the end of the program
}

// This is the main function where program execution begins.
int main()
{
	// Call the manipulating function to manipulate some data.
	manipulating();

	// Return 0 to indicate successful execution of the program.
	return 0;
}
