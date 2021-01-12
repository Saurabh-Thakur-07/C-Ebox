/*
In this ques we are going to print he pattern of w
like if the user entered 5 the folowing pattern should be displayed
*       *
*       *
*   *   *
* *   * *
*       *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    for(int i = 1 ; i<= n ; i++)
    {
        for(int j = 1; j <= n ; j++)
        {
            if( j==1 || j==n)
            {
                printf("*");
            }
            else if(i>n/2&&(i==j||(i+j == n+1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}
