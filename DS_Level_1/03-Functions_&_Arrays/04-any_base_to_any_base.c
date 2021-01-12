#include<stdio.h>
#include<math.h>
int any_base_to_decimal(int n , int b);
int decimal_to_any_base(int n , int b);
int any_base_to_any_base(int n , int b , int cb);
int main()
{
    int n , base , converted_base ;
    printf("Enter the number : \n");
    scanf("%d",&n);
    printf("Enter the base of the number : \n");
    scanf("%d",&base);
    printf("Enter the base of the number to be converted to: \n");
    scanf("%d",&converted_base);
    int convert = any_base_to_any_base(n,base,converted_base);
    printf("The Number %d after conversion from previous base %d to new base %d is %d",n,base,converted_base,convert);

}
int any_base_to_any_base(int n , int b , int cb)
{  
    int decimal_recived = any_base_to_decimal(n,b);
    int decimal_sent = decimal_to_any_base(decimal_recived,cb);
    return decimal_sent ;
 
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
    return sum ;
}