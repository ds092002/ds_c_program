#include<stdio.h>
int main()
{
    char a[50],b[50],c[50];
    int i=0,j=0;

    printf("string 1 :");
    scanf("%s",&a);
    while (a[i] != '\0')
    {
        c[j]=a[i];
        i++;
        j++;
    }
    i = 0;
    printf("String 2 :");
    scanf("%s",&b);
    while (b[i] != '\0')
    {
        c[j] = b[i];
        i++;
        j++;
    }

    c[j] != '\0';

    printf("String 3 is:%s",c);
    
    return 0;
}