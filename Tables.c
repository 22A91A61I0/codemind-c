#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
        int p;
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
        }
    }
}