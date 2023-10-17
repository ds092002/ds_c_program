#include<stdio.h>
int main()
{
    int i,j,a[5][5],s=0;

    for ( i = 4; i >= 0; i--)
    {
        for ( j = 0; j < 5; j++)
        {
            a[s][j] = i+1;
        }
        s++;
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