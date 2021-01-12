#include<stdio.h>
int main()
{
    int num1,num2 ,num3 ;
    printf("Enter 1st Number : \n");
    scanf("%d",&num1);
    printf("Enter 2nd Number : \n");
    scanf("%d",&num2);
    printf("Enter 3rd Number : \n");
    scanf("%d",&num3);
    if(num1 > num2 && num1 > num3)
    {
        if((num1*num1) == ((num2*num2)+(num3*num3)))
        {
            printf("pythagorean triplet");
        }
      
    }
    else if(num2 > num1 && num2 > num3)
    {
        if((num2*num2) == ((num1*num1)+(num3*num3)))
        {
            printf("pythagorean triplet");
        }
    }
     else if(num3 > num1 && num3 > num2)
    {
        if((num3*num3) == ((num2*num2)+(num1*num1)))
        {
            printf("pythagorean triplet");
        }
    }
    else {

printf("Not a pythagorian triplet");
    }
}