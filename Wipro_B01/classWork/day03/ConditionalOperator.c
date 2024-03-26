/*Demo on conditional or turnary operator 
(exp)?opr1:opr2.
*/

#include<stdio.h>
int main()
{
    int x=10,y=20,z;

    z = (x>y) ? x:y;

    printf("\n Value of Z is : %d",z);
    return 0;
}