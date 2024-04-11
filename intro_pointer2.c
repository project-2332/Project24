#include<stdio.h>
int main()
{
    int a =5;
    int*ptr; // declaration of pointer
    ptr =&a; //assigning the address of variable a

    printf("value of a=%d",a);
    printf("\naddress of variable a without pointer =%d",&a);
    printf("\naddresss of variable a without pointer=%x",&a);
    printf("\naddress of variable a without pointer=%X",&a);
    printf("\naddress of variable a without pointer =%p",&a);

    printf("\naddress of variable a with pointer=%d",ptr); //show address of variable a

    printf("\naddress of pointer ptr=%d",&ptr); //show address of printer ptr

    printf("\nvalue of a by pointer ptr=%d",*ptr); //show value of a 
}