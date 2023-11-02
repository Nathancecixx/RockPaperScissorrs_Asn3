#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validation.h"


void main(void) {

	printf("Hello world\n");

}

char* checkWinner (char* inpOne, char* inpTwo) {

	char playerOne[MAXCHARS];
	char playerTwo[MAXCHARS];

	strncpy_s(playerOne, MAXCHARS, inpOne, MAXCHARS - 1);
	strncpy_s(playerTwo, MAXCHARS, inpTwo, MAXCHARS - 1);

	//Allocate memory on the heap to store char array to hold 
	//the result of the function.
	char* winner = (char*)malloc(MAXCHARS * sizeof(char));

	//Check if memory was allocated properly and if not then
	//exit the program.
	if (winner == NULL) {
		fprintf(stderr, "Error allocating memory");
		exit(EXIT_FAILURE);
	}

	//Copy "Invalid" as base case.
	strncpy_s(winner, MAXCHARS, "Invalid", MAXCHARS - 1);

	//If both players input same values, its a draw.
	if (strcmp(playerOne, playerTwo) == 0) {
		strncpy_s(winner, MAXCHARS, "Draw", MAXCHARS - 1);
		return &winner[0];
	}

	//Check if Player1 wins:
	if (strcmp(playerOne, "Rock") && strcmp(playerTwo, "Scissors")) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerOne, "Paper") && strcmp(playerTwo, "Rock")) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerOne, "Scissors") && strcmp(playerTwo, "Paper")) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}



	return &winner[0];
}