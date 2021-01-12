//New way to find out gcd of a number 
// we are using an old logic that swap with 
#include<stdio.h>
int main()
{
    int num1 , num2 , gcd = 0, lcm =1;
    printf("Enter a number \n");
    scanf("%d",&num1);
    printf("Enter second number \n");
    scanf("%d",&num2);
    int orig_num1 ,orig_num2 ; 
    orig_num1 = num1 ; 
    orig_num2 = num2 ;
   while(num1%num2 != 0)
   {
       int rem = num1 % num2 ;
       num1  = num2 ;
       num2 = rem ;  
   }
       gcd = num2  ; 
    lcm = (orig_num2*orig_num1)/gcd ;
    printf("%d\n",gcd);
    printf("%d",lcm);

}