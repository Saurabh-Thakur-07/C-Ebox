//In this we will the print the digits of the numberin the reverse order 
#include<stdio.h>
int main()
{
    printf("Enter the number\n");
    int no ,  digit ; 
    scanf("%d",&no);
    
    while(no != 0 )
    {
        digit = no % 10 ; 
        no = no / 10 ; 
        printf("%d\n",digit);

    }
}