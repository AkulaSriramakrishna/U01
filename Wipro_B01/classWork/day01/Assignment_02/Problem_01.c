#include<stdio.h>
int main()
{
    int numCount,numSquare,numSum;
    int i=1;
    numSum = 0;
    printf("How many Numbers should be in the table? ");
    scanf("%d",&numCount);
    printf("Number      Square\n");
    printf("------------------\n");
    printf("------------------\n");
    for(i =1;i<= numCount;i++)
    {
        numSquare = i*i;
        printf("%d          %d\n",i,numSquare);
        numSum = numSum + numSquare;
    }
    printf("\n");
    printf("The Sum of these Squares is %d.\n",numSum);
}