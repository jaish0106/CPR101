// Define _CRT_SECURE_NO_WARNINGS to suppress security warnings on some functions.
#define _CRT_SECURE_NO_WARNINGS

// Define a constant for the buffer size.
#define BUFFER_SIZE 300

// Include the header file containing the function prototype.
#include "tokenizing.h"

// Function definition for tokenizing.
void tokenizing() {
	// Print a message to indicate the start of the word tokenizing demo.
	printf("*** Start of Tokenizing Words Demo ***\n");
	/* Version 3 */
// Print a message to indicate the start of the sentence tokenizing demo.
	printf("*** Start of Tokenizing Sentences Demo ***\n");

	// Declare variables for storing input sentences and the current sentence.
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL;

	// Declare a variable to store the sentence count.
	int sentencesCounter;

	// Enter a loop to read and tokenize input sentences until the user quits.
	do {
		// Prompt the user to enter sentences separated by periods.
		printf("Type a few sentences separated by dot (q - to quit):\n");

		// Read the input sentences into the buffer and remove the newline character.
		fgets(sentences, BUFFER_SIZE, stdin);
		sentences[strlen(sentences) - 1] = '\0';

		// If the user has not entered "q", tokenize the input sentences.
		if ((strcmp(sentences, "q") != 0)) {
			// Get the first sentence using strtok.
			nextSentence = strtok(sentences, ".");

			// Reset the sentence counter.
			sentencesCounter = 1;

			// Enter a loop to print each sentence and its number.
			while (nextSentence) {
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
				nextSentence = strtok(NULL, "."); // Get the next sentence.
			}
		}
	} while (strcmp(sentences, "q") != 0);

	// Print a message to indicate the end of the sentence tokenizing demo.
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}