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
        printf("\nNOT DIVISEBLE BY 5");
    }
    if (a%3==0)
    {
        printf("\nDIVISEBLE BY 3");
    }
    else
    {
        printf("\nNOT DIVISEBLE BY 3");
    }
    return 0;
}