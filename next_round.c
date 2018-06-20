/*The aim of the problem is to find the participants who are eligible to attend the next round. For attaining, the number of participants(n) and the k th player is inputted and after that an array is entered with n members and the aim is find whether a[i] th value is greater than or equal to the kth payers value. If its encountered then counter is added.*/

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
