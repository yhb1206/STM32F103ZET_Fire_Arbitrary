#ifndef __ENCODE_H__
#define __ENCODE_H__

#include "DataType.h"


/*QR二维码最大尺寸版本选择，范围1-40，版本对应尺寸公式：二维码像素点边长 = 21+（版本号-1）*4
例如版本15，则二维码像素点为，21+(15-1)*4 = 77,所以二维码尺寸为77*77，
经数据转换输出的LCD显示为80*80
*/
#define	QR_VERSION	    (15)/*填写范围： 1≤ QR_VERSION ≤40 */

/*4种纠错等级，可恢复的码字比例为：*/
#define QR_LEVEL_L	0	/*7%的字码可被修正*/
#define QR_LEVEL_M	1	/*15%的字码可被修正*/
#define QR_LEVEL_Q	2	/*25%的字码可被修正*/
#define QR_LEVEL_H	3	/*30%的字码可被修正*/
    
/*纠错等级选择，默认为最低，注意：纠错等级改变会影响对应版本的数据码数、纠错码数*/
#define QR_LEVEL	QR_LEVEL_L

#if QR_LEVEL == QR_LEVEL_L/*纠错等级L下的纠错码和数据码宏定义*/
/*纠错等级L下，各版本数据码容量,供宏MAX_CODEBLOCK进行选择*/
/*若纠错等级不是L，则下面所有宏值需改变或不可用*/
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

/*纠错等级L下，各版本纠错码容量,供宏MAX_CODEBLOCK进行选择*/
/*若纠错等级不是L，则下面所有宏值需改变或不可用*/
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
#elif QR_LEVEL == QR_LEVEL_M/*纠错等级M下的纠错码和数据码宏定义*/
/*待补充*/

#elif QR_LEVEL == QR_LEVEL_Q/*纠错等级Q下的纠错码和数据码宏定义*/
/*待补充*/

#elif QR_LEVEL == QR_LEVEL_Q/*纠错等级Q下的纠错码和数据码宏定义*/
/*待补充*/

#endif 

/*数据码和纠错码选择*/
#if   QR_VERSION == 1
#define	QR_DATA_CODE_MAX	QR_V1_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V1_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 2
#define	QR_DATA_CODE_MAX	QR_V2_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V2_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 3
#define	QR_DATA_CODE_MAX	QR_V3_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V3_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 4
#define	QR_DATA_CODE_MAX	QR_V4_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V4_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 5
#define	QR_DATA_CODE_MAX	QR_V5_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V5_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 6
#define	QR_DATA_CODE_MAX	QR_V6_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V6_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 7
#define	QR_DATA_CODE_MAX	QR_V7_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V7_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 8
#define	QR_DATA_CODE_MAX	QR_V8_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V8_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 9
#define	QR_DATA_CODE_MAX	QR_V9_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V9_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 10
#define	QR_DATA_CODE_MAX	QR_V10_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V10_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 11
#define	QR_DATA_CODE_MAX	QR_V11_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V11_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 12
#define	QR_DATA_CODE_MAX	QR_V12_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V12_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 13
#define	QR_DATA_CODE_MAX	QR_V13_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V13_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 14
#define	QR_DATA_CODE_MAX	QR_V14_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V14_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 15
#define	QR_DATA_CODE_MAX	QR_V15_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V15_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 16
#define	QR_DATA_CODE_MAX	QR_V16_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V16_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 17
#define	QR_DATA_CODE_MAX	QR_V17_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V17_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 18
#define	QR_DATA_CODE_MAX	QR_V18_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V18_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 19
#define	QR_DATA_CODE_MAX	QR_V19_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V19_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 20
#define	QR_DATA_CODE_MAX	QR_V20_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V20_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 21
#define	QR_DATA_CODE_MAX	QR_V21_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V21_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 22
#define	QR_DATA_CODE_MAX	QR_V22_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V22_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 23
#define	QR_DATA_CODE_MAX	QR_V23_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V23_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 24
#define	QR_DATA_CODE_MAX	QR_V24_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V24_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 25
#define	QR_DATA_CODE_MAX	QR_V25_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V25_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 26
#define	QR_DATA_CODE_MAX	QR_V26_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V26_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 27
#define	QR_DATA_CODE_MAX	QR_V27_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V27_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 28
#define	QR_DATA_CODE_MAX	QR_V28_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V28_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 29
#define	QR_DATA_CODE_MAX	QR_V29_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V29_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 30
#define	QR_DATA_CODE_MAX	QR_V30_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V30_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 31
#define	QR_DATA_CODE_MAX	QR_V31_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V31_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 32
#define	QR_DATA_CODE_MAX	QR_V32_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V32_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 33
#define	QR_DATA_CODE_MAX	QR_V33_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V33_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 34
#define	QR_DATA_CODE_MAX	QR_V34_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V34_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 35
#define	QR_DATA_CODE_MAX	QR_V35_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V35_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 36
#define	QR_DATA_CODE_MAX	QR_V36_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V36_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 37
#define	QR_DATA_CODE_MAX	QR_V37_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V37_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 38
#define	QR_DATA_CODE_MAX	QR_V38_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V38_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 39
#define	QR_DATA_CODE_MAX	QR_V39_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V39_ERROR_CODE_MAX/*纠错码*/
#elif QR_VERSION == 40
#define	QR_DATA_CODE_MAX	QR_V40_DATA_MAX/*数据码*/
#define	QR_ERROR_CODE_MAX	QR_V40_ERROR_CODE_MAX/*纠错码*/
#endif

/*编码形式*/
#define QR_MODE_NUMERAL		0
#define QR_MODE_ALPHABET	1
#define QR_MODE_8BIT		2
#define QR_MODE_KANJI		3
#define QR_MODE_CHINESE		4

/*Number of bits per length field*/
/*Encoding		Ver.1–9		10–26		27–40*/
/*Numeric		10			    12			14*/
/*Alphanumeric	9			    11			13*/
/*Byte			8			    16			16*/
/*Kanji			8			    10			12*/
/*Chinese*/
/*P17 字符计数指示的位数*/
#define QR_VRESION_S	(0)
#define QR_VRESION_M	(1)
#define QR_VRESION_L	(2)

#define QR_MARGIN	    (4)
#define	QR_VER1_SIZE	(21)/*第1版本的行列数*/

/*计算QR版本号对应的二维码点数，version二维码版本号*/
#define QrSideCal(version)    (QR_VER1_SIZE+QR_MARGIN*((version)-1))

/*计算二维码点数对应的页数，Side二维码点数*/
#define QrPageCal(Side)   (((Side)%8 == 0) ? ((Side)/8) : ((Side)/8 + 1))

/*目前纠错等级为L最低等级，若纠错等级不为L，则下面的宏MAX_DATACODEWORD和MAX_CODEBLOCK需要查看对应版本的数据码数、纠错码数，并修改*/
#define MAX_ALLCODEWORD	    (QR_DATA_CODE_MAX+QR_ERROR_CODE_MAX)/*3706/400/ 在纠错等级为L下的全部容量：数据码字＋纠错码字P14,P33-P42 P13表1数据容量[码字]* (E) (VER:40), 所有码字为8位*/
#define MAX_DATACODEWORD	QR_DATA_CODE_MAX                        /*2956/400/ 在纠错等级为L数据码容量P25-P31 表7-表11 最大信息码子(Ver：40-L)，所有码字为8位*/
#define MAX_CODEBLOCK		QR_ERROR_CODE_MAX	               /*最大纠错码字 Ver：36.37.38_L_第二块*/
#define MAX_MODULESIZE		QrSideCal(QR_VERSION)                  /* 21:Version=1,最大字符=17(8.5个汉字)*/ /*P14 每边的模块数（A） (VER:40   ) Ver：40 = 21+（Ver-1）*4*/
								/* 25:Version=2,最大字符=32(16个汉字)*/
								/* 29:Version=3,最大字符=49(24.5个汉字)*/
								/* 33:Version=4,最大字符=78(39个汉字)*/
								/* 37:Version=5,最大字符=106(53个汉字)*/
								/* 41:Version=6,最大字符=134(67个汉字)*/
							 	/* 45:Version=7,最大字符=154(77个汉字)*/
							 	/* 49:Version=8,最大字符=192(96个汉字)*/
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

#define CHINESE_SYMBOL    GAL_YES/*开/关中文字符判断，打开关闭目前没发现有什么不同*/

/*
;***************************************************************************
;                                  全局别名
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
	u16	 ncRSBlock;		/*纠错的块数*/
	u16	 ncAllCodeWord;	/*码字总数*/
	u16	 ncDataCodeWord;	/*指定纠错等级下的数据码字数*/
}RS_BLOCKINFO;

typedef struct
{
	u16	 nVersionNo;			/*ver 1~40*/
	u16	 ncAllCodeWord; 		/*码字总数=数据码字+纠错码字*/

	u16	 ncDataCodeWord[4];	/*指定纠错等级下的数据码字(0=L,1=M,2=Q,3=H)*/
	u16	 ncAlignPoint;		/*P61 表E1 校正图形 个数*/
	u16	 nAlignPoint[6];		/*P61 表E1 校正图形	行列坐标*/
	/*(0=L,1=M,2=Q,3=H)*/
	RS_BLOCKINFO RS_BlockInfo1[4];	/*纠错块1*/
	RS_BLOCKINFO RS_BlockInfo2[4];	/*纠错块2*/
}QR_VERSIONINFO;



extern u08 gu08MbyModuleData[MAX_MODULESIZE][MAX_MODULESIZE];/*设定的二维码最大尺寸*/
extern u08 gu08MnSymbleSize;/*转换后的实际二维码尺寸，调试时可查看这个*/

extern u08 EncodeData(uc8 *lpsSource, u16 u16len);


#endif


