// Define _CRT_SECURE_NO_WARNINGS to suppress security warnings on some functions.
#define _CRT_SECURE_NO_WARNINGS

// Define a constant for the buffer size.
#define BUFFER_SIZE 300

// Include the header file containing the function prototype.
#include "tokenizing.h"

// Function definition for tokenizing.
void tokenizing() {
	/* Version 1 */
	// Print a message to indicate the start of the word tokenizing demo.
	printf("*** Start of Tokenizing Words Demo ***\n");

	// Declare variables for storing input words and the current word.
	char words[BUFFER_SIZE];
	char* nextWord = NULL;

	// Declare a variable to store the word count.
	int wordsCounter;

	// Enter a loop to read and tokenize input words until the user quits.
	do {
		// Prompt the user to enter words separated by spaces.
		printf("Type a few words separated by space (q - to quit):\n");

		// Read the input words into the buffer and remove the newline character.
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';

		// If the user has not entered "q", tokenize the input words.
		if (strcmp(words, "q") != 0) {
			// Get the first word using strtok.
			nextWord = strtok(words, " ");

			// Reset the word counter.
			wordsCounter = 1;

			// Enter a loop to print each word and its number.
			while (nextWord) {
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " "); // Get the next word.
			}
		}
	} while (strcmp(words, "q") != 0);

	// Print a message to indicate the end of the word tokenizing demo.
	printf("*** End of Tokenizing Words Demo ***\n\n");
}