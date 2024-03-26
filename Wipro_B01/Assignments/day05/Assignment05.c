/*
Q 1:
Language:
C


Problem
statement : Write the logic to for incrementing Squared Number-Star Pattern.


Input
Format      : Take N as input of type
integer.


Output
Format     : Print incrementing Squared
Number-Star Pattern.

Constraints:
2<=N<=10

Sample Input:
5
Sample Output:
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25
*/

#include<stdio.h>
int main()
{
    int num,i=1;
    puts("\nEnter the number : ");
    scanf("%d",&num);
    if(num>=2 && num <= 10)
    {
        while (i <= num*num)
        {
            printf("%d",i);
            if(i%num != 0)
            {
                printf("*");
            }
            else
            {
                printf("\n");
            }
            i++;
        }
        

    }
    else
    {
        puts("\nEnter number between 2 to 10 only\n");
    }

    printf("\n\n");
    return 0;
}
