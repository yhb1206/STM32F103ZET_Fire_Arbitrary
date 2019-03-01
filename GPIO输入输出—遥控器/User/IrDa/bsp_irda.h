#ifndef __IRDA_H
#define	__IRDA_H



#include "stm32f10x.h"
#include "Common.h"



#define      IRDA_ID                                     0



/************************** IrDa 连接引脚定义********************************/
#define      macIrDa_EXTI_SCK_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define      macIrDa_EXTI_GPIO_CLK                       RCC_APB2Periph_GPIOD

#define      macIrDa_EXTI_GPIO_PORT                      GPIOD   
#define      macIrDa_EXTI_GPIO_PIN                       GPIO_Pin_7

#define      macIrDa_EXTI_SOURCE_PORT                    GPIO_PortSourceGPIOD
#define      macIrDa_EXTI_SOURCE_PIN                     GPIO_PinSource7
#define      macIrDa_EXTI_LINE                           EXTI_Line7

#define      macIrDa_EXTI_IRQ                            EXTI9_5_IRQn
#define      macIrDa_EXTI_INT_FUNCTION                   EXTI9_5_IRQHandler



/************************** IrDa 函数宏定义********************************/
#define      macIrDa_DATA_IN()	                             GPIO_ReadInputDataBit ( macIrDa_EXTI_GPIO_PORT, macIrDa_EXTI_GPIO_PIN )



/************************** IrDa 函数声明 ********************************/
void                     IrDa_Init                       ( void );
uint8_t                  IrDa_Get_Pulse_Time             ( void );
uint8_t                  IrDa_Process                    ( void );



#endif /* __IRDA_H */
