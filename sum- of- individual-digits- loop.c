#include<stdio.h>
main()
{
	int n,r,s;
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
		n=n/10;
		s+=r;
	}
	printf("%d\n",s);
}
