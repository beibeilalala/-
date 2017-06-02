/*****************************************************************                                
*	ģ������ : ADCģ��ת����ģ��
*	�ļ����� : ADC.h
*	��    �� : V1.0
*	˵    �� : ADCģ��ת���������궨���
******************************************************************/
#ifndef __ADC_H 
#define __ADC_H

#define ADC_NUM	(8)	// ���ͨ����
#define ADC_VREF	(3300)	// �ο���ѹ����λmV

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
} ADC_CH;	// ͨ������

// ���ƼĴ�����AD0CR-0x4003 4000��
#define ADC_SEL	(0)			// ��AD0.7:0 ��ѡ�������ת���������
#define ADC_CLKDIV	(8)	// A/D ת��ʱ�� = FPCLK / (CLKDIV + 1)
#define ADC_BURST	(16)	// ���Ʒ�ʽѡ��
#define ADC_PDN	(21)		// ģʽѡ��(1-����ģʽ��0-����ģʽ)
#define ADC_START	(24)	// ����ģʽ
#define ADC_EDGE	(27)	// �����ػ��½�������(��START�й�)

// ȫ�����ݼĴ�����AD0GDR-0x4003 4004��
#define ADC_RESULT	(0x01 << 4)		// ת�����
#define ADC_CHN	(0x01 << 24)			// A/Dͨ��
#define ADC_OVERRUN	(0x01 << 30)	// ��ȡ�üĴ����������λ
#define ADC_DONE	(0x80000000)		// A/Dת������ʱ��λ��λ

// ״̬�Ĵ�����ADSTAT-0x4003 4030��
#define ADC_ADINT	(0x01 << 16)	// ��λ��A/D�жϱ�־

#endif