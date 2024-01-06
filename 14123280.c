#include<stdio.h>
int main()
{
    int i,n,a=1;
    printf("Enter value:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",a*i);
        a *= 2;
    }
    return 0;
}