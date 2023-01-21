#include<stdio.h>
int main()
{
    int r;
    float area,peri;
    scanf("%d",&r);
    area=2*3.14*r;
    peri=3.14*r*r;
    printf("%0.2f
%0.2f",peri,area);
}