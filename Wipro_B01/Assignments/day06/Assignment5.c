/*
Given an array A of N numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.

Constraints
1<= n<=100

1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]
Output:
3
*/
#include <stdio.h>

int main()
{
    int num;
    puts("\nEnter Number:");
    scanf("%d",&num);
    if(num>=1 && num<=10)
    {
        int arr[num];
        int i,j,k;
        int sumR=0,sumL=0;
        puts("\nEnter array element: ");
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[i]);
        }       

        for(i=0;i<7;i++)
        {
            for(sumL=0,j=0;j<i;j++)
            {
                //left sum
                sumL+=arr[j];
            }
            for(sumR=0,k=i+1;k<7;k++)
            {
                sumR+=arr[k];
            }
            //printf("\nSumL = %d\tSumR=%d",sumL,sumR);
            if(sumL==sumR)
            {
                break;
            }
        }
        printf("\nOutput = %d ",arr[i]);
    }
    else
    {
        puts("\nEnter number between 1 to 10 only");
    }
    printf("\n\n");
    return 0;
}

