#include<stdio.h>
#include<math.h>
int digit_counter(int n);
int decimal_to_any_base(int n , int b);
int main()
{
    int n , base ;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("Enter the base in which you want to convert :\n");
    scanf("%d",&base);
    decimal_to_any_base(n , base );
}
int decimal_to_any_base(int n , int b)
{    
    int temp_no = n ;
    int div ,  i = 0, sum = 0 ;
    while(temp_no != 0 )
    {
        div = temp_no % b ;
        temp_no = temp_no / b ;
        sum = sum + div * pow(10.0,i);
        printf("%d\n",div);
        i++ ;
    }
        printf("%d",sum);
}
