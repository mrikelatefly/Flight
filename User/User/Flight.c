#include "Interface.h"


int flight()
{
	int a=10;
	GPIO_InitTypeDef  GPIO_InitStruct;//����һ���˿ڳ�ʼ���ṹ��
	a++;
	
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);//��GPIOA��ʱ��
  GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;//����Ϊ�������
  GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;//�������Ƶ��50M
  GPIO_InitStruct.GPIO_Pin=GPIO_Pin_13;//ָ����8��
  GPIO_Init(GPIOC,&GPIO_InitStruct);//��ʼ��GPIOA.8      
  GPIO_SetBits( GPIOC,  GPIO_Pin_13);//�ø�GPIOA.8���ر�LED
	return 0;
}






