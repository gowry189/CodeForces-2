#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    (y*log(x)>x*log(y))?printf(">"):((x*log(y)>y*log(x))?printf("<"):printf("="));
    return 0;
}
