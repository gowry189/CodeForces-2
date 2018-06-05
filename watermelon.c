/*Input the weight of the watermelon bought by the two children and then finding the ways in which they can cut the watermelon such that the weight remains even.This can be obtained by inputting the weight and then checking if its divisible by 2 and also checking that the weight is not 2. If it encountered this condition then print YES or else NO*/

#include<stdio.h>
int main()
{
    int w;

    //input the weight.
    scanf("%d",&w);
    
    //checking if its divisible by two.
    if(w%2==0)
    {
	//checking if the entered value is not two.
        if(w!=2)
        printf("YES");
        else 
        printf("NO");
    }
    else
    printf("NO");
    return 0;
    
}
