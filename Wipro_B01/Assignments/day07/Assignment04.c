/*
Q3.Store Array from 1 to 100
*/
#include<stdio.h>
#define CAP 10
void dispList(int [], int);
int main()
{
    int itr,arr[CAP];
    printf("\nEnter the elements of array: ");
    for(itr = 0;itr<CAP;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    puts("\nArray Elements are:");
    dispList(arr,CAP);
}
void dispList(int a[], int n)
{
    int itr;
    for(itr=0;itr<n;itr++)
        printf("%d->",a[itr]);
   
    printf("\n");
}
