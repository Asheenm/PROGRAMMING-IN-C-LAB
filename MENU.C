#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,fact=1,count=0;
	clrscr();
	while(ch!=4)
	{
		printf("***menu***\n");
		printf("1.factorial of a number\n2.prime or not\n3.odd or even\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		printf("factorial of number\n");
		printf("enter a number:");
		scanf("%d",&n);
		for(i=n;i>0;i--)
		{
			fact=fact*i;
		}
		printf("factorial of %d is %d",n,fact);
		break;
		case 2:
		printf("prime or not\n");
		printf("enter a number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==2)
			printf("%d is prime number",n);
		else
			printf("%d is not a prime number",n);
		break;
		case 3:
		printf("odd or even\n");
		printf("enter a number:");
		scanf("%d",&n);
		if(n%2==0)
			printf("%d is even number",n);
		else
			printf("%d is odd number",n);
		break;
		case 4:
			printf("exit");
			break;
		}
		getch();
		}
		}