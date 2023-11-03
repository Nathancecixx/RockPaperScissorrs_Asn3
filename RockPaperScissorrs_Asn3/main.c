//Simple Rock, Paper, Scissors program

//Assignment 3
//CSCN71020 - fall 23 - Nathan Ceci


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validation.h"


void main(void) {

	printf("Hello world\n");

}



/*************************************************
*<-----This is the function to check winner----->*
**************************************************/

char* checkWinner (char* inpOne, char* inpTwo) {

//Create char arrays and copy the array found at 
//input perameter pointers 
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


	//If both players input same values, its a draw.
	if (strcmp(playerOne, playerTwo) == 0) {
		strncpy_s(winner, MAXCHARS, "Draw", MAXCHARS - 1);
		return &winner[0];
	}


	//Check if Player1 wins:
	if (strcmp(playerOne, "Rock") == 0 && strcmp(playerTwo, "Scissors") == 0) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerOne, "Paper") == 0 && strcmp(playerTwo, "Rock") == 0) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerOne, "Scissors") == 0 && strcmp(playerTwo, "Paper") == 0) {
		strncpy_s(winner, MAXCHARS, "Player1", MAXCHARS - 1);
		return &winner[0];
	}


	//Check if Player2 wins:
	if (strcmp(playerTwo, "Rock") == 0 && strcmp(playerOne, "Scissors") == 0) {
		strncpy_s(winner, MAXCHARS, "Player2", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerTwo, "Paper") == 0 && strcmp(playerOne, "Rock") == 0) {
		strncpy_s(winner, MAXCHARS, "Player2", MAXCHARS - 1);
		return &winner[0];
	}

	if (strcmp(playerTwo, "Scissors") == 0 && strcmp(playerOne, "Paper") == 0) {
		strncpy_s(winner, MAXCHARS, "Player2", MAXCHARS - 1);
		return &winner[0];
	}


	//Copy "Invalid" as base case if no other conditions are met
	strncpy_s(winner, MAXCHARS, "Invalid", MAXCHARS - 1);
	return &winner[0];
}