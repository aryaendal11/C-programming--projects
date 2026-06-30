#include<stdio.h>
int main()
{
	int hr,min,sec;
	printf("time in hours and minutes=");
	scanf("%d%d",&hr,&min);
	sec=(3600/hr)+(60/min);
	printf("\n time in seconds=%d",sec);
	
}
