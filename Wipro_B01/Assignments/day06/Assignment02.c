
/*
Program to find Smallest of given number in a list
*/
#include<stdio.h>
#define CAP 10
int main()
{
    int itr,Small_num,arr[CAP];
    puts("\n Enter 10 elements in a list: ");
    for(itr=0;itr<CAP;itr++)
    {
         scanf("%d",&arr[itr]);
    }
    Small_num = arr[0];
    for(itr=0;itr<CAP;itr++)
    {
        if(Small_num > arr[itr])
        Small_num = arr[itr];
    }

    printf("\nSmallest Number is:%d",Small_num);    
    return 0;
}

