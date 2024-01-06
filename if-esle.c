#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A value:");
    scanf("%d",&a);
    printf("Enter B value:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("A is big");
    }
    else
    {
        printf("A is small");
    }
    
    return 0;
}