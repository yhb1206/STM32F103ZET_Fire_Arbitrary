#ifndef  __TEST_H
#define	 __TEST_H



#include "stm32f10x.h"



/********************************** �û���Ҫ���õĲ���**********************************/
//Ҫ���ӵ��ȵ�����ƣ���WIFI����
#define      macUser_ESP8266_ApSsid           "love" 

//Ҫ���ӵ��ȵ����Կ
#define      macUser_ESP8266_ApPwd            "yhb8288400" 

//Ҫ���ӵķ������� IP�������Ե�IP
#define      macUser_ESP8266_TcpServer_IP     "192.168.43.37" 

//Ҫ���ӵķ������Ķ˿�
#define      macUser_ESP8266_TcpServer_Port    "8080"         



/********************************** �ⲿȫ�ֱ��� ***************************************/
extern volatile uint8_t ucTcpClosedFlag;



/********************************** ���Ժ������� ***************************************/
void                     ESP8266_StaTcpClient_UnvarnishTest  ( void );



#endif

