/*
demo on pointers.
*/

int main()
{
    int qty = 179;
    int *ptr;
    char *ptr1;
    float *ptr2;

    printf("Size of pointer 1:%d\n",sizeof(ptr));
    printf("Size of pointer 2:%d\n",sizeof(ptr1));
    printf("Size of pointer 3:%d\n",sizeof(ptr2));

    printf("Adder of pointer 1:%u\n",&ptr);
    printf("Adder of pointer 2:%u\n",&ptr1);
    printf("Adder of pointer 3:%u\n",&ptr2);

    ptr = &qty;
    printf("\nContent of qty:%d",qty);
    printf("\nContent of ptr(address):%u",&ptr);
   // ptr = qty;
    printf("\nContent of ptr:%u",*(ptr));

}