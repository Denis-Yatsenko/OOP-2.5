#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_2.5/Man.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man m;
			m.Init("name", 18, 'm', 68);
			Assert::AreEqual("	Name : name\n	Age : 18\n	Gender : m\n	Weight : 68", m.toString().c_str());
		}
	};
}
