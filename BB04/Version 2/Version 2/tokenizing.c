#// Define _CRT_SECURE_NO_WARNINGS to suppress security warnings on some functions.
#define _CRT_SECURE_NO_WARNINGS

// Define a constant for the buffer size.
#define BUFFER_SIZE 300

// Include the header file containing the function prototype.
#include "tokenizing.h"

// Function definition for tokenizing.
void tokenizing() {
	// Print a message to indicate the start of the word tokenizing demo.
	printf("*** Start of Tokenizing Words Demo ***\n");
	/* Version 2 */
   // Print a message to indicate the start of the phrase tokenizing demo.
	printf("*** Start of Tokenizing Phrases Demo ***\n");

	// Declare variables for storing input phrases and the current phrase.
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;

	// Declare a variable to store the phrase count.
	int phrasesCounter;

	// Enter a loop to read and tokenize input phrases until the user quits.
	do {
		// Prompt the user to enter phrases separated by commas.
		printf("Type a few phrases separated by comma (q to quit):\n");

		// Read the input phrases into the buffer and remove the newline character.
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';

		// If the user has not entered "q", tokenize the input phrases.
		if ((strcmp(phrases, "q") != 0)) {
			// Get the first phrase using strtok.
			nextPhrase = strtok(phrases, ",");

			// Reset the phrase counter.
			phrasesCounter = 1;

			// Enter a loop to print each phrase and its number.
			while (nextPhrase) {
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ","); // Get the next phrase.
			}
		}
	} while (strcmp(phrases, "q") != 0);

	// Print a message to indicate the end of the phrase tokenizing demo.
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}