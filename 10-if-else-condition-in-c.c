#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first value");
    scanf("%d",&a);
    printf("Enter second valur");
    scanf("%d",&b);
    if(a==b)
    {
        printf("both %d and %d are equal",a,b);
    }
    else
    {
        printf("both %d and %d are not equal",a,b);
    }
}