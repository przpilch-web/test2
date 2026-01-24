

typedef enum
{
    FAN_OK = 0,
    FAN_ERR = 1,
}FanErrorStatus_t;

int speed;

void increaseSpeed(void);

FanErrorStatus_t setSpeed(int newSpeed);

void resetSpeed(void);
