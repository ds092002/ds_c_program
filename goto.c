#include<stdio.h>
int main()
{
    int i = 1,j;
    char a = 3;
    shruti :
       if (i <= 5)
       {
          j=1;
           dhaval:
             if (j<=i)
             {
                printf(" *");
                j++;
                goto dhaval;
             }
        i++;
        printf("\n");
        goto shruti;
       }
       
}