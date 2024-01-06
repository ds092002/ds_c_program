#include<stdio.h>
int main()
{
    int i;

    for ( i = 0; i < 26; i+=2)
    {
        if (i % 4 == 0)
        {
            printf("%c ", i + 65);
        }
        else
        {
            printf("%c ", i + 97);
        }
    }
    return 0;
}