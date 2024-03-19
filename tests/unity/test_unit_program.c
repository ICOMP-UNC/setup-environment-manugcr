#include <unity.h>
#include <logic.h>

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(6, add(2, 3));
}

void test_logic_subtract(void)
{
    TEST_ASSERT_EQUAL(2, subtract(5, 3));
    TEST_ASSERT_NOT_EQUAL(3, subtract(5, 3));
}

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(2, 3));
    TEST_ASSERT_NOT_EQUAL(7, multiply(2, 3));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(3, divide(6, 2));
    TEST_ASSERT_NOT_EQUAL(4, divide(6, 2));
}

void setUp(void) 
{

}

void tearDown(void) 
{

}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_subtract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
