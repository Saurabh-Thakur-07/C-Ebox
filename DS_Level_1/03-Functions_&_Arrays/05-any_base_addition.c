
/*
In this question we are basically trying to input a decimal number and trying to convert it into a base as entered by the user 
like for example 
if the user enters 234 and 756 as the 1st and 2nd number respectively and wants it convert the sum to base 8
                    +1  +1  +1
                         2   3   4

                         7   5   6                    
                      +
                      --------------
                     1    2    1   2
We get      (1212) base 8 i.e in octal 

getting the remainders 4 & 6 adding them up we get 10 but number greater than 7(n-1) doesn't exist in octal number(n)
10 / 8 gives = 1 as quotient and 2 as remainder keep the remainder at that place and carry 1 to the next place beacuse
the adjacent places differ by a multiple of 8 
next doing it for the next remainders like 3 and 5 adding them up plus the carry that we recieved from the previous place
3 + 5 + 1 equal 9 but 9 doesn't exist in octal so 9 / 8 again gives carry as one and remainder as 1 we keep the remainder 
at that place only and then forward the carry to the next place because adjacent places differ by a multiple of that base 
like in this we taken our base to be 8 so they differ by a multiple of 8
doing it again for the left over digits we get 2 and 7 we get the carry over as 1 adding it also we get 10 but 10 doesn't
exist in the octal dividing it we get 1 as carry over and 2 as remainder so we tranfer the carry over to the next place 
and 2 we write it there only  but again doing it because the no might be zero now but one carry is still there 
so both numbers in next place are 0 0 and 1 as carry diving it by 8 we get 0 as carry and 1 as remainder
now both the numbers n1 and n2 are zero as well a the carry we end our program hereby 

*/
#include<stdio.h>
#include<math.h>
int any_base_addition(int cb , int num1 , int num2);
int main()
{
   int converted_base , no1 , no2 , f_no = 0;
   printf("Enter the base in which you want t get the numbers converted :\n");
   scanf("%d",&converted_base);
   printf("Enter the 1st number in decimal :\n");
   scanf("%d",&no1);
   printf("Enter the 2nd number in decimal :\n");
   scanf("%d",&no2);
   f_no = any_base_addition(converted_base , no1, no2);
   printf("%d",f_no);


}
int any_base_addition(int cb , int num1 , int num2)
{
   int div1 , div2 , i = 0 , sum = 0 , carry = 0 , div, f_sum  = 0 ;
   while(num1 != 0 || num2!= 0 || carry != 0)
   {
      div1 = num1 % 10 ;
      div2 = num2 % 10 ;
      num1 = num1 / 10 ;
      num2 = num2 / 10 ;
      sum =  div1 + div2 + carry;
      carry  = sum / cb; 
      div = sum % cb ;
      f_sum = f_sum + div * pow (10 , i);
      i++ ;
   }
 return f_sum ;
}