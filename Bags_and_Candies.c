#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    if(a%d==0)
    {
        s=a/d;
        printf("%d",s);
    }
    else
    {
        s=a/d;
        printf("%d",s+1);
    }
}