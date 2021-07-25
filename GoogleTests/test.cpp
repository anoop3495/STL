#include "ExampleTest.h"

class TestFixture : public ::testing::Test
{
protected:
	int value_ = 0;

public:
	void SetUp() override
	{
		value_ = 2;
	}

	int run_test(int parameter)
	{
		return value_ * parameter;
	}
};

class ParameterizedFixture : public ::testing::TestWithParam<int>
{
protected:
	static bool is_integer(double value)
	{
		double integer_part;
		return std::modf(value, &integer_part) == 0.0;
	}

	int returnvalue(int val)
	{
		return fibonacci(val);
	}
};

TEST(TestCaseName, TestName_1) {

	int value = 5;
	int total = fibonacci(5);

	EXPECT_EQ(total, 120);
}

TEST_F(TestFixture, testFixture)
{
	int fixtureReturn = run_test(3);
	EXPECT_EQ(fixtureReturn, 6);
}

TEST_F(TestFixture, testFibonacci)
{
	SetUp();
	int total = fibonacci(value_);
	EXPECT_EQ(total, 2);
}

TEST_P(ParameterizedFixture, integers) {
	auto parameter = GetParam();
	EXPECT_TRUE(is_integer(parameter)) << "Fails for parameter " << parameter;
}

INSTANTIATE_TEST_CASE_P(
	integer_value,
	ParameterizedFixture,
	::testing::Values(1.0, 2.0, 3.0, 4.0));

TEST_P(ParameterizedFixture, fibonacciValues) {
	int value = GetParam();
	int total = GetParam();
	EXPECT_TRUE(returnvalue(value), total);
}

INSTANTIATE_TEST_CASE_P(
	fibonacciValues,
	ParameterizedFixture,
	::testing::Values((2,2), (3,6), (4,12)));