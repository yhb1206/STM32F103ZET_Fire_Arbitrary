/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   液晶屏显示方向说明程序
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 F103-霸道 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
 
#include "stm32f10x.h"
#include "./lcd/bsp_ili9341_lcd.h"
#include "./usart/bsp_usart.h" 
#include <stdio.h>
#include "Includes.h"


uc8 gu08EncodData[600] = "我爱你，亲爱的姑娘！ \
      人生自古谁无死，留取丹心照汗青。青青河边草，悠悠天不老，野火烧不尽,相思情未了！";


#define 	 LCD_X_S    (81)
#define 	 LCD_Y_S    (81)
/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main ( void )
{
	u08 len;
	ILI9341_Init ();         //LCD 初始化

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

