#include "Interface.h"


int flight()
{
	int a=10;
	GPIO_InitTypeDef  GPIO_InitStruct;//定义一个端口初始化结构体
	a++;
	
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);//打开GPIOA口时钟
  GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;//设置为推挽输出
  GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;//设置输出频率50M
  GPIO_InitStruct.GPIO_Pin=GPIO_Pin_13;//指定第8脚
  GPIO_Init(GPIOC,&GPIO_InitStruct);//初始化GPIOA.8      
  GPIO_SetBits( GPIOC,  GPIO_Pin_13);//置高GPIOA.8，关闭LED
	return 0;
}






