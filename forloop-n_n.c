#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Value:");
    scanf("%d",&n);

    for ( i = -n; i <= n; i++)
    {
        printf("%d ",i);
    }
    return 0;
}