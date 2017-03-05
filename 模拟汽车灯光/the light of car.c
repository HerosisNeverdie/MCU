//模拟汽车灯光
#include<reg51.h>
sbit LED_HD=P1^0;								//前照灯
sbit LED_HH=P1^1;								//远光灯
sbit LED_L=P1^2;								//左灯
sbit LED_R=P1^3;								//右灯
sbit LED_T=P1^4;								//故障灯
sbit S_HD=P3^0;	   								//前照灯开关
sbit S_HH=P3^1;	   								//远光灯开光
sbit S_L=P3^2;	  								 //左灯开关
sbit S_R=P3^3;	  								 //右灯开关
sbit S_T=P3^4;									//故障灯开关
void delay(unsigned int i)						//延时函数声明
{						   	
	unsigned int k;
	for(k=0;k<i;k++);
}
void main()										//主函数
{
	bit headlight,highlight,left,right,trouble;		//定义位变量headlight,highlight,left,right,trouble表示前照灯，远光灯，左灯，右灯,故障灯状态
	while(1)
	{
		//将灯名（值）和开关（命令）一一对应
		headlight=S_HD;						  
		highlight=S_HH;
		left=S_L;
		right=S_R;
		trouble=S_T;
		//将灯（引脚）和灯名（值）一一对应
		LED_HD=headlight;
		LED_HH=highlight;
		LED_L=left;
		LED_R=right;
		LED_T=trouble;
		delay(20000);							//调用延时函数，实际参数为20000
		//熄灯
		LED_HD=1;
		LED_HH=1;
		LED_L=1;
		LED_R=1;
		LED_T=1;
		delay(20000);							//调用延时函数，实际参数为20000
	}
}

