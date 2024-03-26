/*
Q6.Sum of Even and odd pos values in the array
*/

#include<stdio.h>
#define CAP 100
void dispList(int [], int); 
void sumEvenOddPos(int [],int);
int main()
{
    int itr,arr[CAP];
    printf("\nEnter the elements of array: ");
    for(itr = 0;itr<CAP;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    puts("\nArray before reverse");
    dispList(arr,CAP);
    sumEvenOddPos(arr,CAP);
}
void dispList(int a[], int n)
{
    int itr;
    for(itr=0;itr<n;itr++)
        printf("%d->",a[itr]);
   
    printf("\n");
}

void sumEvenOddPos(int a[],int N)
{
     int itr,sumEven=0,sumOdd=0;
    for(itr=0 ; itr < N ; itr++)
    {
        if(itr%2 == 0)
        {
            sumEven += a[itr];
        }
        else
        {
            sumOdd += a[itr];
        }
    }

    printf("Sum of Even position is :%d and odd position is :%d\n",sumEven,sumOdd);
}