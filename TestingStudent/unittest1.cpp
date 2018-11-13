#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingStudent
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCustomConstructor)
		{
			//Arrange
			Module cctest{ "Programming", "COM326", 30, 80 };
			std::string expectedTitle{ "Programming" };
			std::string actualTitle;
			std::string expectedCode{ "COM326" };
			std::string actualCode;
			int expectedCredit{ 30 };
			int actualCredit;
			int expectedMarks{ 80 };
			int actualMarks;

			//Act
			actualTitle = cctest.getModuleTitle();
			actualCode = cctest.getModuleCode();
			actualCredit = cctest.getModuleCreditPoints();
			actualMarks = cctest.getModuleMark();

			//Assert
			Assert::AreEqual(expectedCode, actualCode);
			Assert::AreEqual(expectedCredit, actualCredit);
			Assert::AreEqual(expectedMarks, actualMarks);
			Assert::AreEqual(expectedTitle, actualTitle);
		}
		
		TEST_METHOD(TestGetModuleCode)
		{
			// TODO: Your test code here
			//Arrange
			Module gmctest{ "Programming", "COM326", 30, 80 };
			std::string expected{ "COM326" };
			std::string actual{};

			//Act
			actual = gmctest.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCode)
		{
			// TODO: Your test code here
			//Arrange
			Module smctest{ "Programming", "COM326", 30, 80 };
			std::string expected{ "COM327" };
			std::string actual{};

			//Act
			smctest.setModuleCode("COM327");
			actual = smctest.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetModuleCreditPoints)
		{
			// TODO: Your test code here
			//Arrange
			Module gmcptest{ "Programming", "COM326", 30, 80 };
			std::string expected{ 30 };
			std::string actual{};

			//Act
			actual = gmcptest.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCreditPoints)
		{
			// TODO: Your test code here
			//Arrange
			Module smcptest{ "Programming", "COM326", 30, 80 };
			std::string expected{ "COM326" };
			std::string actual{};

			//Act
			smcptest.setModuleCreditPoints(40);
			actual = smcptest.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

	};
}