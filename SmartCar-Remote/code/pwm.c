/*
 * pwm.c
 *
 *  Created on: 2024��1��22��
 *      Author: lenovo
 */


#include "pwm.h"



void Motor_Init(void)
{

    pwm_init(PWM_CH3, 17000, 0);                      //���  ��ʼ�� PWM ͨ�� Ƶ�� 17KHz ��ʼռ�ձ� 0%

    pwm_init(Servo_CH1, 50, 750);                    //���
    }
