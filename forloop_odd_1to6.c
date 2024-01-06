#include<stdio.h>
int main()
{
    int i,s=0;

    for ( i = 1; i <= 6; i+=2)
    {
        
        printf("%d ",i);
        s += i;
    }
    printf("\nSum is : %d\n",s);
    return 0;    
}