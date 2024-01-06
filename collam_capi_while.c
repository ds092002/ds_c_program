#include<stdio.h>
int main()
{
    int i=1,j,a='A';

    while (i<=5)
    {
        j=1;
        while (j<=i)
        {
            if (j%2==1)
            {
                printf("%c ",a+32);
            }
            else
            {
                printf("%c ",a);
            }
            j++;
            a++;
        }
        printf("\n");
        i++;
    }
    return 0;
}