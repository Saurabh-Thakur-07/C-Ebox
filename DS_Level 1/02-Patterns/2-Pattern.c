/* In this we are going to print he patterns like 
****
***
**
*  no of lines of star depen upon the no of lines inputed */
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines \n");
    scanf("%d",&n);
    for(int i = n ; i>=1 ; i--)
    {
        for(int j = 1 ; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}