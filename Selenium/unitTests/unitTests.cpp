#include "pch.h"
#include "CppUnitTest.h"
#include "../Selenium/LevelOne.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unitTests
{
	TEST_CLASS(unitTests)
	{
	public:
		
		TEST_METHOD(TestFirstExerciseLevelOne)
		{
			//Arrange
			bool firstEx;

			//Act
			firstEx = showFirstExerciseLevelOne();

			//Assert
			Assert::IsTrue(firstEx);
		}
	};
}
