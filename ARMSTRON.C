#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,temp,c;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
		printf("%d is a armstrong number ",temp);
	else
		printf("%d is not a amstrong number",temp);
	getch();
}