#include<stdio.h>

int main()
{
    char a[20];
    int i = 0;

    printf("Enter words: ");
    scanf("%[^\n]s",&a);

    while (a[i] != '\0')
    {
        printf("Char is: %c\n", a[i]);
        i++;
    }
    
    printf("Length is: %d", i);

    return 0;
}
