#include<stdio.h>
int main()
{
    int a=20,b=25,c;

    c=a;
    a=b;
    b=c;

    printf("A is :%d\n",a);
    printf("B is :%d\n",b);

    return 0;

}