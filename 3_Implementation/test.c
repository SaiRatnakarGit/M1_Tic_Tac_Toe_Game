#include "unity/unity.h"
#include "inc/brain.h"
void setUp()
{
}
void tearDown()
{
}



void test_brain(){
  char board[] = {'1', '2', '3', '4', '5', '6', 'X', 'X', 'X'};

  TEST_ASSERT_EQUAL(1,check(board));
}

int main(void)
{
  UNITY_BEGIN();
  
  
  RUN_TEST(test_brain);
  return UNITY_END();
}
