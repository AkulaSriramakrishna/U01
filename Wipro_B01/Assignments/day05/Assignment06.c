/*
Q2:
Language:
C
Problem
statement : Write the logic to print Number Star Right Triangle pattern.
Input
Format      : Take N as input of type
integer.
Output
Format     : Print Number Star Right
Triangle pattern.

Constraints:
2<=N<=10

Sample Input:
5
Sample Output:
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
*/
#include<stdio.h>
int main()
{
    int num,count,loop1=1,res=1;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    if(num>=2 && num <= 10)
    {
        for(loop1;loop1<=num;loop1++)
        {
            for(count=1;count<=loop1;count++)
            {
                printf("%d",res);
                if(count != loop1)
                {
                    printf("*");
                }
                else
                {
                    printf("\n");
                }
                res++;
            }
        }
    }
    else
    {
        puts("\nPleas enter number between 2 to 10 only");
    }

    printf("\n\n");
    return 0;
}