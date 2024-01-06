#include<stdio.h>
int main()
{
    int i,j,a[5][5],s=65;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            a[i][j] = s;
        }
        s++;
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}