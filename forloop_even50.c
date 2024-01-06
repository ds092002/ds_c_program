#include<stdio.h>
int main()
{
    int i;

    for ( i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

/*
    for ( i = 0; i <= 50; i+=2)
    {
        printf("%d ",i);
    }
*/