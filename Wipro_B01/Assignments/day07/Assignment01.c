/*
Sorting array in desciend order.
*/
#include <stdio.h>

int dispList(int [], int);
void sortDesc(int [], int);
int main()
{
    int num,itr;
    printf("\nEnter no of elements in a array: ");
    scanf("%d",&num);
    int arr[num];
    printf("\nEnter  elements of a array: ");
    for(itr = 0;itr<num;itr++ )
    {
        scanf("%d",&arr[itr]);
    }
    //int arr[] = {10,1,3,5,2,8,9,22};
    int Size = sizeof(arr)/sizeof(arr[0]);
    puts("\nArray before sorting");
    dispList(arr,Size);
    sortDesc(arr,Size);
    puts("\nArray after sorting");    
    dispList(arr,Size);
    printf("\n\n");
    return 0;
}

int dispList(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d->",a[i]);
   
    printf("\n");
}
void sortDesc(int a[], int n)
{
    
    int itr,itr2,num;
    for(itr = 0; itr <  n;itr++ )
    {
        for(itr2 =0 ; itr2 <n;itr2++)
        {
            if(a[itr2] < a[itr2 + 1])
            {
              num = a[itr2];
              a[itr2] = a[itr2 + 1] ;
              a[itr2 + 1] = num;
            }
        }
    }
}

