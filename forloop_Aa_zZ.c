#include<stdio.h>
int main()
{
    int i;

    for ( i = 'A'; i <= 'Z'; i++)
    {
        printf("%c = (%c)\n",i,i+32);
    }
    return 0;
}