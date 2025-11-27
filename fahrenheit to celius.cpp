#include<stdio.h>
int main()
{
	float fahernheit,celius;
	printf("enter the fahernheit");
	scanf("%f,&fahernheit");
	celius=(fahernheit-32)*5.0/9.0;
	printf("temperature in celiuse %2f/n");
return 0;
}