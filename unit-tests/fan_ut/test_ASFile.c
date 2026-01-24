#include "unity.h"
#include "unity_fixture.h"
#include "cmock.h"

#include "fan.h"

TEST_GROUP(test_fan);

TEST_SETUP(test_fan)
{
    speed = 0u;
}

TEST_TEAR_DOWN(test_fan)
{

}

TEST(test_fan, test_resetSpeed)
{
    /* Precondition */
    speed = 100u;

    /* Tested function call */
    resetSpeed();

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(0U, speed);
}

TEST(test_fan, test_increaseSpeed)
{
    /* Precondition */
    speed = 100u;

    /* Tested function call */
    increaseSpeed();

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(101U, speed);
}

TEST(test_fan, test_increaseSpeed_2)
{
    /* Precondition */

    /* Tested function call */
    increaseSpeed();

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(1U, speed);
}

TEST(test_fan, test_setSpeed_newSpeedEqualTo0)
{
    /* Precondition */
    int newSpeed = 0u;
    FanErrorStatus_t testRet = FAN_OK;

    /* Tested function call */
    testRet = setSpeed(newSpeed);

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(0U, speed);
    TEST_ASSERT_EQUAL_INT(FAN_ERR, testRet);
}

TEST(test_fan, test_setSpeed_newSpeedEqualTo1000)
{
    /* Precondition */
    int newSpeed = 1000u;
    FanErrorStatus_t testRet = FAN_OK;

    /* Tested function call */
    testRet = setSpeed(newSpeed);

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(0U, speed);
    TEST_ASSERT_EQUAL_INT(FAN_ERR, testRet);
}

TEST(test_fan, test_setSpeed_newSpeedCorrect)
{
    /* Precondition */
    int newSpeed = 500u;
    FanErrorStatus_t testRet = FAN_OK;

    /* Tested function call */
    for (int i = 0; i < 98; i++)
    {
        testRet = setSpeed(newSpeed);
    }

    /* Asserta */
    TEST_ASSERT_EQUAL_INT(500U, speed);
    TEST_ASSERT_EQUAL_INT(FAN_OK, testRet);
}
