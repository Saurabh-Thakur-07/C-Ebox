/*In this we are going to print the reverse diagonal using indexing this is one is my method
In the Second method I have used the logic 

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines  : \n");
    scanf("%d",&n);
    int spaces , rev_diagonal ; 
    rev_diagonal= n ; 
    spaces = n-1 ;
    for(int i = n ; i >= 1 ; i--)
    {
        for(int j =1 ; j<= spaces ; j++)
        {
            printf(" ");
        }
        for(int k = 1; k<= i ; k++)
        {
            if(k == rev_diagonal)
            printf("*");

        }
        printf("\n");
        spaces -- ;
        rev_diagonal -- ;
    }

}*/
// in this logic sum of any row or column is equal to n + 1 where n is the no of rows or lines in the matrix in this e consider a matrix of n * n of value of n entered 
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of lines  : \n");
    scanf("%d",&n);
    for(int i = 1 ; i<= n ;i++)
    {
        for(int j =1 ;j<= n ;j++)
        {
            if((i+j)==n+1)
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

