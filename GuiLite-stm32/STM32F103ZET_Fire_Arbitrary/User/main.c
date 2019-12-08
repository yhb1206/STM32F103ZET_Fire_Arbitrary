/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   LCD显示英文
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

void delay_ms(u16 nms);
void SysTick_Init(void);


//Transfer GuiLite 32 bits color to your LCD color
#define GL_RGB_32_to_16(rgb) (((((unsigned int)(rgb)) & 0xFF) >> 3) | ((((unsigned int)(rgb)) & 0xFC00) >> 5) | ((((unsigned int)(rgb)) & 0xF80000) >> 8))

//Encapsulate your LCD driver:
void gfx_draw_pixel(int x, int y, unsigned int rgb)
{
	LCD_SetTextColor(GL_RGB_32_to_16(rgb));
	ILI9341_SetPointPixel(x, y);
}
//Implement it, if you have more fast solution than drawing pixels one by one.
//void gfx_fill_rect(int x0, int y0, int x1, int y1, unsigned int rgb){}

//UI entry
struct EXTERNAL_GFX_OP
{
	void (*draw_pixel)(int x, int y, unsigned int rgb);
	void (*fill_rect)(int x0, int y0, int x1, int y1, unsigned int rgb);
} my_gfx_op;
extern void startHelloWave(void* phy_fb, int width, int height, int color_bytes, struct EXTERNAL_GFX_OP* gfx_op);

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main ( void )
{
	SysTick_Init();//1ms的systick中断标志置起设置，以配合delay_ms的精确
	ILI9341_Init ();         //LCD 初始化

	USART_Config();		
	
	printf("\r\n ********** guilite例程*********** \r\n"); 
	
 //其中0、3、5、6 模式适合从左至右显示文字，
 //不推荐使用其它模式显示文字	其它模式显示文字会有镜像效果			
 //其中 6 模式为大部分液晶例程的默认显示方向   
   ILI9341_GramScan ( 6 );
	
	//Link your LCD driver & start UI:
	my_gfx_op.draw_pixel = gfx_draw_pixel;
	my_gfx_op.fill_rect = NULL;//gfx_fill_rect;
	startHelloWave(NULL, 240, 320, 2, &my_gfx_op);	
}


void SysTick_Init(void)
{
	/*根据时钟频率进行设置systick，保证适应任何系统时钟 
	 *SystemFrequency / 1000    1ms中断标志置起一次
	 * SystemFrequency / 100000	 10us中断标志置起一次
	 * SystemFrequency / 1000000 1us中断标志置起一次
	 */
    RCC_ClocksTypeDef  RccClocks;
    uint32_t SystemClockFrequency = 0, u32Cnt = 0;

    RCC_GetClocksFreq(&RccClocks);

    SystemClockFrequency = RccClocks.HCLK_Frequency;
 
    u32Cnt = SystemClockFrequency/1000;
    
    if ((u32Cnt - 1) > SysTick_LOAD_RELOAD_Msk)    /* Reload value impossible */
    { 
        /* Capture error */ 
        while (1);
    }
    else
    {
        SysTick->LOAD  = u32Cnt  - 1;                                  /* set reload register */
        NVIC_SetPriority (SysTick_IRQn, (1<<__NVIC_PRIO_BITS) - 1);  /* set Priority for Systick Interrupt */
        SysTick->VAL   = 0;                                          /* Load the SysTick Counter Value */
        SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk;                                               
        SysTick->CTRL &= ~(SysTick_CTRL_ENABLE_Msk | SysTick_CTRL_TICKINT_Msk); /* Disable SysTick IRQ and SysTick Timer */
    }
}

void delay_ms(u16 ms)
{
	uint32_t i;
    // 配置 counter 计数器的值
    SysTick->VAL   = 0;
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk; /* Enable SysTick Timer,But diable SysTick IRQ*/
    for(i=0;i<ms;i++)
    {
        // 当计数器的值减小到0的时候，CRTL寄存器的位16会置1
        // 当置1时，读取该位会清0
        while( !((SysTick->CTRL)&(1<<16)) );
    }
    // 关闭SysTick定时器
    SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}

/* ------------------------------------------end of file---------------------------------------- */

