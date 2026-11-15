#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.2/Macros.h"
#include "../lab9.2/Macros.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92
{
	TEST_CLASS(UnitTest92)
	{
	public:

		TEST_METHOD(TestCalculateW_CubeGreater)
		{
			// При Z = 2 (гілка 1 < z < 3): x = 2, y = -3
			// |2| + |-3| + |2| = 7; x^3 = 8 -> max(7, 8) = 8.0
			double result = calculate_w(2.0, -3.0);
			Assert::AreEqual(8.0, result, 1e-6);
		}

		TEST_METHOD(TestCalculateW_AbsSumGreater)
		{
			// При Z = 2 (гілка 1 < z < 3): x = -2, y = 3
			// |-2| + |3| + |2| = 7; (-2)^3 = -8 -> max(7, -8) = 7.0
			double result = calculate_w(-2.0, 3.0);
			Assert::AreEqual(7.0, result, 1e-6);
		}
	};
}