#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validation.h"


void main(void) {

	printf("Hello world\n");

}

char* checkWinner (char* playerOne, char* playerTwo) {

	char* winner = (char*)malloc(MAXCHARS * sizeof(char));

	if (winner == NULL) {
		fprintf(stderr, "Error allocating memory");
		exit(EXIT_FAILURE);
	}

	strncpy_s(winner, MAXCHARS, "Invalid", MAXCHARS - 1);

	if (strcmp(playerOne, playerTwo) == 0) {
		strncpy_s(winner, MAXCHARS, "Draw", MAXCHARS - 1);
		return &winner[0];
	}

	return &winner[0];
}