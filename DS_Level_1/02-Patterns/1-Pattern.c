/* In this we are going to print he patterns like 
*
**
***
****  no of lines of star depen upon the no of lines inputed 
The major concept here is that of abstraction in this we layer our thinking
Here our first loop is for no  of lines 
while the next loop is for printing the stars and deciding its logic */
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines \n");
    scanf("%d",&n);
    for(int i = 1 ; i<= n ; i++)
    {
        for(int j = 1 ; j<=i;j++)
        {
              printf("*");
        }
        printf("\n");
    }    
}