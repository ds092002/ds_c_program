#include<stdio.h>
int main()
{
    int i,num,n;

    printf("Enter Number:");
    scanf("%d",&num);

    for ( i = 1; i <= 10; i++)
    {
        n = (num * i);
        printf("%d x %d = %d\n",num , i , n);
    }
    return 0;
}