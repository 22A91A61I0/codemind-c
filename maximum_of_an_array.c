#include<stdio.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[n];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("%d",max);
}