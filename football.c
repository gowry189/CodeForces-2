/*The aim of the program is to find whether the football team is in danger or not. A team is said to be dangerous if in a string denoting players have continuous 7 same team members. */ 

#include<stdio.h>
#include<string.h>
int main()
{
    //Declaring a string 
    char S[100];
    scanf("%s",S);
    int n=strlen(S)-1;
    int i=0,cnt=1;
    while(n--)
    {
        //Checking if the 2 continuous elements are same
        if(S[i]==S[i+1])
        cnt++;
        else
        cnt=1;
        
        //Checking if count is 7
        if(cnt==7)
        {
        printf("YES");
        return 0;
        }
        i++;
       
    }
    printf("NO");
    
    return 0;
    
}
