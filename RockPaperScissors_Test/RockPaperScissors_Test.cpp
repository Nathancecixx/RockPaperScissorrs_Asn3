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
		
		TEST_METHOD(TestDrawOne)
		{
			char arrOne[25] = { "Rock" };
			char arrTwo[25] = { "Rock" };
			char result[25];
			strncpy_s(result, 25, checkWinner(&arrOne[0], &arrTwo[0]), 24);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(TestDrawTwo)
		{
		}
		TEST_METHOD(TestDrawThree)
		{
		}
		TEST_METHOD(TestMethod4)
		{
		}
	};
}
