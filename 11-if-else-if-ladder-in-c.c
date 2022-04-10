#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENter first value");
    scanf("%d",&a);
    printf("Enter second value");
    scanf("%d",&b);
    printf("Enter third value");
    scanf("%d",&c);
    if(a==b && b==c && c==a)
    {
        printf("all are equal");
    }
    else if(a==b)
    {
        printf("common elements was found that is %d",a);
    }
    else if(b==c)
    {
        printf("common elements was found that is %d",b);
    }
    else if(a==c)
    {
        printf("common elements found that is %d",c);
    }
    else
    {
        printf("common elements not found");
    }
}