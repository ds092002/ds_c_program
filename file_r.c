#include<stdio.h>
int main()
{
    FILE*fp;
    int sd[500];

    fp = fopen("sd.txt","r");
    

    while (fscanf(fp,"%s",sd) != EOF)
    {
        printf("%s\n ",sd);
    }
    fclose(fp);

    return 0;
    
}