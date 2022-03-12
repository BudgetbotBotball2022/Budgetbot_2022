#include <kipr/wombat.h>
// Code Wombat Controller Robot with claw
// worked on 11.03.2022 von SJ und DR
int main()
{
enable_servos();
set_servo_position(0,1650); // servo arm
set_servo_position(1,0); // servo claw
msleep(300);
while(analog(0) < 2900) // analog; measure distance
{
motor(0,50);
motor(3,50);
}
motor(0,50);
motor(1,50); // first number is the motor; second number is the power
msleep(600);
motor(0,0);
motor(3,0);
msleep(500);
set_servo_position(1,900); //0 open
msleep(500);
set_servo_position(0,1050); //maximum limit stop at 2047
msleep(500);
motor(0,-50);
motor(3,-50);
msleep(1300);
motor(0,0);
motor(3,0);
motor(0,-50);
motor(3,50);
msleep(3400);
motor(0,0);
motor(3,0);
msleep(100);
set_servo_position(0,1600);
msleep(500);
set_servo_position(1,0);
msleep(500);
motor(0,-50);
motor(3,-50);
msleep(1500);
motor(3,0);
motor(0,0);
return 0;
}
