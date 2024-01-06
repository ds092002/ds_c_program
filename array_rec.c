#include<stdio.h>

int a(int n)
{
    int c = 0;
    for(int i = 0; i < 10; i++)
    {
        c += n;
    }
    return c;
}	

int main()
{
    int ans[10], n;
    
    for(int i = 0; i < 10; i++)
    {
        ans[i] = a(i);
        printf("Enter [%d] Number:", i + 1);
        scanf("%d", &ans[i]);
    }
    
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += ans[i];
    }
    
    printf("Sum is: %d\n", sum);
    
    return 0;
}