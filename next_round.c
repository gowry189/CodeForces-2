#include<stdio.h>
int main()
{
    int n,k,c=0;
    int b,i;
    scanf("%d%d",&n,&k);
    int A[n];
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    b=A[k-1];
    for(i=0;i<n;i++)
    if(A[i]>=b&&A[i]!=0)
    c++;
    printf("%d\n",c);
    return 0;
}
