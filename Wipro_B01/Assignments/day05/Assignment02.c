/*Two's table using goto statement.*/
#include<stdio.h>
int main()
{
	int res,Count=0,num;	
	printf("\nEnter the number: ");
	scanf("%d",&num);
		goto pri;	
	 pri:
		{
			if(Count<=10)
			{
				res = num*Count;
				printf("\n %d X %d = %d\n",num,Count,res);
				Count ++;
				goto pri;
			}
		}
		return 0;
}

