/*In this we are going to print the pattern like this 
*******
 *   *
  * *
   *
  ***
 *****
*******
Pattern of a watch glass 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int space , stars ;
    space = 0 ;
    stars = n ; 
    for(int i = 1 ; i<= n ; i++)
      {
          for(int k = 1 ; k <= space ; k++)
          {
              printf(" ");
          }
          for(int j =1 ; j<= stars ; j++)
          {
              if((i > 1 && i<= n/2)&&(j> 1&& j <stars))
              {
                  printf(" ");
              }
              else
              {
                   printf("*");      
              }
          }
          printf("\n");
          if(i <= n/2 )
          {
              space ++ ;
              stars -=2 ;
          }
          else
          {
              space -- ; 
              stars += 2; 

          }
          
      }
}
