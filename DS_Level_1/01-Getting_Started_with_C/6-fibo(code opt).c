//Here I have optimised my code will not be using the previous code that I have learnt
#include<stdio.h>
int main()
{
    int fibo_1 = 0, fibo_2 = 1 , sum , no , i ; 
    printf("Till where to print the Fibonacci series\n");
    scanf("%d",&no);
    for(i = 1 ;i <= no ; i++)
    {
        printf("%d \n",fibo_1);
        sum = fibo_1 + fibo_2 ;
        fibo_1 =fibo_2 ;
        fibo_2 = sum ; 
    }
    
}