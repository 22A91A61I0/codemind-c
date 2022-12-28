#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0)
    {
        n=n/4;
        printf("%d",n);
    }
    else
    {
        n=n/4;
        printf("%d",n+1);
    }
}