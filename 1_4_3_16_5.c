#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if (i % 2 != 0)
        {
             printf("%d ",i);
        }
        else
        {
             printf("%d ",i*i);
        }
    }
    return 0;
}