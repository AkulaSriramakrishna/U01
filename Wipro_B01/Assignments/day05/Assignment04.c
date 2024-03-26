/*
Q4: write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the sum and product of digits of the number

Examples:
Input: N = 12
Output:
sum =3
product = 2.

Input: N = 1012
Output:
 Sum = 4
product = 2*/
#include<stdio.h>
int sumNum(int);
int productNum(int);
int main()
{
    int num,sum=0,product=1;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    sum = sumNum(num);
    product = productNum(num);

    printf("\nSum = %d",sum);
    printf("\nProduct = %d\n",product);
    return 0;
}

int sumNum(int N)
{
    int temp = N,Sum = 0;
    while(temp != 0)
    {
        Sum = Sum + temp%10;
        temp = temp /10;
    }
    return Sum;
}

int productNum(int N)
{
    int temp = N,Product = 1,temp1;
    while (temp!=0)
    {
        temp1 = temp % 10;
        if(temp1 != 0)
        {
            Product = Product * temp1;
        }  
        temp = temp / 10;      
    }
    return Product;  

}