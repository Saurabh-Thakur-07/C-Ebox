/*In this we are going to print the swastik pattern 
like if the user entered value of n = 7 this ques will be divided into 5 parts
* * * *     *   1st Part printing of stars till 1 to 4 and last column in first row 
      *     *   2nd Part printing of stars in the middle + 1 column and in the last column for 
      *     *   2nd and 3rd rows respectively
* * * * * * *   3rd part if the row number is middle + 1 then printing stars in all the columns
*     *         4th part is printing star in the 1st and middle + 1 column for
*     *         4th and 5th row respectively
*     * * * *   5 th part is printing of stars in the first column and middle + 1 till the last column of the last row
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j<= n ; j++)// generating a square box having n rows and n columns
        {
            if(i ==1)
            {
                  if( j<= (n/2 + 1)|| j == n)
                  {
                      printf("*\t");
                  }
                  else
                  {
                      printf("\t");
                  }
                  
            }
            else if(i<=n/2)
            {
                    if( j == (n/2+1)|| j ==n)
                    {
                        printf("*\t");
                    }
                    else
                    {
                        printf("\t");
                    }
            }
            else if(i == (n/2 + 1))
            {
                 printf("*\t");
            }
            else if(i < n )
            {
                 if(j==1 || j==(n/2+1))
                  {
                      printf("*\t");
                  }
                  else
                  {
                      printf("\t");
                  }                  
            }
            else
            {
                if(j == 1 || (j>=(n/2+1)&&j<= n))
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
                
            }
        }
        printf("\n");
    }
}