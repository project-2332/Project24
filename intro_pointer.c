#include<stdio.h>
int main()
{
    int a=5;
    int * ptr =&a; //variable ptr is type of pointer having address of variable
    printf("Value of a=%d",a);
    printf("\naddress of variable a without pointer=%d",&a);
    printf("\naddress of variable a without pointer=%x",&a);
    printf("\naddress of variable a without pointer=%X",&a);
    printf("\naddress of variable a without pointer=%p",&a);

    printf("\naddress of variable a with pointer =%d",ptr);

    printf("\naddress of pointer ptr =%d",&ptr);
    printf("\nvalue of a by pointer ptr=%d",*ptr);
}