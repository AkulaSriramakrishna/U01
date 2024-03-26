#include<stdio.h>
int main()
{
	char ch;
	ch = getchar();
	printf("\nRead character from stdio in :%c",ch);
	printf("\n");
	getc(stdin);
	ch = getc(stdin);
	putc(ch,stdout);
	printf("\n");
	return 0;
}
