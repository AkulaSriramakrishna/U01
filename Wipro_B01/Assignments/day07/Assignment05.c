/*
04)reverse the array elements.
*/
#include<stdio.h>
#define CAP 100
void dispList(int [], int); 
void reverseArr(int [],int);
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
    reverseArr(arr,CAP);
    puts("\nArray after reverse");
    dispList(arr,CAP);
}
void dispList(int a[], int n)
{
    int itr;
    for(itr=0;itr<n;itr++)
        printf("%d->",a[itr]);
   
    printf("\n");
}
void reverseArr(int a[],int N)
{
    int itr1,itr2,temp,lim1,lim2;

    lim1 = N/2;
    lim2 = N-1;


    for(itr1 = 0;itr1 < (lim1);itr1++)
    {        
        if(lim2>=lim1)
        {
            temp = a[itr1];
            a[itr1] = a[lim2];
            a[lim2] = temp;
            lim2--;
        }        
    }
}