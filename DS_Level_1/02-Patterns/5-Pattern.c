/* In this we are going to control the values Like that for the spaces and no of stars , the pattern is
                        spaces  stars 
  *                        2      1
 ***                       1      3
*****                      0      5
 ***                       1      3
  *                        2      1
We will use if statement ot control the of values as it first dec , inc and then inc , dec
An exception it is applicable for odd no of lines
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines \n");
    scanf("%d",&n);
    int sp , star ; 
    sp = n/2 ; 
    star = 1; 
    for(int i = 1 ; i<= n ; i++)// for no of lines
    {
        for(int j = 1 ; j<= sp ; j++)
        {
            printf(" ");
        }
        for(int k= 1 ; k<= star ; k++)
        {
            printf("*");
        }
        printf("\n");
        if(i<= n/2)
        {
            sp -- ;
            star += 2 ;
        }
        else
        {
            sp ++ ; 
            star -=2 ; 
            
        }
        

    }

}