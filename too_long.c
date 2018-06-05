/*The main aim of this program is to enter the number of test cases and enter words. If the string length of that word is greater than that of 10 then those words should be printed in such a way that, first print the first charcter and then print the number of charcters-2 and the last charcter. In this way we can abbreviate*/

#include<stdio.h>
#include<string.h>

int main()
{
    //declaring the string
    char A[100];

    //Enter the number of testcases
    int z;
    scanf("%d",&z);
    while(z--)
    {
        scanf("%s",A);
        int l,n;

        //finding the length of the string 
        l=strlen(A);

        //checking whether the length is greater than 10
        if(l>10)
        {
	    n=l-2;
            printf("%c%d%c\n",A[0],n,A[l-1]);
        }
        else
        printf("%s\n",A);
    }
    return 0;
}


