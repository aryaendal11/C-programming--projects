#include<stdio.h>
int main()
{
	float a,b,c,r1,r2;
	printf("enter the values of a,b,c=");
	scanf("%f %f %f",&a,&b,&c);
	r1=((-b)+((b*b)-(4*a*c)))/(2*a);
	r2=((-b)+((b*b)-(4*a*c)))/(2*a);
	printf("\n root are=%f %f",r1,r2);
	
}
