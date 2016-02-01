#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,s,c,h,f;
	scanf("%d %d",&a,&b);
	s=a+b;
	if(s>-1000&&s<1000)
	printf("%d",s);
	else if(s>-1000000&&s<1000000)
	{
		h=s;
		c=s%1000;
		h=(s-c)/1000;
		printf("%d,%03d",h,abs(c));
		
	}
	else if(s>-1000000000&&s<1000000000)
	{
		c=s%1000;
		s=(s-c)/1000;
		h=s%1000;
		f=(s-h)/1000;
		printf("%d,%03d,%03d",f,abs(h),abs(c));
	}
	return 0;
} 
