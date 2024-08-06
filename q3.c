#include<stdio.h>
#include<conio.h>

void main()
{
	int num,reverse=0;
	
	printf("enter num:");
	scanf("%d",&num);
	
	while(num !=0)
	{
		int ld=num%10;
		reverse=reverse*10 +ld;
		num =num/10;
	}
	printf("reverse num:%d",reverse);
}
