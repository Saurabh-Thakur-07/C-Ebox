#include <stdio.h>
int main()
{
    int number_1; 
    printf("Enter a number to get its factorial"); 
    scanf("%d",&number_1); 
    int fact = factorial(number_1);
    printf("The factorial of the number is %d", fact);

}
int factorial(int number_2)
{
    int i =1 , fact =  1 ; 
    if(number_2 == 0)
    {
        return fact ; 
    }
    else 
    { 
        while(i<=number_2)
      {   fact = fact * i ; 
          i++; 
      }
      return fact ; 
    }
}