#include "fan.h"

int speed = 0u;

void increaseSpeed(void)
{
    speed++;
}

FanErrorStatus_t setSpeed(int newSpeed)
{
    FanErrorStatus_t ret;
    static int counter = 0u;

    if ((newSpeed > 0) && (newSpeed < 1000))
    {
        if (counter >= 100)
        {
            speed = newSpeed;
            ret = FAN_OK;
            counter = 0u;
        }
    }
    else
    {
        ret = FAN_ERR;
    }

    counter++;
 
    return ret;
}

void resetSpeed(void)
{
    speed = 0u;
}