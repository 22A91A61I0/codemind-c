#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        n=i*2;
        printf("%d ",n);
    }
}