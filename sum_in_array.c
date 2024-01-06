#include<stdio.h>
int main()
{
    int i,a[10];
    int sum=0;


    for ( i = 0; i < 10; i++)
    {
        printf("Number:");
        scanf("%d",&a[i]);
        
        sum += a[i];
    }
    printf("sum : %d\n",sum);

    return 0;
}