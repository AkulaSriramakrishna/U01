/*neated if else for finding greates of 3 numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	puts("\nEnter Three Numbers one by one: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("\nFirst number is greatest i.e:%d\n",num1);
		}
		else
		{
			printf("\nThird Number is greates:%d\n",num3);
		}
	}
	else
	{	if(num2>num3)
		{
			printf("\nSecound Number is greatestt:%d\n",num2);
		}
		else
		{
			printf("\nThird Number is greates:%d\n",num3);
		}

	}
	
}
