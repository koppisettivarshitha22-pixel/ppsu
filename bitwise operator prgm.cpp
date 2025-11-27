#include<stdio.h>
int main ()
{
   int a,b,c;
   printf(" enter a,b values\n",c);
   scanf("%d%d",&a,&b);
   c=a&b;
   printf("bitwise AND:%d\n",c);
   c=a|b;
   printf("bitwise OR:%d\n",c);
   c=a^b;
   printf("bitwise EX-or:%d\n",c);
   c=a<<b;
   printf("bitwise Left shift:%d\n",c);
   c=a>>b;
   printf("bitwisw right shift:%d\n",c);
return 0;
}