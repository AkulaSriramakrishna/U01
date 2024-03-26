/*Demo on Array*/
#include<stdio.h>
#define CAP 5
int main()
{
    int arr[CAP];
    int Size,it;
    printf("\nBase address of array :%u",&arr[0]);
    printf("\nAddress of array[0] :%u and its value :%d" ,&arr[0],arr[0]);
    printf("\nAddress of array[1] :%u and its value :%d",&arr[1],arr[1]);
    printf("\nAddress of array[2] :%u and its value :%d",&arr[2],arr[2]);
    printf("\nAddress of array[3] :%u and its value :%d",&arr[3],arr[3]);
    printf("\nAddress of array[4] :%u and its value :%d",&arr[4],arr[4]);

    printf("\nSize of array :%lu",sizeof(arr));
    printf("\nSize of int :%lu",sizeof(int));
    Size = sizeof(arr)/sizeof(arr[0]);
    for(it = 0 ;it<Size;it++)
    {
        printf("\nAddress of array :%u and its value :%d\n",&arr[it],arr[it]);

    }
    printf("\nLength of arr:%d",Size);

    printf("\n\n");
    return 0;
}