/*Demo on do-while loop*/
#include<stdio.h>
int main()
{
	int itr=1,num,res;
	puts("\nEnter the number for table claculation: ");
	scanf("%d",&num);
	do
	{
		res = num * itr;
		printf("\n %d * %d = %d\n",num,itr,res);
		itr++;
	}
	while(itr<=10);
	
}

