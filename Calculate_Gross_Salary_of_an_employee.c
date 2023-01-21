#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gs;
    scanf("%f%f%f%f",&bs,&hra,&da);
    pf=12*bs/100;
    gs=hra+da+pf+bs;
    printf("%0.2f
%0.2f",pf,gs);
}