#include<stdio.h>
int main()
{
	char str1[20];
	puts("\nEnter a string :\n");
	//gets(str1,stdin);
	fgets(str1,19,stdin);
	puts(str1);

	printf("\n\n");
	return 0;
}
