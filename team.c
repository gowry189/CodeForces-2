/*There are three friends and they have to input three numbers either 1 or 0. If the inputted value is one then she is sure about her solution for a problem. If sum of the three found to be greater or equal to 2 then they can solve the problem. So the aim of the programmer is to find the number of times they can find the solution if they have to solve n number of problem.*/ 


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
