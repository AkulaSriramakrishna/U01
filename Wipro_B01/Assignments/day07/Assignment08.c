/*
Q.7

rotate array every kth element
i/p
No of Elements in the list = 9
Enter the elements

1 2 3 4 5 6 7 8 9

i/p
k= 3

o/p
3 2 1 6 5 4 9 8 7


k=6
6 5 4 3 2 1 9 8 7

k=4
4 3 2 1 8 7 6 5 9
*/
#include<stdio.h>
#define CAP 9
int main()
{
  int num,itr1,itr2,arr[CAP],temp,leftIndex,count = 0;
  printf("\nEnter the elements of array: ");
  for(itr1 = 0; itr1 < CAP ; itr1++)
  {
    scanf("%d",&arr[itr1]);
  }

  printf("\nEnter the Kth Element: ");
  scanf("%d",&num);

  temp =num;
  for(itr1 = (temp); itr1 <= CAP ; itr1+=temp)
  {
    //printf("%d",itr1);
    for(itr2 = itr1; itr2 > (itr1-temp); itr2--)
    {
      printf("%d\t",arr[itr2-1]);
      count ++;
    }
  }
  temp = itr1;
  leftIndex = temp - CAP;
  if(leftIndex > 0 && count < CAP)
  {
    leftIndex = temp - leftIndex;
    if(leftIndex == CAP && count == 8)
    {
      printf("%d",arr[leftIndex-1]);
    }
    else
    {
      for(itr1 = leftIndex; itr1 > (temp - num); itr1 --)
      {
        printf("%d\t",arr[itr1 -1]);
      }
    }
  }
  printf("\n");
  return 0;
}