#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(test_fan)
{
    RUN_TEST_CASE(test_fan, test_resetSpeed);
    RUN_TEST_CASE(test_fan, test_increaseSpeed);
    RUN_TEST_CASE(test_fan, test_increaseSpeed_2);
    RUN_TEST_CASE(test_fan, test_setSpeed_newSpeedEqualTo0);
    RUN_TEST_CASE(test_fan, test_setSpeed_newSpeedEqualTo1000);
    RUN_TEST_CASE(test_fan, test_setSpeed_newSpeedCorrect);
}

