#include<stdio.h>
int a(int b)
{
    if(b==0)
    {
        return 0;
    }
    else if(b==1)
    {
        return 1;
    }
    else
    {
        return a(b-1) + a(b-2);
    }
 
}
int main()
{
    int i,n;
    
    printf("Enter value:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("%d , ",a(i));
    }
}