#include<stdio.h>
int main()
{
    float i , a=0.5 , b;

    printf("Enter Value");
    scanf("%f",&b);
    printf("%.2f ",a);

    for ( i = 0.5; i <= b; i++)
    {
        printf("%.2f ", a += i*1);
    }
    return 0;
}