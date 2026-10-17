#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_1/FloatPower.h"
#include "../lab2_1/FloatPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FloatPower p1;
			Assert::AreEqual(1.0, p1.GetFirst());
			Assert::AreEqual(0.0, p1.GetSecond());

			FloatPower p2(2.5, 3.0);
			Assert::AreEqual(2.5, p2.GetFirst());
			Assert::AreEqual(3.0, p2.GetSecond());
		}
	};
}
