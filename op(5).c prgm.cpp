#include<stdio.h>
int main ()
{
	char op;
	int a,b,c;
	printf("enter opearator(+,-,*,/,%):");
	scanf("%c",&op);
	printf("enter 2values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
	case '+':c=a+b;
	         printf("Addition is:%d",c);
			 break;
	case '-':c=a-b;
	         printf("Subtraction is:%d",c);
			 break;
	case '*':c=a*b;
	         printf("Multiplication is:%d",c);
	         break;	
	case '/':c=a/b;
	         printf("Division is:%d",c);
	         break;	
	case '%':c=a%b;
	         printf("Modulas is:%d",c);
	         break;	        
	default:printf("invalid operator");
	break;
    }
return 0;
}