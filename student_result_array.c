#include<stdio.h>
int main()
{
    int m[5],s[5],gu[5],t[5],p[5];
    char g[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d marks : \n",i+1);
        printf("Enter MAths:");
        scanf("%d",&m[i]);
        printf("Enter Scie:");
        scanf("%d",&s[i]);
        printf("Enter guj:");
        scanf("%d",&gu[i]);

        t[i] = m[i] + s[i] + gu[i];
        printf("Toal : %d\n",t[i]);

        p[i] = t[i] / 5 ;
        printf("per : %d\n ",p[i]);

        if (p[i>=90])
        {
            g[i]='A';
        }
        else if (p[i]>=80)
        {
            g[i]='B';
        }
        else if (p[i]>=70)
        {
            g[i]='C';
        }
        else if (p[i]>=60)
        {
            g[i]='D';
        }
        else if (p[i]>=40)
        {
            g[i]='E';
        }
        else
        {
            g[i]='F';
        }

        printf("grad: %c\n ",g[i]);
    }
    
    return 0;
}