#include<stdio.h>
int reverse(int a)
{
    int sum = 0;
    while (a != 0)
    {
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    
    return sum;
}
int main()
{
    int num,r;

    printf("Enter number:");
    scanf("%d",&num);

    r = reverse(num);

    printf("Reverse is: %d\n",r);
}