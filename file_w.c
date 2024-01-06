#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("sd.txt","w+");

    fprintf(fp,"Hi My Name Is Dhaval Solanki........\n");
    fputs("I Love Coding .........\n",fp);
    
    fclose(fp);

    return 0;

}