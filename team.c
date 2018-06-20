#include<stdio.h>
int main()
{
    int n,a,b,c,i,cnt=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(sum>=2)
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
