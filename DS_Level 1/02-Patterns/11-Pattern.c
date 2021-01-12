/*In this we are going to print patterns like this 
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15
In this instead of printing stars  we are going to print out numbers
*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of lines \n");
    scanf("%d",&n);
    int value = 1 ;
    for(int i = 1 ; i<=n;i++)
    {
        for(int j = 1 ; j<= i ; j++)
        {
            printf("%d  ",value);
            value ++ ;
        }
        printf("\n");
    }
}