#include<stdio.h>
int printfFact(int);
int main()
{
    int num,res;
    puts("\nEnter the number: ");
    scanf("%d",&num);
    res = printfFact(num);
    printf("\nFactorial:%d",res);
    return 0;
}
int printfFact(int N)
{
    int Fact = 1;
    if(N==0)
    {
        return Fact;
    }
    Fact = Fact * printfFact(N-1);
    return Fact;
}