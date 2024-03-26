/*
Write a c program to print alphabet triangle.
Input: 5
Output:

         A
       ABA
     ABCBA
   ABCDCBA
 ABCDEDCBA
*/
#include<stdio.h>
int main()
{
    int a,b,c,num,alphabet;
    puts("\nEnter the Number: ");
    scanf("%d",&num);
    for(a=0;a<num;a++)
    {
        alphabet = 65;
        for(b=0;b<=a;b++)
        {
            printf("%c",alphabet+b);   
        }
        printf("\n");
    }
    return 0;
}