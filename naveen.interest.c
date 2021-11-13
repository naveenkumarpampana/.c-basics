#include<stdio.h>
void main()
{
	int p,t,si;
	float r;
	printf("enter principle rate and time");
	scanf("%d%d%f",&p,&t,&r);
	si=p*t*r/100;
	printf("simple intrest is %d",si);
}
