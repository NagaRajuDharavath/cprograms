#include <stdio.h>
void main()
{
	float a,b;
	float sum,sub,mul,div;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("the additon of two num is %f\n",sum);
	printf("the substraction of two num is %f\n",sub);
	printf("the multiplication of two num is %f\n",mul);
	printf("the division  of two num is %f",div);
	getch();
}
