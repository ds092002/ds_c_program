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
            if (a[i][j] == 0)
            {
              printf("\t");
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;

}