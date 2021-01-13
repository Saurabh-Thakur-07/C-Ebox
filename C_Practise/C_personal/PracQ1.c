// c program to print a triangle 
#include<stdio.h>
int main()
{ int x  = 1 ; 
int i, j , k ; 
for(i =1 ;i<=5 ; i++)
{
    for(k=i ; k <5 ;k ++)
    {
        printf(" ");
    }
    for(j =0;j < i ; j++)
    {
        printf("%d ",x);
        x++ ;
    }
    
    printf("\n");
}
}
