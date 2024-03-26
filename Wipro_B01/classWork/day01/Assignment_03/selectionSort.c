#include<stdio.h>
void Display(int [],int);
void selectionSort(int [],int);
int main()
{
    int arr[]={2,9,3,6,4,5};
    int Cap;
    Cap = sizeof(arr)/sizeof(arr[0]);
    Display(arr,Cap);
    selectionSort(arr,Cap);
    Display(arr,Cap);
}
void Display(int a[],int n)
{
    int i;
    printf("{");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("}");

}
void selectionSort(int a[],int n)
{
    int i,j,minInd,t;
    for(i=0;i<n;i++)
    {
        minInd = a[i];
        //printf("%d\n",minInd);
        for(j=i+1;j<n;j++)
        {
            if(minInd > a[j])
            {
                t=a[j];
                a[j]=minInd; 
                minInd = t;              
                
            }
        }
    }

}