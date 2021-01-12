#include<stdio.h>
int digit_freq(int n , int dig);
int main()
{
    int n , dig ; 
    printf("Enter a number : \n");
    scanf("%d",&n);
    printf("Enter the digit that you want to count in the given number :\n");
    scanf("%d",&dig);
    int counter =  digit_freq(n,dig);
    printf("Number of times the digit %d is countered in the given number %d is %d",dig , n,counter );
}
int digit_freq(int n , int dig)
{
    int temp_no = n ;
    int rem ,count = 0; 
    while(temp_no != 0)
    {
        rem = temp_no % 10 ;
        if(dig == rem)
        {
            count ++ ;
        }
        temp_no = temp_no / 10 ;
    }
    return count ;
}