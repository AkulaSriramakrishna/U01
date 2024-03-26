/*Demo on formated input stattement*/
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the value of x,y and z\n");
	scanf("%2d%3d%1d",&x,&y,&z);
	printf("\n Valus of x=%05d,y=%07d,z=%03d\n",x,y,z);
	return 0;
}
