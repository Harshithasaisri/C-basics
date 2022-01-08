#include<stdio.h>
main()
{
	int sp,cp,loss,profit,lp,pp;
	printf("enter amount");
	scanf("%d%d",&sp,&cp);
	if(cp>sp)
	{
		printf("loss");
		loss=cp-sp;
		lp=(loss/cp)*100;
	print("print loss=%d and loss percentage=%d",loss,lp);	
	}
	else if(sp>cp)
	{
	printf("profit");
	profit=sp-cp;
	pp=(profit/cp)*100;
	printf("print profit=%d and profit percentage =%d",profit,pp);
}
else
{
printf("no profit no loss");
}
}
