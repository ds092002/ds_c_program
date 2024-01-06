#include<stdio.h>
int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2 ; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{
   int n;

   printf("Enter number:");
   scanf("%d",&n);

   if(perfect(n))
   {
    printf("%d is perfect number:\n",n);
   }
   else
   {
    printf("\n%d is  not perfect :",n);
   }
   
}