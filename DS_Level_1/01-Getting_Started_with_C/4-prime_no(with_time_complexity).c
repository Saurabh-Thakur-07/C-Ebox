#include<stdio.h>
#include<math.h>
int main()
{
    int i,number,inputs ; 
    printf("Enter the numbers to check for prime");
    scanf("%d",&inputs);
    int count ;
    for(i =1 ;i<=inputs; i++)
    {
        scanf("%d",&number);
        count = 0 ;
        for(int div = 2 ; div*div <= number;div++ )
        {
            if(number%div==0)//We are running the loop till root n because if we get a divisor btw root n all others would be same like in prime factorization after the root of that no like 1 * 24 or 24 *1 
            {
            count ++ ; 
           // break ;
            }

        }
        if(count == 0 )
        printf("Prime ");
        else
        printf("Not Prime ");
    }
}
//This program too has a high time compexity inner loop runs completely till root n 
//In order to avoid this thing as soon as a divisor is found it should break out from the loop 