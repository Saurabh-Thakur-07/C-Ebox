// To check whether a number is prime or not using functions 
#include<stdio.h>
int main()
{    int number_1 ,check; 
    printf("enter a number to check it is prime or not"); 
    scanf("%d",&number_1);
    check = prime(number_1);
      if(check == 2)
        printf("The number is prime");
    else
        printf("The number is not prime");
}
int prime(int number_2)
{
    int i = 1 , c=0 ;
    while(i<=number_2)
    {
        if(number_2 % i == 0)
        {
            c++; 
        }
        i++;
    }
    return c; 
}
