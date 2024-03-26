#include<stdio.h>
int main()
{
	char clr;
	printf("\nEnter the color of the traffic light (R/O/G): ");
	clr = getc(stdin);
	if((clr=='R')||(clr=='r'))
	{
		printf("\nStop the veichel untill green light glows\n");
	}
	else if((clr=='O')||(clr=='o'))
	{
		printf("\nPlease start the veichle and proceed\n");
	}
	else if((clr=='g')||(clr=='G'))
	{
		printf("\nPlese Prceed\n");
	}
	else
	{
		printf("\nTraffic light are off,Movie slowy by considering traffic\n");
	}
	printf("\nSpeed Kills !\n");
	return 0;
}
