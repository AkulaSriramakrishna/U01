/*
Q8: Write a program to Check whether product of digits at even places is divisible by sum of digits at odd place of a number.

Examples:
Input:
2157
Output:
TRUE

Input:
1234
Output:
TRUE
*/
#include<stdio.h>
int checkNum(int);
int main()
{
    int num,res;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    res = checkNum(num);
    if(res == 1)
    { 
        puts("\nTrue\n");
    }
    else
    {
        puts("\nFalse");
    }
    return 0;
}
int checkNum(int N)
{
    int sum =0,product=1,count=2,res,num;
    while(N != 0)
    {
        num = N%10;
        sum += num;
        if(count%2 == 0)
        {
            product = product * num;
        }
        count ++;
        N = N/10;

        if(product / sum == 0)
        res = 1;
        else
        res =0;
    }
    return res;
}
