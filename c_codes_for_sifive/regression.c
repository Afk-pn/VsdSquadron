
#include <stdio.h>
#include <metal/cpu.h>
#include <metal/led.h>
#include <metal/button.h>
#include <metal/switch.h>

#define RTC_FREQ    32768

#define x1 0.77884104f
#define x2 0.0293919f
#define x3 0.03471025f

#define b 42989.00816508669f

float predict(float inp1, float inp2, float inp3){
	return x1* inp1+x2* inp2+x3*inp3+b;
}

void print_float(float val)
{
	int int_part = (int)val;
	int frac_part = (int)((val-int_part)*100);
	if(frac_part<0) frac_part *=-1;
	printf("%d.%02d", int_part, frac_part);
}

int main(void)
{
	float rDSpend=100671.9f;
	float aDSpend=91790.6f;
	float mkSpend=249744.5f;
	float profit;
	profit=predict(rDSpend,aDSpend,mkSpend);
	printf("profit is : ");
	print_float(profit);
	return 0;

}
