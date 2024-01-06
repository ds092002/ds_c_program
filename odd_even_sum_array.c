#include<stdio.h>
int main()
{
    int i,a[10];
    int even= 0, odd = 0;


    for ( i = 0; i < 10; i++)
    {
        printf("Number:");
        scanf("%d",&a[i]);
        if (a[i]% 2==0)
        {
            even += a[i];
        }
        else
        {
            odd += a[i];
        }
    }
    printf("odd sum : %d\n",odd);
    printf("even sum : %d\n",even);

    return 0;
}