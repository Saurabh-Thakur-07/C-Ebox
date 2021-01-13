#include<stdio.h>
int main()
{ int number1,number2;
printf("enter two numbers for hcf");
scanf("%d %d", &number1 , &number2);
int f_hcf = hcf(number1,number2);
printf("the hcf of two numbers is %d",f_hcf);
}
int hcf(int number_1 , int number_2)
{
    int i =1 , hcf = 1;
    for(i =1 ; i<=number_1&&i<=number_2;i++)
    {
        if(number_1%i==0&&number_2%i==0)
        {
            hcf = i ;
        }
    }
    return hcf; 
}