#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 

//#define USART_REC_LEN  			200  	//�����������ֽ��� 200
//#define EN_USART1_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
	  	
//extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
//extern u16 USART_RX_STA;         		//����״̬���	

//����봮���жϽ��գ��벻Ҫע�����º궨��
void uart1_init(u32 bound);
void uart5_init(u32 bound);
void uart4_init(u32 bound);

void uart1_send_bit(char data);

void uart4_send(char *date);

#endif

