#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first value");
    scanf("%d",&a);
    printf("Enter second value");
    scanf("%d",&b);
    printf("Enter third value");
    scanf("%d",&c);
    printf("you entered %d,%d and %d\n",a,b,c);
    printf("common elements found = %d",a==b||b==c||a==c);
}