/*Making while loop behave as exit contollrd statement*/
#include<stdio.h>
int main()
{
	int itr=11,num,res;
	puts("\nEnter number for it multiple calculation: ");
	scanf("%d",&num);
		while(1)
		{
			res = num * itr;
			printf("\n %d X %d = %d\n",num,itr,res);
			 itr++;
			 if(itr>10)
			 break;
		}

	return 0;		
}


