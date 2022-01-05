#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,temp;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	printf("%d is a palindrome",temp);
	else
	printf("%d is not a palindrome",temp);
	getch();
	}