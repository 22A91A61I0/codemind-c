#include<stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else
        {
            sum2=sum2+a[i];
        }
    }
    if(sum1>sum2)
    {
        s=sum1-sum2;
    }
    else if(sum1<sum2)
    {
        s=sum2-sum1;
    }
    printf("%d",s);
}