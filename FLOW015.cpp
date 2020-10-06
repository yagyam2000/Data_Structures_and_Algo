#include<stdio.h>
int main()
{
	long int t,n;
	scanf("%ld",&t);
	while(t--)
	{
		long int temp=2001,days=0,rem;
		scanf("%ld",&n);
		while(temp!=n)
		{
			if(n>temp)
			{
				if((temp%4==0 && temp%100!=0)||(temp%400==0))
				{
					days+=366;
					temp++;
				}
				else
				{	
					days+=365;
					temp++;
				}
			}
			else
			{	
				if((n%4==0 && n%100!=0)||(n%400==0))
				{
					days-=366;
					n++;
				}
				else
				{	
					days-=365;
					n++;
				}	
			}
		}
		rem=days%7;
		switch(rem)
		{
			case -6:printf("tuesday\n");
				break;
			case -5:printf("wednesday\n");
				break;
			case -4:printf("thursday\n");
				break;
			case -3:printf("friday\n");
				break;
			case -2:printf("saturday\n");
				break;
			case -1:printf("sunday\n");
				break;
			case 0:	printf("monday\n");
				break;
			case 1:	printf("tuesday\n");
				break;
			case 2:	printf("wednesday\n");
				break;
			case 3:	printf("thursday\n");
				break;
			case 4:	printf("friday\n");
				break;
			case 5:	printf("saturday\n");
				break;
			case 6:	printf("sunday\n");
				break;
		}
	}	
	return 0;
}
