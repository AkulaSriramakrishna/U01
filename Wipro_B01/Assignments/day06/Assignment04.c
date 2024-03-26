/*
Given an unsorted array a of
size N of non-negative integers, find a continuous sub-array which adds to a given number sum.

Input Format:

The first line contains an integer, denoting the size of the array.


The second line contains integers denoting the elements of the array.

The last line contains an integer, denoting the sum.

Constraints

1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000
Output Format:
The output line contains integers denoting the indexes.


TESTCASE
1:
Input:
7
[1,
4, 0, 0, 3, 10, 5]
sum =
7
Output:

Sum found between indexes 1 and 4

TESTCASE
2:
Input:
2
[1, 4]
sum = 0
Output:
No subarray found
*/
#include<stdio.h>
#define CAP 10
int main()
{
    int num;
    puts("\nEnter the number : ");
    scanf("%d",&num);    
    if(num >=1 && num <= 10)
    {
        int arr[num];
        int gNum=0;
        int i,j;
        int Sum=0;
        int flagC=0;
        puts("\nEnter the element of array : ");
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<10;i++)
        {
            Sum = 0;
            for(j=i;j<10;j++)
            {
                Sum += arr[j];
                if(Sum ==gNum)
                {
                    flagC=1;
                    break;
                }
            }
            if(flagC == 1)
                break;
        }
        if(flagC==1)
            printf("\nSum found between indexes:%d and %d",i,j);
        else
            printf("\nNot Found\n");
        
        printf("\n\n");
    }
    else
    {
        puts("\nEnter number between 1 to 10 only.");
    }
    return 0;
}