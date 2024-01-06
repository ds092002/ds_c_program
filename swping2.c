#include<stdio.h>
int main()
{
    int a=20,b=25;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("A is :%d\n",a);
    printf("B is :%d\n",b);

    return 0;

}