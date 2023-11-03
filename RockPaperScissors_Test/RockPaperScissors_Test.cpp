#include "pch.h"
#include "CppUnitTest.h"

#include <string.h>

#define MAXCHARS	25

extern "C" char* checkWinner(char*, char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:




/*******************************************************************
 *<-----------------Section for testing for draws----------------->*
 *******************************************************************/
		TEST_METHOD(TestDraw_One)
		{
			//Initialize char arrays.
			char arrOne[MAXCHARS] = { "Rock" };
			char arrTwo[MAXCHARS] = { "Rock" };
			char result[MAXCHARS];
			//Create char pointer to store the return pointer.
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result.
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			//Free the memory allocation to avoid memory leaks.
			free(winner);
			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(TestDraw_Two)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Paper" };
			char arrTwo[MAXCHARS] = { "Paper" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(TestDraw_Three)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Scissors" };
			char arrTwo[MAXCHARS] = { "Scissors" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}




/**********************************************************************
 *<-----------------Section for testing Player1 wins----------------->*
 **********************************************************************/
		TEST_METHOD(TestPlayer1_One)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Paper" };
			char arrTwo[MAXCHARS] = { "Rock" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(TestPlayer1_Two)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Rock" };
			char arrTwo[MAXCHARS] = { "Scissors" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(TestPlayer1_Three)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Scissors" };
			char arrTwo[MAXCHARS] = { "Paper" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}




/**********************************************************************
 *<-----------------Section for testing Player2 wins----------------->*
 **********************************************************************/
		TEST_METHOD(TestPlayer2_One)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Rock" };
			char arrTwo[MAXCHARS] = { "Paper" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(TestPlayer2_Two)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Paper" };
			char arrTwo[MAXCHARS] = { "Scissors" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(TestPlayer2_Three)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Scissors" };
			char arrTwo[MAXCHARS] = { "Rock" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player2", result);
		}




/***********************************************************************
 *<-----------------Section for testing Invalid input----------------->*
 ***********************************************************************/
		TEST_METHOD(TestInvalid_One)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Steve" };
			char arrTwo[MAXCHARS] = { "test" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(TestInvalid_Two)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "Paper" };
			char arrTwo[MAXCHARS] = { "Nathan" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(TestInvalid_Three)
		{
			//Initialize char arrays
			char arrOne[MAXCHARS] = { "STEVE" };
			char arrTwo[MAXCHARS] = { "Rock" };
			char result[MAXCHARS];
			char* winner = checkWinner(&arrOne[0], &arrTwo[0]);

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, MAXCHARS, winner, MAXCHARS - 1);
			free(winner);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Invalid", result);
		}
	};
}
