#include "test.h"
#include "../app.h"

TEST(AddTest, AddInt)
{
	EXPECT_EQ(add<int>(4, 6), 10); 
}

TEST(AddTest, AddDouble)
{
	EXPECT_DOUBLE_EQ(add<double>(-0.3, 0.1), -0.2);
}

TEST(AddTest, AddString)
{
	EXPECT_EQ(add<std::string>("aaa", "bbb"), "aaabbb");
}
