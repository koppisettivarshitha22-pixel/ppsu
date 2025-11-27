#include<stdio.h>
int main()
{
int a;
float b;
char c;
char str[101];
printf("enter a number:");
scanf("%d", &a);
printf("enter a floating ponit value:");
scanf("%f\n", &b);
printf("enter character:");
scanf("%c", &c);
printf("enter a string:");
scanf("%s", str);
printf("%d\n%f\n\n%c\n%s", a,b,c,str);
return 0;
}