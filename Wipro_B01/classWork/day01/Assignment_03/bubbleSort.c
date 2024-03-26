#include<stdio.h>
void display(int [],int);
void Bubbleshort(int [],int);
int main()
{
    int a[]={1,9,4,5,3};
    int i,j,c,b,k,num;
    int Cap;
    Cap = sizeof(a)/sizeof(a[0]);
    display(a,Cap);
    Bubbleshort(a,Cap);
    display(a,Cap);
    
}
void Bubbleshort(int a[],int n)
{
int c,i,j;
for(i=0;i<n;i++)
    {
        for(j = 0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                c = a[j+1];
                a[j+1] = a[j];
                a[j]=c;
            }
        }
    }
}
void display(int a[],int n)
{
    int k;
    printf("{");
    for(k=0 ; k<n;k++)
    {    
        
        printf("%d",a[k]);        
    }
    printf("}\n");
}