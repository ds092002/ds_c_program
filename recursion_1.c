#include<stdio.h>
int a(int b)
{
    printf("%d , ",b);
    if(b<10)
    {
        return a(++b);
    }
    else
    {
        return b;
    }
    
}
int main()
{
    int n=1;
    a(n);
}