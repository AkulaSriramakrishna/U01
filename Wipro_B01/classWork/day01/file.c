#include<stdio.h>
int main()
{
    int n,f,i;
    f=1;
    i=1;
    printf("\n Please Enter The Value OF N");
    scanf("%d",&n);
    do
    {
        /* code */
        f=f*i;
        i=i+1;
    } while (i != n);
    printf("\n Fctorial of number N is:%d",f);

    printf(" \nHello world");
}

/*do
{
F = F + i;
i = i + 1;
}
while(i != N)*/


/*
start
Read N
intilize count = 0
for (i=1;i=n;i++)
{
    Num = (N%1)
    if(num == 0)
    {
       then count = count +1;
    }
}
if(count>1)
{
 then   print (N is prime Number)
}
else
{
   then print N (Prime Number).
}

*/

/*
start
set n = 1,num=0;
num = num +n
if(num%2 != 0 )
then print num
increament i by 1 and repeat step 2,3 and 4 until n = 20
*/