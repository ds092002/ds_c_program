#include <stdio.h>
int main()
{
    int a = 20;
    int b = 50;
    int ch;

    printf(" 1 Addition \n");
    printf(" 2 Substraction \n");
    printf(" 3 Multiplication \n");
    printf(" 4 Division \n");
    printf("Enter Your Choice :");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
          printf("Addtion of a and d is : %d\n",a+b);
        break;
    case 2:
          printf("Substraction of a and d is : %d\n",a-b);
        break;
    case 3:
          printf("Multiplication of a and d is : %d\n",a*b);
        break;
    case 4:
          printf("Divsion of a and d is : %d\n",a/b);
        break;
    default:
          printf("You Enter Wrong Choice!!!!!!!!!!!!!!!!!!   ");
        break;
    }
    
}