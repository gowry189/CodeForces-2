/*This program is to print the pattern as per the condition given. The condition is that to print I love it or I hate it according to the number given by the user.*/ 

#include<stdio.h>
int main()
{
    //Declaring two strings.
    char Str1[]="I love";
    char Str2[]="I hate";
    
    //Declaring the integer n.
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //Cheking if condition is true.
        if(1&i)
        printf("%s",Str1);
        else
        printf("%s",Str2);
        
        //Checking if its the last number. If its so then you should print it . So should not execute this if statement
        if(i!=n-1)
        printf(" that ");
    }
    printf(" it");
    return 0;
    
}
