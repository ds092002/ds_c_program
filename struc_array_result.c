#include<stdio.h>

struct a
{
    int math[5], sci[5], guj[5], total[5];
    float per[5];
    char name[5],grade[5];
};

int main()
{
    struct a result;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name Of Student %d: ", i + 1);
        scanf(" %s", &result.name[i]);

        printf("Enter Maths Marks: ");
        scanf("%d", &result.math[i]);
        printf("Enter Science Marks: ");
        scanf("%d", &result.sci[i]);
        printf("Enter Gujrati Marks: ");
        scanf("%d", &result.guj[i]);

        result.total[i] = result.math[i] + result.sci[i] + result.guj[i];
        printf("Total Marks: %d\n", result.total[i]);

        result.per[i] = result.total[i] / 3;
        printf("Percentage: %0.2f\n", result.per[i]);
    
        if (result.per[i]>=90)
        {
             result.grade[i]='A';
        }
        else if (result.per[i]>=70)
        {
            result.grade[i]='B';
        }
        else if (result.per[i]>=50)
        {
            result.grade[i]='C';
        }
        else if (result.per[i]>=35)
        {
            result.grade[i]='D';
        }
        else 
        {
            result.grade[i]='F';
        }
        printf("Grade is: %c\n",result.grade[i]);
       
    }
    return 0;
}
