/* Int his we are going to print the pattern like this if the user enter 4
1     1
12   21
123 321
1234321
For particular n value we have n rows and 2n-1 columns 
*/
#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int space , stars ;
    space =  2*n - 3 ;
    stars = 1 ; 
    int counter = 1 ;
    for(int i = 1 ; i<= n ; i++)
    {
        counter = 1 ;
        for(int j = 1 ; j<= stars ; j++)
        {
            printf("%d",counter);
            counter++ ;
        }
        for(int k =1 ; k<= space ; k++)
        {
            printf(" ");
        }
        if(i == n)
        {
            stars -- ;
            counter --;
        }
        for(int j = 1 ; j<=  stars ; j++)
        {
            counter -- ;
            printf("%d",counter);
        }
        printf("\n");
        stars ++ ;
        space -= 2 ;
    } 

}