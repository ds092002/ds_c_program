#include<stdio.h>
int main()
{
    int i=1,j;

    do
    {
        j=1;
        do
        {
            printf("%d ",i+1);
            j++;
        } 
        while (j<=5);
        printf("\n");
        i+=2;
    } 
    while (i<=10);

    return 0;
}