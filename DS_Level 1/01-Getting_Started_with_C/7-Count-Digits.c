//I learnt a new way to count digits in a no without using the '%' operator
#include<stdio.h>
int main()
{
    int no , digits = 0 ; 
    printf("Enter the number \n");
    scanf("%d",&no);
    while(no!=0)
    {
        no = no / 10 ; 
        digits++ ; 
    }
    printf("%d",digits);
}