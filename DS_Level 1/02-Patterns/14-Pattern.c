/*In this we are going to print the permutation pattern
like this if the user entered 5

1                          0th line                                              
1 1                        1st line  
1 2 1                      2nd line 
1 3 3 1                    3rd line
1 4 6 4 1                  4th line  
In 4th line 5 values are printing that is the inner loop will more for plus one value of the outer loop
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    int icj = 1 , icjp1;
    for(int i = 0 ; i< n ; i++)
    {
        icj = 1 ;
        for(int j = 0 ; j<= i ; j++)
        { 
            printf("%d ",icj);
            icjp1 = icj *(i - j)/(j+1);   // This is the formula that we are using to calulate permutations and combinations 
            icj = icjp1 ;       
        }
        printf("\n");
    }
}