/*Demo on Functions*/
#include<stdio.h>
int Addition(int,int);
int Sub(int,int);
int Mul(int,int);
int Divide(int,int);
void banner();
void print_dots(int, char);
int dispMenu();

int main()
{
    int v1,v2,result,c;

    banner();
    c = dispMenu();

    puts("\nEnter two numbers : ");
    scanf("%d%d",&v1,&v2);
    switch(c)
        {
        
        case 1:
            result = Addition(v1,v2);
             print_dots(41,'*');
            printf("\nAddition of %d + %d = %d\n",v1,v2,result);
            print_dots(41,'*');
            break;

        case 2:
            result = Sub(v1,v2);
             print_dots(41,'*');
            printf("\nSubstraction of %d - %d = %d\n",v1,v2,result);
            print_dots(41,'*');
            break;

        case 3:
            result = Mul(v1,v2);
             print_dots(41,'*');
            printf("\nMultiplication of %d * %d = %d\n",v1,v2,result);
            print_dots(41,'*');
            break;

        case 4:
            result = Divide(v1,v2);
             print_dots(41,'*');
            printf("\nDivision of %d / %d = %d\n",v1,v2,result);
            print_dots(41,'*');
            break;
    }
    return 0;
}

int Addition(int val1,int val2)
{
    int res;
    res = val1 + val2;
    return res;
}

int Sub(int val1,int val2)
{
    int res;
    res = val1- val2;
    return res;
}

int Mul(int val1,int val2)
{
    int res;
    res = val1 * val2;
    return res;
}

int Divide(int val1,int val2)
{
    int res;
    res = val1 / val2;
    return res;
}
void banner()
{
    printf("\n========================================\n");
    printf("\n\tSimple calculator\n");
    printf("\n========================================\n");
    
}

int dispMenu()
{
    int ch;
    printf("\nPress,");
    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Div");
    printf("\nChoice: ");
    scanf("%d",&ch);
    return ch;
    
}

void print_dots(int n, char ch)
{
    int it;
    printf("\n");
    for(it=0;it<n;it++)
        putchar(ch);
    printf("\n");
}