#include<stdio.h>

int main()
{
      long int n;
      scanf("%ld",&n);
      if(n>=10||n<=999)
      {
      if(n%2==1)
      printf("1");
      else
      printf("0");
      }
      return 0;
      

}
