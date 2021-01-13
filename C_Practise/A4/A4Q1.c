#include<stdio.h>
void  swap(int a , int b);
int main()
{
    int number_1 , number_2 ;
    printf("Enter two numbers for swapping");
    scanf("%d %d" , &number_1, &number_2);
  swap(number_1 , number_2);

}

void swap(int a , int b)
{
    int number_3 ; 
    number_3 = a;
    a = b ;
    b  = number_3 ; 
   printf("%d %d",a ,b);
  
    
}