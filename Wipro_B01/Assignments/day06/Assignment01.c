/*
Program to find greatest of given number in a list
*/
#include<stdio.h>
#define CAP 10
int main()
{
    int itr,great_num=0,arr[CAP];
    puts("\n Enter 10 elements in a list: ");
    for(itr=0;itr<CAP;itr++)
    {
         scanf("%d",&arr[itr]);
    }
    great_num = arr[0];
    for(itr=0;itr<CAP;itr++)
    {
        if(great_num < arr[itr])
        great_num = arr[itr];
    }

    printf("\nGreatest Number is:%d",great_num);    
    return 0;
}
