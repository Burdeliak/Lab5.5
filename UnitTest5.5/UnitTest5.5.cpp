#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = 1 * (2 - 1) + 1 * (2 - 1);
			Assert::AreEqual  (s, 2, 0.1);
		};
	};
}
