/*
 * control.c
 *
 *  Created on: 2024Äê1ÔÂ22ÈÕ
 *      Author: lenovo
 */

#include "control.h"

extern uint8 key_data[9];
uint32 pwm_duty=0;
uint32 Servo_duty=750;
void Remote_control(void)
{
    if(key_data[0]=='@'&&key_data[7]=='\r'&&key_data[8]=='\n')
    {
        if(key_data[1]=='1')forword();
        if(key_data[2]=='1')back();
        if(key_data[1]=='0'&&key_data[2]=='0')stop();
        if(key_data[3]=='1')turn_right();
        if(key_data[4]=='1')turn_left();
        if(key_data[5]=='1')Speed_up();
        if(key_data[6]=='1')Speed_down();
        pwm_set_duty(Servo_CH1,Servo_duty);
        pwm_set_duty(PWM_CH3,pwm_duty);
    }
    }


void forword(void)
{
    gpio_init(P21_4, GPO, GPIO_HIGH, GPO_PUSH_PULL);
}
void back(void)
{
    gpio_init(P21_4, GPO, GPIO_LOW, GPO_PUSH_PULL);
}
void turn_right(void)
{
    Servo_duty+=10;
    if(Servo_duty>=1250)Servo_duty=1250;

}
void turn_left(void)
{
    Servo_duty-=10;
    if(Servo_duty<=250)Servo_duty=250;
}
void Speed_up(void)
{
    pwm_duty+=100;
    if(pwm_duty>=10000)pwm_duty=10000;

}
void Speed_down(void)
{
    pwm_duty-=100;
    if(pwm_duty<=1000)pwm_duty=1000;
}
void stop(void)
{
    gpio_init(P21_4, GPO, GPIO_LOW, GPO_PUSH_PULL);
}
