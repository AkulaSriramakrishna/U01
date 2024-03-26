/*
Q5:  Write a program to Count number of ways to divide a number
 in 4 parts.

 Input Format:
 First Line Of Input Contains T test cases
 Second line of Input Contains a positive integer n,

 Output Format:
 Print the count number of ways for division can take place.

 Examples :

 Input:
 1
   5 => 1 + 1 + 1 + 2

 Output: 1

 Input:
 1
 6
   2 + 2 + 1 + 1
   1 + 1 + 1 + 3
 Output: 2

 Input:
 
   8
 Output: 5
1+1+1+5
2+2+2+2
2+2+1+3
1+1+2+4
3+3+1+1
*/
#include<stdio.h>
int main()
{
    int a=1,b,c,d,num,count=0;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    for(a=1;a<num;a++)
    {
        for(b=a;b<num;b++)
        {
            for(c=b;c<num;c++)
            {
                for(d=c;d<num;d++)
                {
                    if(a+b+c+d == num)
                    {
                     // printf("\n%d+%d+%d+%d=%d",a,b,c,d,num);
                        count ++;
                    }
                }
            }
        }
    }
    printf("\nOutput:%d\n",count);
    return 0;
}
