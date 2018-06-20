#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s1[100],s2[300];
    scanf("%s",s1);
    int i=0,j=0;
    for(int i=0;i<strlen(s1);i++)
    {
     if(s1[i]!='A'&&s1[i]!='a'&&s1[i]!='E'&&s1[i]!='e'&&s1[i]!='I'&&s1[i]!='i'&&s1[i]!='O'&&s1[i]!='o'&&s1[i]!='U'&&s1[i]!='u'&&s1[i]!='Y'&&s1[i]!='y')
     {
         s2[j]= '.';
         j++;
         s2[j]=tolower(s1[i]);
         j++;
         
     }
    }
    s2[j]=0;
    printf("%s",s2);
    return 0;
}
