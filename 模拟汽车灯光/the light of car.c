//ģ�������ƹ�
#include<reg51.h>
sbit LED_HD=P1^0;								//ǰ�յ�
sbit LED_HH=P1^1;								//Զ���
sbit LED_L=P1^2;								//���
sbit LED_R=P1^3;								//�ҵ�
sbit LED_T=P1^4;								//���ϵ�
sbit S_HD=P3^0;	   								//ǰ�յƿ���
sbit S_HH=P3^1;	   								//Զ��ƿ���
sbit S_L=P3^2;	  								 //��ƿ���
sbit S_R=P3^3;	  								 //�ҵƿ���
sbit S_T=P3^4;									//���ϵƿ���
void delay(unsigned int i)						//��ʱ��������
{						   	
	unsigned int k;
	for(k=0;k<i;k++);
}
void main()										//������
{
	bit headlight,highlight,left,right,trouble;		//����λ����headlight,highlight,left,right,trouble��ʾǰ�յƣ�Զ��ƣ���ƣ��ҵ�,���ϵ�״̬
	while(1)
	{
		//��������ֵ���Ϳ��أ����һһ��Ӧ
		headlight=S_HD;						  
		highlight=S_HH;
		left=S_L;
		right=S_R;
		trouble=S_T;
		//���ƣ����ţ��͵�����ֵ��һһ��Ӧ
		LED_HD=headlight;
		LED_HH=highlight;
		LED_L=left;
		LED_R=right;
		LED_T=trouble;
		delay(20000);							//������ʱ������ʵ�ʲ���Ϊ20000
		//Ϩ��
		LED_HD=1;
		LED_HH=1;
		LED_L=1;
		LED_R=1;
		LED_T=1;
		delay(20000);							//������ʱ������ʵ�ʲ���Ϊ20000
	}
}

