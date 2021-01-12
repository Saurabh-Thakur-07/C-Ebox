/*It is also like the 5-Pattern 
In this also there is an assumption it is valid when n value is odd 
in case of even we will not be able to generate the same triangle*/
//This Pattern is a hollow diamond 
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines \n");
    scanf("%d",&n);
    int spaces , stars  ; 
    stars = (n/2)+1 ;
    spaces  = 1 ;
    for(int i =1 ; i<= n ; i++)
    {
        for(int j = 1 ; j<= stars ; j++)
        {
            printf("*");

        }
        for(int k = 1 ; k<= spaces ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j<= stars ; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i <= n/2 )
        {
            spaces += 2 ;
            stars -- ;
        }
        else
        {
            stars ++ ; 
            spaces -=2 ; 
        }
        
    }
}