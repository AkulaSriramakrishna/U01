/*Demo on while loop*/
#include<stdio.h>
int main()
{
	int itr=1,res,num;
	puts("\nEnter the number for which table has to be found: ");
	scanf("%d",&num);
	while(itr<=10)
	{
		res = num * itr;
		printf("\n %d X %d = %d\n",num,itr,res);
		itr++;
	}
	return 0;
}
