#include "gmock/gmock.h"

#include "example.h"


//
//namespace foobar::tests
//{
//	TEST(ExampleTests, Example) {
//		foobar:: Example; example{};
//        ASSERT_THAT(example.getValue(), Eq(99));
//	}
//}

	
	using namespace testing;
	TEST(funciones, temperat)
	{
		float x1 = -23;
		float x2 = 45;
		ASSERT_THAT("temperaturaspacientes(x1,x2)", -1);
		ASSERT_THAT("temperaturaspacientes(36.0, 39.0)", 2);
	}
	TEST(funciones, pareimpar)
	{
		ASSERT_THAT("paroimpar(2, 5)", 0);
		ASSERT_THAT("paroimpar(0, 4)", 1);
	}
