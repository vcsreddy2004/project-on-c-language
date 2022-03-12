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
    printf("%d is biggest element:%d\n",a,a>b&&a>c);
    printf("%d is biggest element:%d\n",b,b>a&&b>c);
    printf("%d is biggest element:%d\n",c,c>a&&c>b);
}