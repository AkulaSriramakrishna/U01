/*
Q2. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4
*/
#include<stdio.h>
int checkPrime(int);
int main()
{
    int num,res;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    res = checkPrime(num);
    printf("\nNo of ways : %d\n",res);
    return 0;
}
int checkPrime(int N)
{
    int flag1,flag2,count=0,itr1,itr2,num = N,itrPrime1,itrPrime2,temp;
    for(itr1 = 2;itr1<=num; itr1++)
    {
        flag1 =0;
        for(itrPrime1 = 1;itrPrime1 <= itr1; itrPrime1++)
        {
            temp = itr1;
            if(temp%itrPrime1 == 0)
            {
                flag1++;
            }
        }
        if(flag1 <=  2)
        {
            for(itr2 = itr1; itr2 <= num; itr2++)
            {   
                flag2=0;
                for(itrPrime2 =1 ; itrPrime2 <= itr2; itrPrime2++)
                {
                    temp = itr2;
                    if(temp%itrPrime2 == 0)
                    {
                        flag2++;
                    }
                }
                if(flag2 <= 2)
                {
                    if((itr1+itr2)==num)
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}