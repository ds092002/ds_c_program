#include<stdio.h>
int main()
{
    int i,j,a[3][3],s=0,b=0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            printf("Enter [%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
        /* code */
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
            s += a[i][j];
        }
        printf("\n");
    }
    printf("Total sum : %d",s);
    return 0;

}