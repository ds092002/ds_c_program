#include<stdio.h>
int main()
{
    int i,a[10];
    int even= 0, odd = 0;


    for ( i = 0; i < 10; i++)
    {
        printf("Number:");
        scanf("%d",&a[i]);
    }

    for ( i = 2; i < 10; i+=2)
    {
        printf("even :%d\n",i);
        even += i;
    }
        printf("even sum : %d\n",even);
    
    for ( i = 1; i < 10; i+=2)
    {
            printf("even :%d\n",i);
            odd += i;
    }
            printf("odd sum : %d\n",odd);
    
    

    return 0;
}