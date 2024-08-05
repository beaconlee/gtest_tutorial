#include <gtest/gtest.h>

// Demonstrate some basic assertions.
// 演示一些基本断言。
// 第一个参数 HelloTest 是测试案例的名称
// 第二个参数 BasicAssertions 是该测试案例的测试组（test suite）的名称
// 一个测试案例可以包含多个测试组，用来组织相关的测试
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  // 期望两个字符串不相等。
  // EXPECT 是 Google Test 中的前缀
  // STR 表示这个断言适用于 C 风格字符串（即 const char *）
  // NE 表示 Not Equal（不相等）
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  // 期望相等
  EXPECT_EQ(7 * 6, 42);
  EXPECT_EQ(7 * 7, 429);
}

TEST(HelloTest, BasicAssertions2) {
  // Expect two strings not to be equal.
  // 期望两个字符串不相等。
  // EXPECT 是 Google Test 中的前缀
  // STR 表示这个断言适用于 C 风格字符串（即 const char *）
  // NE 表示 Not Equal（不相等）
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  // 期望相等
  EXPECT_EQ(7 * 6, 42);
  EXPECT_EQ(7 * 7, 49);
}

// C 风格字符串的比较不能直接使用 == 运算符，而是需要使用诸如 strcmp
// 之类的函数。 在 C++ 中 C 风格字符串（即以 null 结尾的字符数组，通常表示为
// const char * 类型） 是通过指针来表示和操作的。因此，直接使用 ==
// 运算符来比较两个 C 风格字符串并不能得到预期的结果。 这是因为 ==
// 运算符会比较两个指针的地址，而不是比较字符串的内容
/*
const char* str1 = "hello";
const char* str2 = "hello";

if (str1 == str2)
{
    // 这里的条件不会成立
    // 因为 str1 和 str2 是两个不同的指针变量，它们存储的是不同的地址
}

尽管 str1 和 str2 存储的内容都是
"hello"，但它们实际上是两个不同的指针变量，它们在内存中的地址不同，因此 ==
运算符会返回 false。

为了比较两个 C 风格字符串的内容，需要使用专门用于字符串比较的函数，例如
strcmp，其声明在 <cstring> 头文件中：
#include <cstring>

const char* str1 = "hello";
const char* str2 = "hello";

if (strcmp(str1, str2) == 0)
{
    // 这里的条件会成立
    // strcmp 函数会比较两个字符串的内容是否完全相同，返回值为 0 表示相等
}

strcmp
函数会逐个比较两个字符串中的字符，直到找到不相等的字符或者达到字符串末尾。如果两个字符串完全相同，则返回值为
0；如果不同，则返回值为一个非零的整数，这个整数的正负号表示了第一个不同字符的
ASCII 码差值。
*/