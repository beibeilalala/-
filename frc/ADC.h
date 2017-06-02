/*****************************************************************                                
*	模块名称 : ADC模数转换器模块
*	文件名称 : ADC.h
*	版    本 : V1.0
*	说    明 : ADC模数转换函数及宏定义等
******************************************************************/
#ifndef __ADC_H 
#define __ADC_H

#define ADC_NUM	(8)	// 最大通道数
#define ADC_VREF	(3300)	// 参考电压，单位mV

typedef enum
{
	ADC_CH0 = 0,
	ADC_CH1 = 1,
	ADC_CH2 = 2,
	ADC_CH3 = 3,
	ADC_CH4 = 4,
	ADC_CH5 = 5,
	ADC_CH6 = 6,
	ADC_CH7 = 7,
} ADC_CH;	// 通道定义

// 控制寄存器（AD0CR-0x4003 4000）
#define ADC_SEL	(0)			// 从AD0.7:0 中选择采样和转换的输入脚
#define ADC_CLKDIV	(8)	// A/D 转换时钟 = FPCLK / (CLKDIV + 1)
#define ADC_BURST	(16)	// 控制方式选择
#define ADC_PDN	(21)		// 模式选择(1-正常模式，0-掉电模式)
#define ADC_START	(24)	// 启动模式
#define ADC_EDGE	(27)	// 上升沿或下降沿启动(与START有关)

// 全局数据寄存器（AD0GDR-0x4003 4004）
#define ADC_RESULT	(0x01 << 4)		// 转换结果
#define ADC_CHN	(0x01 << 24)			// A/D通道
#define ADC_OVERRUN	(0x01 << 30)	// 读取该寄存器可清零该位
#define ADC_DONE	(0x80000000)		// A/D转换结束时该位置位

// 状态寄存器（ADSTAT-0x4003 4030）
#define ADC_ADINT	(0x01 << 16)	// 该位是A/D中断标志

#endif