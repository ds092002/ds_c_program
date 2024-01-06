#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value:");
    scanf("%d",&n);

    for ( i = n; i >= 1; i--)
    {
        printf("%d ",i);
    }
    return 0;
}