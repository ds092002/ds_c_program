#include<stdio.h>
int main()
{
    int m,s,g,t;
    float p;

    printf("Enter Maths Mraks:");
    scanf("%d",&m);
    printf("Enter Science Marks:");
    scanf("%d",&s);
    printf("Enter Gujrati Marks:");
    scanf("%d",&g);

    t = m + s + g;
    printf("Total Marks : %d\n",t);

    p = t / 3;
    printf("Perchantage is : %.2f\n",p);

    return 0; 
}