#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int *p;
    int *q;

    p = &a;
    q = &b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("%d\n",*p);
    printf("%d\n",*q);



    printf("%d\n", p);
    // printf("%d\n", *p);
    printf("%d\n",&a);
    printf("%p\n", p);
    printf("%p\n",&a);
    printf("%p\n", p);
    printf("%d\n", q);
    // printf("%d\n", *q);
    printf("%d\n",&b);
    printf("%p\n", q);
    printf("%p\n",&b);
    printf("%p", q);
}