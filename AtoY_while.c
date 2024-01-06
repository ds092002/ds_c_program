#include<stdio.h>
int main()
{
    int i=1,j,a='A';

    do
    {
        j=1;
        do
        {
            printf("%c ",a);
            a++;
            j++;
        } 
        while (j<=5);
        printf("\n");
        i++;
    } 
    while (i<=5);

    return 0;
}