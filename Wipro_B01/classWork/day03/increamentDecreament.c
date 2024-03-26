/*Demo on increament and decrement operator*/
#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    c = ++a;
    b = a++;

    printf("\n%d,%d,%d",a++,++b,c++);
    printf("\n%d,%d,%d",a,b,c);

    printf("\n%d,%d,%d",a++,b--,--c);
    printf("\n%d,%d,%d",a,b,c);

    c = --a;
    b = a--;
    printf("\n%d,%d,%d",a++,--b,c--);
    printf("\n%d,%d,%d",a,b,c);
    return 0;
}