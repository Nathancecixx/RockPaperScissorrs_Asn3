#include "pch.h"
#include "CppUnitTest.h"

#include <string.h>

extern "C" char* checkWinner(char*, char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:



//<-----------------Section for testing for draws----------------->
		TEST_METHOD(TestDraw_One)
		{
			//Initialize char arrays
			char arrOne[25] = { "Rock" };
			char arrTwo[25] = { "Rock" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(TestDraw_Two)
		{
			//Initialize char arrays
			char arrOne[25] = { "Paper" };
			char arrTwo[25] = { "Paper" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(TestDraw_Three)
		{
			//Initialize char arrays
			char arrOne[25] = { "Scissors" };
			char arrTwo[25] = { "Scissors" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Draw", result);
		}



//<-----------------Section for testing Player1 wins----------------->
		TEST_METHOD(TestPlayer1_One)
		{
			//Initialize char arrays
			char arrOne[25] = { "Paper" };
			char arrTwo[25] = { "Rock" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(TestPlayer1_Two)
		{
			//Initialize char arrays
			char arrOne[25] = { "Rock" };
			char arrTwo[25] = { "Scissors" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(TestPlayer1_Three)
		{
			//Initialize char arrays
			char arrOne[25] = { "Scissors" };
			char arrTwo[25] = { "Paper" };
			char result[25];

			//Copy the char array the return pointer points too and store it in result
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);

			//Check weather result is equal to what it should be.
			Assert::AreEqual("Player1", result);
		}
	};
}
