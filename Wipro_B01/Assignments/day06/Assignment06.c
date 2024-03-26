/*
Given an array of positive integers. Your task is to find the leaders
in the array.An element is leader if it is greater than all the elements to its
right side.
And the rightmost element is always a leader.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.

Constraints
1<= n<=100
-1000<=arr[i]<= 1000, where arr is the ith element of the array.

Output Format:
The output line prints all the leaders in the array.

TESTCASE 1:
Input:
6
6 7 4 3 5 2
Output:
2 5 7

TESTCASE 2:
Input:
5
2 6 3 8 4
Output:
4 8
*/

#include<stdio.h>
int main()
{
    int N,itr1,itr2,Flag=1;
    puts("\nEnter the number : ");
    scanf("%d",&N);
    int arr[N];

    puts("\nEnter the element of array:");
    for(itr1=0;itr1<N;itr1++)
    {
        scanf("%d",&arr[itr1]);
    }
    printf("\n");
    for(itr1=(N-1);itr1>=0;itr1--)
    {
        Flag = 0;
        for(itr2= itr1;itr2<N;itr2++)
        {            
            if(arr[itr1] < arr[itr2])
            {                
                Flag = 1;
            }               
        }    
        if(Flag == 0)
        {
            printf("%d\t",arr[itr1]);           
        }            
    }
    printf("\n");
    
    return 0;
}
