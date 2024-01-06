#include<stdio.h>

int math , guj , eng , total;
float per;

void getper()
{
    per = total * 100 / 300 ;
    printf("Total Percantage is :-----> %.2f\n",per);

}
void gettotal()
{
    total = math + guj + eng ;
    printf("Total Mraks is :-----> %d\n",total);
    
    getper();
}
void getmarks()
{
    printf("Enter Maths Mraks:----->");
    scanf("%d",&math);
    printf("Enter Gujrati Mraks:----->");
    scanf("%d",&guj);
    printf("Enter English Mraks:----->");
    scanf("%d",&eng);
    
    gettotal();
}
int main()
{
    printf(":STUDENTS MARKS AND PERCANTAGE:\n");

    getmarks();
}					