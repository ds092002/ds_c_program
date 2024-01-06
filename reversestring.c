#include<stdio.h>
int main()
{
    char st[50],rev[50];
    int i,j,r=0;

    printf("Enter word:");
    scanf("%[^\n]s",&st);

    for (i = 0; st[i] != '\0'; i++)
    {}

    i--;

    for (j = i; j >= 0; j--)
    {
        rev[r] = st[j];
        r++;
    }
    rev[r] = '\0';
    printf("Reverse is: %s", rev);
    
    return 0;
}
