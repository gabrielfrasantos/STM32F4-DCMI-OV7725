/*********************** HNIT 3103 Application Team **************************
 * �� �� �� ��hnit_led.c
 * ��    �� ��LED���������         
 * ʵ��ƽ̨ ��STM32F407������
 * �� �� �� ��ST1.4.0
 * ʱ    �� ��2016.3.19
 * ��    �� ��3103�����Ŷ�
 * �޸ļ�¼ ����
******************************************************************************/

#include "hnit_led.h" 
	 
/*****************************************************************************
*	�� �� ��: LED_Init
*	��    ��: LED GPIO��ʼ��
*   ���ú�����GPIO��⺯��
*	��    �Σ���
*	�� �� ֵ: ��
******************************************************************************/	
void LED_Init(void)
{    	 
    GPIO_InitTypeDef  GPIO_InitStructure;

    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);  //ʹ��GPIOFʱ��

    /* GPIOF9,F10��ʼ������ */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;         //��ͨ���ģʽ
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;        //�������
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;    //100MHz
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;          //����
    GPIO_Init(GPIOF, &GPIO_InitStructure);                //��ʼ��
	
    GPIO_SetBits(GPIOF,GPIO_Pin_9 | GPIO_Pin_10);   //GPIOF9,F10���øߣ�����
}

/******************************* END OF FILE *********************************/