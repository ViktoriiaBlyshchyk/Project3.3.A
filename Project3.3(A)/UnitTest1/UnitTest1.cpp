#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.3(A)\Project3.3(A)\Complex1.cpp"
#include "D:\Study\ООП\Project3.3(A)\Project3.3(A)\Complex1.h"
#include "D:\Study\ООП\Project3.3(A)\Project3.3(A)\Complex.cpp"
#include "D:\Study\ООП\Project3.3(A)\Project3.3(A)\Complex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Complex1 b(2, 1);
			Complex1 c(2, 1);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
