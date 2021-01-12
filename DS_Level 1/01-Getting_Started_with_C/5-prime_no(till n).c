#include<stdio.h>
int main()
{
    int low ,high , i ,count ,number;
    printf("Enter the lower limit \n");
    scanf("%d",&low);
    printf("Enter the upper limit \n");
    scanf("%d",&high);
    for(i = low ; i<=high;i++)
    {   number = i ;
        count = 0 ;
        for(int div = 2 ; div*div <= number;div++ )
        {
            if(number%div==0)//We are running the loop till root n because if we get a divisor btw root n all others would be same like in prime factorization after the root of that no like 1 * 24 or 24 *1 
            {
            count ++ ; 
            break ;
            }
        }
        if(count == 0 )
        {   printf("Prime Numbers are ");
            printf("%d\n",number);
        }
    }
}
