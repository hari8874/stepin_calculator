#include "unity.h"
#include <fun.h>

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_modulus);
  RUN_TEST(test_power);
  RUN_TEST(test_factorial);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addition(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}

void test_subtraction(void) {
  TEST_ASSERT_EQUAL(-3, sub(0, 3));
  

}
void test_multiplication(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  

}

void test_divide(void) {
  TEST_ASSERT_EQUAL(1, divide(2, 2));
  
 
}

void test_modulus(void) {
    TEST_ASSERT_EQUAL(0, modf(2, 2));

}

void test_power(void) {
 TEST_ASSERT_EQUAL(4, powf(2, 2));

}

void test_factorial(void) {
 TEST_ASSERT_EQUAL(6, factorial(3));

}