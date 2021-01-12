/* In this we are going to print the arrow size 
supposing if we enter 5 
5 rows will be printed - 
     *  
     * *
* * * * *
     * *
     * 
     This logic I developed myself by looking at the question video 
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int spaces = n/2 ; 
    int val = 1 ;
    for(int i = 1 ; i<= n ; i++)
    { 
        for(int j = 1 ; j<= spaces ; j++)// for spaces
        {
            if(i == (n/2 + 1))
            {
                printf("*");
            }
            else
            {
               printf(" ");    
            } 
        }
        for(int k = 1 ; k<= val ;  k++)//for stars 
        {
            printf("*");
        }
    if(i <= n/2)
    {
        val ++;
    }
    else
    {
        val -- ; 
    }
    
     printf("\n");
    }
}