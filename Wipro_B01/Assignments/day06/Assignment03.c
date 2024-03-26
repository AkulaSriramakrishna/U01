/*
Sorting of Element in decending order.
*/
#include<stdio.h>
#define CAP 10
int main()
{
    int itr,num,arr[CAP],itr2;
    puts("\nEnter 10 Element into List:");
    for(itr = 0; itr<CAP;itr ++)
    {
        scanf("%d",&arr[itr]);        
    }
    
    //--Sorting Element Here--//
    for(itr = 0; itr <  CAP;itr++ )
    {
        for(itr2 =0 ; itr2 <CAP;itr2++)
        {
            if(arr[itr2] < arr[itr2 + 1])
            {
              num = arr[itr2];
              arr[itr2] = arr[itr2 + 1] ;
              arr[itr2 + 1] = num;
            }
        }
    }

    //---print array--//
    printf("\n");
    for(itr = 0; itr < CAP;itr++ )
    {
        printf("%d\t",arr[itr]);
    }
    printf("\n");
    return 0;
}
