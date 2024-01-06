#include<stdio.h>
int main()
{
    float r=50,q=200,b=9500,gst,totalg,net;

    gst = (r*18)/100;
    totalg = q * gst;
    net = totalg + b;

    printf("GST IS %f\n",gst);
    printf("TOAl IS :%f\n",totalg);
    printf("NET IS :%f\n",net);

    return 0;
}