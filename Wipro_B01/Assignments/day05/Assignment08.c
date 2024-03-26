/*
Q6: Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No

*/
#include<stdio.h>
int productFind(int);
int main()
{
    int num,res;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    res = productFind(num);
    if(res == 1)
    {
        puts("\nYes");
    }
    else
    {
        puts("\nNo");
    }
    return 0;
}
int productFind(int N)
{
    int product1=1,product2=1,count = 1,num,temp,res;
    while(N != 0)
    {
        num = N%10;
        if(count%2 == 0)
        {
            product1 = product1 * num;
        }
        else
        {
            product2 = product2 * num;
        }
        N = N/10;
        count++;
    }
    if(product1 == product2)
    res = 1;
    else
    res = 0;
    return res;
}
