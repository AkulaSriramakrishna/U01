/*
*/

#include<stdio.h>
int main()
{
    int testCase,num,temp,sum=0,dig1,dig2,itr1,itr2,count,checkPrimeItr;
    printf("\nEnter the no of test cases: ");
    scanf("%d",&testCase);    
    temp = testCase;
    if(testCase >= 1 && testCase <= 100)
    {        
        while(temp > 0)
        {
            printf("\nEnter the number: ");
            scanf("%d",&num);
            if(num >= 1 && num <=100)
            {
                for(itr1 = 1 ; itr1 <= num;itr1++)
                {
                    count = 0;
                    //Checking for first prime number.
                    for(checkPrimeItr = 1; checkPrimeItr<=itr1;checkPrimeItr++)
                    {
                        if(itr1/checkPrimeItr == 0)
                        {
                            count ++;
                        }
                    }

                    if(count <= 2)
                    {
                        //Checking for secound prime number.
                        for(itr2 = itr1; itr2<num ;itr2++)
                        {
                            count = 0;
                            for(checkPrimeItr = 1; checkPrimeItr<=itr2;checkPrimeItr++)
                            {
                                if(itr2/checkPrimeItr == 0)
                                {
                                    count ++;
                                }
                            }
                            if(count <= 2)
                            {
                                sum = itr1 + itr2;
                            }
                        }

                    }

                }
                printf("\nOutput:%d\n",sum);
            }
            else
            {
                puts("\nEnter Number between 1 to 100\n");
            }
            temp--;
        }
    }
    else
    {
        puts("\n! Error test case should between 1 to 100.");
    }
    return 0;
}