#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5!=0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",(a/10)+(a%10)/5);
    }
}