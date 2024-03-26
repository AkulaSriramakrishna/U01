/*Demo on logical ,relational and equality operators*/
#include<stdio.h>
int main()
{
    int v1,v2,v3,v4;
    printf("\n Enter the value of v1,v2,v3,v4");
    scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
    printf("\nAddress of v1=%u and its value=%d",&v1,v1);
    printf("\nAddress of v2=%u and its value=%d",&v2,v2);
    printf("\nAddress of v3=%u and its value=%d",&v3,v3);
    printf("\nAddress of v4=%u and its value=%d",&v4,v4);

    printf("\nEquality op:%d",(v1=v2));
    printf("\nGreater then op:%d",(v3>v4));
    printf("\nLess then op:%d",(v4<v3));
    printf("\nGreater than equal to:%d",(v1>=v2));
    printf("\nLess then equal to:%d",(v4<=v3));

    //demo for logical operator
    printf("\nLogical and operator:%d",(v1==v2 )&& (v1>=v3));
    printf("\nLogical OR operator:%d",(v1==v2 )||(v1>=v3));
    printf("\nLogical NOT operator:%d",(!(v1<v2)));

    printf("\n\n");

    return 0;
}