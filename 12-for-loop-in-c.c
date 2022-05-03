#include<stdio.h>
void main()
{
    int i;
    /* for(i=0; i<=10; i++)
    {
        printf("hellow world\n");
    } */
    /*for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
    } */
    /* for(i=1; i<=10; i++)
    {
        printf("5 X %d = %d\n",i,i*5);
    } */
    i=1;
    for( ; ; )
    {
        if(i>10)
        {
            break;
        }
        else 
        {
            printf("%d\n",i);
        }
        i++;
    }
}