#include<stdio.h>
int main()
{
    int a;

    printf("ENTER value:");
    scanf("%d",&a);

    if (a%5==0)
    {
        printf("DIVISEBLE BY 5");
    }
    else
    {
        printf("NOT DIVISEBLE BY 5");
    }
    return 0;
}