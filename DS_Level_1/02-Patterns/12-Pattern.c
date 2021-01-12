/*In this we are going to display the pattern of fibonacci numbers instead of printing the pattern of stars 
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines  \n");
    scanf("%d",&n);
    int no1 = 0 , no2 = 1  , sum ; 
    for(int i =1 ; i<= n ; i++)
    {
        for(int j =1 ; j<=i ; j++)
        {
            printf("%d ",no1);
            sum = no1 + no2 ;
            no1 = no2;
            no2 = sum ;
        }
        printf("\n");
    }
}