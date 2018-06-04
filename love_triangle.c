#include<stdio.h>

int main()
{
    int n,a[5010],i;
    scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
    scanf("%d",&a[i]);
    for(i=1 ; i<=n ; i++)                                                                                  
    {
	if(a[a[a[i]]]==i)
	{
	  printf("YES");
	  break;
	}
    }
	if(i>n)
    {
	printf("NO");
    }
    return 0;
}
