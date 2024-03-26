/*
*/
#include<stdio.h>
int main()
{
    int testCase,num,primeNum,count,checkNum,count1,temp,itr;
    printf("\nEnter the no of test cases: ");
    scanf("%d",&testCase);    
    temp = testCase;
    if(testCase >= 1 && testCase <= 100)
    {
        while(temp > 0)
        {
            printf("\nEnte1r the number: ");
            scanf("%d",&num);
            count = 0;
            if(num >= 1 && num <=10000)
            {
                checkNum = 1;
                do
                { 
                    count1 = 0;                   
                    for(itr = 1 ; itr <= checkNum; itr++)
                    {
                        if(checkNum % itr == 0)
                        {
                            count1++;
                        }                        
                    }
                    if(count1 <= 2)
                    {                    
                        primeNum = checkNum;
                        count++;
                    }
                    checkNum ++;
                }
                while (count != num);       
                
                
            }
            else
            {
                 puts("\nEnter Number between 1 to 100\n");
            }                       
            temp --;
        }
        printf("\nOutput:%d",primeNum);
    }
    else
    {
         puts("\n! Error test case should between 1 to 100.");
    }
    return 0;
}