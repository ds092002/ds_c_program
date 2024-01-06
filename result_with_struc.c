
#include <stdio.h>

struct student
{
    int math, sci, guj, total, per;
    char grade;
};


int main()
{
    struct student studentdata;

    printf("Enter Maths Marks: ");
    scanf("%d",&studentdata.math);
    printf("Enter Science Marks: ");
    scanf("%d",&studentdata.sci);
    printf("Enter Gujrati Marks: ");
    scanf("%d",&studentdata.guj);

    studentdata.total = studentdata.math + studentdata.sci + studentdata.guj;
    printf("Total is: %d\n",studentdata.total);

    studentdata.per = studentdata.total / 3;
    printf("Per is: %d\n",studentdata.per);

    if(studentdata.per >= 90)
    {
        studentdata.grade = 'A';
    }
    else if (studentdata.per >= 80)
    {
        studentdata.grade = 'B';
    }
    else if (studentdata.per >= 70)
    {
        studentdata.grade = 'C';
    }
    else if (studentdata.per >= 50)
    {
        studentdata.grade = 'D';
    }
    else if (studentdata.per >= 33)
    {
        studentdata.grade = 'F';
    }

    printf("Grade is: %c\n",studentdata.grade);


}