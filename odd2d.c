#include<stdio.h>
int main()
{
    int i,j,a[5][5],s=1;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            a[i][j] = i * 2 + 1;
        }
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}