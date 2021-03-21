#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3.2/Lab3.2/GraduateStudent.cpp"
#include "../Lab3.2/Lab3.2/GraduateStudent.h"
#include "../Lab3.2/Lab3.2/Student.cpp"
#include "../Lab3.2/Lab3.2/Student.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			GraduateStudent A("Test thesis topic", "Pedro", 3, 45132165);
			A.SetIDnumber(11111111);
			Assert::AreEqual(A.GetIDnumber(), 11111111);
		}
	};
}
