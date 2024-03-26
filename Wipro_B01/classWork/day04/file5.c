#include<stdio.h>
int main()
{
	int amount;
	printf("\nHow much you have:  ");
	scanf("%d",&amount);
	if(amount < 10)
	{
		printf("\nYou get a Normal Chocolate\n");
	}
	else
	{
		printf("\nYou Will ger a premium chocolate\n");
	}
}
