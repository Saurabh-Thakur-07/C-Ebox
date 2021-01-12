#include<stdio.h>
#include<math.h>
int any_base_to_decimal(int n , int b);
int main()
{
    int n , base ;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the base in which you are trying to enter : \n");
    scanf("%d",&base);
    int convert =  any_base_to_decimal(n , base);
    printf("%d",convert);
}
int any_base_to_decimal(int n , int b)
{
    int temp_no ;
    temp_no = n ;
    int div , i = 0 , sum = 0  ;
    while(temp_no != 0)
    {
        div = temp_no % 10;
        temp_no = temp_no / 10 ;
        sum = sum + div * pow(b,i);
        printf("%d\n",div);
        i++;
    }
    return sum ;
}