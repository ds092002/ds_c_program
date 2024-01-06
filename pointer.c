#include <stdio.h>
int main()
{
    int a = 20 , *p , **q;
    p = &a;
    q = &p;

    printf(" Value of A is : %d" , a);
    printf("\n Addres of A is : %u",&a);
    printf("\n Addres of A using p is : %d ", p);
    printf("\n Addres of p is : %u " , &p);
    printf("\n Value of A using P is : %d ",*p);
    printf("\n Addres of p using q is : %d ",q);
    printf("\n Value of A using q is : %d ",**q);

    return 0;
}