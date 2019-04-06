#ifndef __ENCODE_H__
#define __ENCODE_H__

#include "DataType.h"


/*QR��ά�����ߴ�汾ѡ�񣬷�Χ1-40���汾��Ӧ�ߴ繫ʽ����ά�����ص�߳� = 21+���汾��-1��*4
����汾15�����ά�����ص�Ϊ��21+(15-1)*4 = 77,���Զ�ά��ߴ�Ϊ77*77��
������ת�������LCD��ʾΪ80*80
*/
#define	QR_VERSION	    (15)/*��д��Χ�� 1�� QR_VERSION ��40 */

/*4�־���ȼ����ɻָ������ֱ���Ϊ��*/
#define QR_LEVEL_L	0	/*7%������ɱ�����*/
#define QR_LEVEL_M	1	/*15%������ɱ�����*/
#define QR_LEVEL_Q	2	/*25%������ɱ�����*/
#define QR_LEVEL_H	3	/*30%������ɱ�����*/
    
/*����ȼ�ѡ��Ĭ��Ϊ��ͣ�ע�⣺����ȼ��ı��Ӱ���Ӧ�汾��������������������*/
#define QR_LEVEL	QR_LEVEL_L

#if QR_LEVEL == QR_LEVEL_L/*����ȼ�L�µľ������������궨��*/
/*����ȼ�L�£����汾����������,����MAX_CODEBLOCK����ѡ��*/
/*������ȼ�����L�����������к�ֵ��ı�򲻿���*/
#define QR_V1_DATA_MAX    (19)
#define QR_V2_DATA_MAX    (34)
#define QR_V3_DATA_MAX    (55)
#define QR_V4_DATA_MAX    (80)
#define QR_V5_DATA_MAX    (108)
#define QR_V6_DATA_MAX    (136)
#define QR_V7_DATA_MAX    (156)
#define QR_V8_DATA_MAX    (194)
#define QR_V9_DATA_MAX    (232)
#define QR_V10_DATA_MAX   (274)
#define QR_V11_DATA_MAX   (324)
#define QR_V12_DATA_MAX   (370)
#define QR_V13_DATA_MAX   (428)
#define QR_V14_DATA_MAX   (461)
#define QR_V15_DATA_MAX   (523)
#define QR_V16_DATA_MAX   (589)
#define QR_V17_DATA_MAX   (647)
#define QR_V18_DATA_MAX   (721)
#define QR_V19_DATA_MAX   (795)
#define QR_V20_DATA_MAX   (861)
#define QR_V21_DATA_MAX   (932)
#define QR_V22_DATA_MAX   (1006)
#define QR_V23_DATA_MAX   (1094)
#define QR_V24_DATA_MAX   (1174)
#define QR_V25_DATA_MAX   (1276)
#define QR_V26_DATA_MAX   (1370)
#define QR_V27_DATA_MAX   (1468)
#define QR_V28_DATA_MAX   (1531)
#define QR_V29_DATA_MAX   (1631)
#define QR_V30_DATA_MAX   (1735)
#define QR_V31_DATA_MAX   (1843)
#define QR_V32_DATA_MAX   (1955)
#define QR_V33_DATA_MAX   (2071)
#define QR_V34_DATA_MAX   (2191)
#define QR_V35_DATA_MAX   (2306)
#define QR_V36_DATA_MAX   (2434)
#define QR_V37_DATA_MAX   (2566)
#define QR_V38_DATA_MAX   (2702)
#define QR_V39_DATA_MAX   (2812)
#define QR_V40_DATA_MAX   (2956)

/*����ȼ�L�£����汾����������,����MAX_CODEBLOCK����ѡ��*/
/*������ȼ�����L�����������к�ֵ��ı�򲻿���*/
#define QR_V1_ERROR_CODE_MAX    (7)
#define QR_V2_ERROR_CODE_MAX    (10)
#define QR_V3_ERROR_CODE_MAX    (15)
#define QR_V4_ERROR_CODE_MAX    (20)
#define QR_V5_ERROR_CODE_MAX    (26)
#define QR_V6_ERROR_CODE_MAX    (36)
#define QR_V7_ERROR_CODE_MAX    (40)
#define QR_V8_ERROR_CODE_MAX    (48)
#define QR_V9_ERROR_CODE_MAX    (60)
#define QR_V10_ERROR_CODE_MAX   (72)
#define QR_V11_ERROR_CODE_MAX   (80)
#define QR_V12_ERROR_CODE_MAX   (96)
#define QR_V13_ERROR_CODE_MAX   (104)
#define QR_V14_ERROR_CODE_MAX   (120)
#define QR_V15_ERROR_CODE_MAX   (132)
#define QR_V16_ERROR_CODE_MAX   (144)
#define QR_V17_ERROR_CODE_MAX   (168)
#define QR_V18_ERROR_CODE_MAX   (180)
#define QR_V19_ERROR_CODE_MAX   (196)
#define QR_V20_ERROR_CODE_MAX   (224)
#define QR_V21_ERROR_CODE_MAX   (224)
#define QR_V22_ERROR_CODE_MAX   (252)
#define QR_V23_ERROR_CODE_MAX   (270)
#define QR_V24_ERROR_CODE_MAX   (300)
#define QR_V25_ERROR_CODE_MAX   (312)
#define QR_V26_ERROR_CODE_MAX   (336)
#define QR_V27_ERROR_CODE_MAX   (360)
#define QR_V28_ERROR_CODE_MAX   (390)
#define QR_V29_ERROR_CODE_MAX   (420)
#define QR_V30_ERROR_CODE_MAX   (450)
#define QR_V31_ERROR_CODE_MAX   (480)
#define QR_V32_ERROR_CODE_MAX   (510)
#define QR_V33_ERROR_CODE_MAX   (540)
#define QR_V34_ERROR_CODE_MAX   (570)
#define QR_V35_ERROR_CODE_MAX   (570)
#define QR_V36_ERROR_CODE_MAX   (600)
#define QR_V37_ERROR_CODE_MAX   (630)
#define QR_V38_ERROR_CODE_MAX   (660)
#define QR_V39_ERROR_CODE_MAX   (720)
#define QR_V40_ERROR_CODE_MAX   (750)
#elif QR_LEVEL == QR_LEVEL_M/*����ȼ�M�µľ������������궨��*/
/*������*/

#elif QR_LEVEL == QR_LEVEL_Q/*����ȼ�Q�µľ������������궨��*/
/*������*/

#elif QR_LEVEL == QR_LEVEL_Q/*����ȼ�Q�µľ������������궨��*/
/*������*/

#endif 

/*������;�����ѡ��*/
#if   QR_VERSION == 1
#define	QR_DATA_CODE_MAX	QR_V1_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V1_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 2
#define	QR_DATA_CODE_MAX	QR_V2_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V2_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 3
#define	QR_DATA_CODE_MAX	QR_V3_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V3_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 4
#define	QR_DATA_CODE_MAX	QR_V4_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V4_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 5
#define	QR_DATA_CODE_MAX	QR_V5_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V5_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 6
#define	QR_DATA_CODE_MAX	QR_V6_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V6_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 7
#define	QR_DATA_CODE_MAX	QR_V7_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V7_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 8
#define	QR_DATA_CODE_MAX	QR_V8_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V8_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 9
#define	QR_DATA_CODE_MAX	QR_V9_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V9_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 10
#define	QR_DATA_CODE_MAX	QR_V10_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V10_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 11
#define	QR_DATA_CODE_MAX	QR_V11_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V11_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 12
#define	QR_DATA_CODE_MAX	QR_V12_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V12_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 13
#define	QR_DATA_CODE_MAX	QR_V13_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V13_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 14
#define	QR_DATA_CODE_MAX	QR_V14_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V14_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 15
#define	QR_DATA_CODE_MAX	QR_V15_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V15_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 16
#define	QR_DATA_CODE_MAX	QR_V16_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V16_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 17
#define	QR_DATA_CODE_MAX	QR_V17_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V17_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 18
#define	QR_DATA_CODE_MAX	QR_V18_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V18_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 19
#define	QR_DATA_CODE_MAX	QR_V19_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V19_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 20
#define	QR_DATA_CODE_MAX	QR_V20_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V20_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 21
#define	QR_DATA_CODE_MAX	QR_V21_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V21_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 22
#define	QR_DATA_CODE_MAX	QR_V22_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V22_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 23
#define	QR_DATA_CODE_MAX	QR_V23_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V23_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 24
#define	QR_DATA_CODE_MAX	QR_V24_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V24_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 25
#define	QR_DATA_CODE_MAX	QR_V25_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V25_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 26
#define	QR_DATA_CODE_MAX	QR_V26_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V26_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 27
#define	QR_DATA_CODE_MAX	QR_V27_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V27_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 28
#define	QR_DATA_CODE_MAX	QR_V28_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V28_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 29
#define	QR_DATA_CODE_MAX	QR_V29_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V29_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 30
#define	QR_DATA_CODE_MAX	QR_V30_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V30_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 31
#define	QR_DATA_CODE_MAX	QR_V31_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V31_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 32
#define	QR_DATA_CODE_MAX	QR_V32_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V32_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 33
#define	QR_DATA_CODE_MAX	QR_V33_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V33_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 34
#define	QR_DATA_CODE_MAX	QR_V34_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V34_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 35
#define	QR_DATA_CODE_MAX	QR_V35_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V35_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 36
#define	QR_DATA_CODE_MAX	QR_V36_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V36_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 37
#define	QR_DATA_CODE_MAX	QR_V37_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V37_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 38
#define	QR_DATA_CODE_MAX	QR_V38_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V38_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 39
#define	QR_DATA_CODE_MAX	QR_V39_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V39_ERROR_CODE_MAX/*������*/
#elif QR_VERSION == 40
#define	QR_DATA_CODE_MAX	QR_V40_DATA_MAX/*������*/
#define	QR_ERROR_CODE_MAX	QR_V40_ERROR_CODE_MAX/*������*/
#endif

/*������ʽ*/
#define QR_MODE_NUMERAL		0
#define QR_MODE_ALPHABET	1
#define QR_MODE_8BIT		2
#define QR_MODE_KANJI		3
#define QR_MODE_CHINESE		4

/*Number of bits per length field*/
/*Encoding		Ver.1�C9		10�C26		27�C40*/
/*Numeric		10			    12			14*/
/*Alphanumeric	9			    11			13*/
/*Byte			8			    16			16*/
/*Kanji			8			    10			12*/
/*Chinese*/
/*P17 �ַ�����ָʾ��λ��*/
#define QR_VRESION_S	(0)
#define QR_VRESION_M	(1)
#define QR_VRESION_L	(2)

#define QR_MARGIN	    (4)
#define	QR_VER1_SIZE	(21)/*��1�汾��������*/

/*����QR�汾�Ŷ�Ӧ�Ķ�ά�������version��ά��汾��*/
#define QrSideCal(version)    (QR_VER1_SIZE+QR_MARGIN*((version)-1))

/*�����ά�������Ӧ��ҳ����Side��ά�����*/
#define QrPageCal(Side)   (((Side)%8 == 0) ? ((Side)/8) : ((Side)/8 + 1))

/*Ŀǰ����ȼ�ΪL��͵ȼ���������ȼ���ΪL��������ĺ�MAX_DATACODEWORD��MAX_CODEBLOCK��Ҫ�鿴��Ӧ�汾�������������������������޸�*/
#define MAX_ALLCODEWORD	    (QR_DATA_CODE_MAX+QR_ERROR_CODE_MAX)/*3706/400/ �ھ���ȼ�ΪL�µ�ȫ���������������֣���������P14,P33-P42 P13��1��������[����]* (E) (VER:40), ��������Ϊ8λ*/
#define MAX_DATACODEWORD	QR_DATA_CODE_MAX                        /*2956/400/ �ھ���ȼ�ΪL����������P25-P31 ��7-��11 �����Ϣ����(Ver��40-L)����������Ϊ8λ*/
#define MAX_CODEBLOCK		QR_ERROR_CODE_MAX	               /*���������� Ver��36.37.38_L_�ڶ���*/
#define MAX_MODULESIZE		QrSideCal(QR_VERSION)                  /* 21:Version=1,����ַ�=17(8.5������)*/ /*P14 ÿ�ߵ�ģ������A�� (VER:40   ) Ver��40 = 21+��Ver-1��*4*/
								/* 25:Version=2,����ַ�=32(16������)*/
								/* 29:Version=3,����ַ�=49(24.5������)*/
								/* 33:Version=4,����ַ�=78(39������)*/
								/* 37:Version=5,����ַ�=106(53������)*/
								/* 41:Version=6,����ַ�=134(67������)*/
							 	/* 45:Version=7,����ַ�=154(77������)*/
							 	/* 49:Version=8,����ַ�=192(96������)*/
								/* 53:Version=9*/
                                /* 57:Version=10*/
                                /* 61:Version=11*/
                                /* 65:Version=12*/
                                /* 69:Version=13*/
                                /* 73:Version=14*/
                                /* 77:Version=15*/

#ifndef NULL
	#define NULL 0
#endif

#ifndef GAL_NO
	#define GAL_NO 0
#endif

#ifndef GAL_YES
	#define GAL_YES 1
#endif

#ifndef WORNIG_EXCESS
	#define WORNIG_EXCESS 2
#endif

#ifndef  WORNIG_LACK
	#define  WORNIG_LACK 3
#endif

#define CHINESE_SYMBOL    GAL_YES/*��/�������ַ��жϣ��򿪹ر�Ŀǰû������ʲô��ͬ*/

/*
;***************************************************************************
;                                  ȫ�ֱ���
;***************************************************************************
*/
/*typedef unsigned char   		bool;*/      /* 8-bit*/


#if(CHINESE_SYMBOL == GAL_YES)
#ifndef BYTE
typedef unsigned char  BYTE;
#endif

#ifndef WORD
typedef unsigned int  WORD;
#endif
#endif

/*typedef enum {FALSE = 0, TRUE = !FALSE} bool;*/


typedef struct
{
	u16	 ncRSBlock;		/*����Ŀ���*/
	u16	 ncAllCodeWord;	/*��������*/
	u16	 ncDataCodeWord;	/*ָ������ȼ��µ�����������*/
}RS_BLOCKINFO;

typedef struct
{
	u16	 nVersionNo;			/*ver 1~40*/
	u16	 ncAllCodeWord; 		/*��������=��������+��������*/

	u16	 ncDataCodeWord[4];	/*ָ������ȼ��µ���������(0=L,1=M,2=Q,3=H)*/
	u16	 ncAlignPoint;		/*P61 ��E1 У��ͼ�� ����*/
	u16	 nAlignPoint[6];		/*P61 ��E1 У��ͼ��	��������*/
	/*(0=L,1=M,2=Q,3=H)*/
	RS_BLOCKINFO RS_BlockInfo1[4];	/*�����1*/
	RS_BLOCKINFO RS_BlockInfo2[4];	/*�����2*/
}QR_VERSIONINFO;



extern u08 gu08MbyModuleData[MAX_MODULESIZE][MAX_MODULESIZE];/*�趨�Ķ�ά�����ߴ�*/
extern u08 gu08MnSymbleSize;/*ת�����ʵ�ʶ�ά��ߴ磬����ʱ�ɲ鿴���*/

extern u08 EncodeData(uc8 *lpsSource, u16 u16len);


#endif


