#include "gmock/gmock.h"

#include "example.h"

	
using namespace testing;
TEST(funciones, temperat)
{
	float* array_ = new float[2];

	array_[0] = -23.0;
	array_[1] = 45.0;

	EXPECT_THAT(temperaturaspacientes(array_), -1);
	//EXPECT_THAT("temperaturaspacientes(36.0, 39.0)", 2);
}
TEST(funciones, pareimpar)
{
	ASSERT_THAT(paroimpar(2, 5), 0);
	//ASSERT_THAT("paroimpar(0, 4)", 1);
}
