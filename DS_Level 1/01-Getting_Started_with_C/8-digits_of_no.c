//in this we will be printing digits in the forward order ---- 143 like 1 4 3 
#include<stdio.h>
int main()
{
    int forward  ; 
    int no ,no1 = 0 , digits = 0 ;    
    printf("Enter the number \n");
    scanf("%d", &no);
    no1 = no ;
    while(no!=0)
    {
        no = no / 10 ; 
        digits++ ; 
    }
    int div = (int)pow(10 , digits-1);
    while(div != 0)
    {
        forward = no1 / div ;
        printf("%d\n",forward);
        no1 = no1 % div ; 
        div = div /10 ; 
    }
}