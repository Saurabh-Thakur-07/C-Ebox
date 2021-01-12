#include<stdio.h>
#include<math.h>
int main()
{
    int no ; 
    printf("Enter the no ");
    scanf("%d",&no);
    int op , od ;//op is original position and od is original digit 
    int ip , id ; // ip is inverted postion and ip is inverted digit 
    int inv  = 0 ; 
    op = 1 ; // the right most digit of the number has the indexing of 1 
    while(no != 0 )
    {
        od = no % 10 ; 
        ip = od ;
        id = op ;
        inv  = inv + id * (int)pow(10, ip-1);
        no = no /10 ; 
        op ++ ; 

    }
printf("%d",inv);

}