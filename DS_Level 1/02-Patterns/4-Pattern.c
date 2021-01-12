/* In this we are going to print this pattern
****
 ***
  **
   *
   Depending upon the no of lines given  */
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the no of lines \n");
    scanf("%d",&n);
    int star = 5 ;
    int sp = 0 ; 
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= sp ; j++)
        {
            printf(" ");

        }
        for(int k =1 ; k<= star ; k++)
        {
            printf("*");
        }


        printf("\n"); 
        sp ++ ; 
        star -- ;
    }
}