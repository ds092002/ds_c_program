#include<stdio.h>
int main()
{
    int i,j,a='A';
    for (i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("%c ",a+32);
            }
            else
            {
                printf("%c ",a);
            }
            a++;
        }
        
        printf("\n");
    }
    
}   
