#include<stdio.h>
int main()
{
    int number ;
scanf("%d",&number);
printf("%d",sum(number));

}
int sum(int n )
{
    int sum1 = 0 ;
    if(n==0)
        return ; 
    else
    {
              sum1 = sum1 + n +sum(n-1);
    }

}