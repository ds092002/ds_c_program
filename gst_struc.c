#include <stdio.h>

struct gstbill
{
    float price, quantity, gst, billamount, totalgst, netbill;
    char name[50];
};

int main()
{
    struct gstbill a;

    printf("Enter Product Name: ");
    scanf("%s", &a.name);

    printf("Enter Price: ");
    scanf("%f", &a.price);

    printf("Enter Quantity: ");
    scanf("%f", &a.quantity);

    printf("Enter Bill Amount: ");
    scanf("%f", &a.billamount);

    a.gst = (a.price * 18) / 100;
    a.totalgst = a.quantity * a.gst;
    a.netbill = a.billamount + a.totalgst;

    printf("GST is: %.2f\n", a.gst);
    printf("Total GST: %.2f\n", a.totalgst);
    printf("Total Net Bill Amount: %.2f\n", a.netbill);

    return 0;
}


