/*
 * pwm.c
 *
 *  Created on: 2024年1月22日
 *      Author: lenovo
 */


#include "pwm.h"



void Motor_Init(void)
{

    pwm_init(PWM_CH3, 17000, 0);                      //电机  初始化 PWM 通道 频率 17KHz 初始占空比 0%

    pwm_init(Servo_CH1, 50, 750);                    //舵机
    }
