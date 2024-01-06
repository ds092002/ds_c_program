#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value:");
    scanf("%d",&n);

    for(i=10;i>=n;i--)
    {
        printf("%d ",i);
    }
    return 0;
}