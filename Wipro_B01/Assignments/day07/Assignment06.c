/*
Q5.Sum of Even and odd values in the array
*/

#include<stdio.h>
#define CAP 100
void dispList(int [], int); 
void sumEvenOdd(int [],int);
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
    sumEvenOdd(arr,CAP);
}
void dispList(int a[], int n)
{
    int itr;
    for(itr=0;itr<n;itr++)
        printf("%d->",a[itr]);
   
    printf("\n");
}
void sumEvenOdd(int a[],int N)
{
    int itr,sumEven=0,sumOdd=0;
    for(itr=0 ; itr < N ; itr++)
    {
        if(a[itr]%2 == 0)
        {
            sumEven += a[itr];
        }
        else
        {
            sumOdd += a[itr];
        }
    }

    printf("Sum of Even Number is :%d and odd number is :%d\n",sumEven,sumOdd);
}