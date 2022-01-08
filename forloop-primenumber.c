#include<stdio.h>
main()
{
	int i,a,b=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;
		}
	}
		if(b==2)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
}
