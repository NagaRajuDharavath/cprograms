#include <stdio.h>
void main()
{
	int a,b;
	int sum,sub,mul;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	printf("the additon of two num is %d\n",sum);
	printf("the substraction of two num is %d\n",sub);
	printf("the multiplication of two num is %d",mul);
	getch();
}
