#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first value");
    scanf("%d",&a);
    printf("Enter second value");
    scanf("%d",&b);
    printf("%d & %d = %d\n",a,b,a&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d XOR %d = %d\n",a,b,a^b);
    printf("%d left shift two steps = %d\n",a,a<<2);
    printf("%d right shift two steps = %d",a,a>>2);
}