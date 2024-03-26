/*To find greatest of 3 number using Turnary Opertaion*/

#include<stdio.h>
int main()
{
    int a=100,b=21,c=2,res;
    //res = (a>b)?a:b;
    //res = (res>c)?res:c;

    res = (a>b)?((a>c)?(a):(b)):((b>c)?(b):(c));

    printf("\nGreatest Number is:%d\n",res);

    return 0;
}