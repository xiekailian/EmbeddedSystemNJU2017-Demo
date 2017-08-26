#include "PostureControl.h"
#include "MotorDriver.h"

using MotorDriver::forward;
using MotorDriver::backward;
using MotorDriver::stop;

void PostureControl::turnLeftALittle()
{
	backward(MOTOR_LEFT_FRONT,180);
	backward(MOTOR_LEFT_BACK,180);
	forward(MOTOR_RIGHT_FRONT,180);
	forward(MOTOR_RIGHT_BACK,180);
	delay(30);
	forward(MOTOR_LEFT_FRONT);
	forward(MOTOR_LEFT_BACK);
	forward(MOTOR_RIGHT_FRONT);
	forward(MOTOR_RIGHT_BACK);
}

void PostureControl::turnRightALittle()
{
	forward(MOTOR_LEFT_FRONT,180);
	forward(MOTOR_LEFT_BACK,180);
	backward(MOTOR_RIGHT_FRONT,180);
	backward(MOTOR_RIGHT_BACK,180);
	delay(30);
	forward(MOTOR_LEFT_FRONT);
	forward(MOTOR_LEFT_BACK);
	forward(MOTOR_RIGHT_FRONT);
	forward(MOTOR_RIGHT_BACK);
}