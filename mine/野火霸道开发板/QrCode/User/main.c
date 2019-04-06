/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   Һ������ʾ����˵������
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ�� F103-�Ե� STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
 
#include "stm32f10x.h"
#include "./lcd/bsp_ili9341_lcd.h"
#include "./usart/bsp_usart.h" 
#include <stdio.h>
#include "Includes.h"


uc8 gu08EncodData[600] = "�Ұ��㣬�װ��Ĺ�� \
      �����Թ�˭��������ȡ�����պ��ࡣ����ӱ߲ݣ������첻�ϣ�Ұ���ղ���,��˼��δ�ˣ�";


#define 	 LCD_X_S    (81)
#define 	 LCD_Y_S    (81)
/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main ( void )
{
	u08 len;
	ILI9341_Init ();         //LCD ��ʼ��

	USART_Config();		
	
	len = EncodeData(gu08EncodData, strlen((const char *)gu08EncodData));
    if(len)
    {
		QrCode(LCD_X_S, LCD_Y_S, len, len);
	}
	while ( 1 )
	{
	
	}		
}



/* ------------------------------------------end of file---------------------------------------- */

