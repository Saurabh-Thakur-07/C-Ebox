/*In this program we are going to print a quadilateral , like this if the user enters 5  , approximation here is it applicable for odd numbers only

  *
 * *
*   *        This pattern we are going to print 
 * *
  * 
   
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines : \n");
    scanf("%d",&n);
    int outer_space = n/2 , inner_space = -1 ;
    for(int i =1 ; i<= n ; i++)
    {
        for(int j = 1 ; j<= outer_space ; j++)
        {
            printf(" ");
        }
        printf("*");//As one star has to be printed after the outer space 
        for(int k = 1 ; k<= inner_space ; k++)
        {
            printf(" ");
        }
        if(i > 1 && i < n)// As we dont need this star in the first and the last line
        {
             printf("*");
        }
        printf("\n");
        if(i<= n/2)
        {
            outer_space -- ;
            inner_space += 2 ;
        }
        else{
            outer_space++;
            inner_space -= 2 ;
        }
    }

}