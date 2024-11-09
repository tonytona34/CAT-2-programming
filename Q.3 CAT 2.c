#include <stdio.h>
int main() {
	float hours, wage,grosspay, taxes, netpay;
	printf("Enter hours worked in a week:");
	scanf("%f",&hours);
	printf("Enter hourly wage:");
	scanf("%f", &wage);
	
	if (hours>40){
	    grosspay=(40*wage)+((hours-40)*wage*1.5);
	}ese{
	    grosspay=hours*wage;
	}
	if (grosspay<=600){
	    taxes=grosspay*0.15;
	}else{
	    taxes=600*0.15+(grosspay-600)*0.20;
	}
	netpay=grosspay-taxes;
	printf("gross pay:%2f\n", grosspay);
	printf("taxes:%2f\n", taxes);
	printf("net pay:%2f\n",netpay);
	return 0;
}