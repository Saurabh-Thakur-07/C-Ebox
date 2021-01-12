#include<stdio.h>
int main()
{
    int no ;
    printf("Enter the number \n");
    scanf("%d",&no);
    for(int div = 2 ; div*div <= no ; div++)
    {
        while(no%div == 0)
        {
         no = no / div ;
         printf("%d ",div);   
        }
    }
    if(no != 1)
    {
        printf("%d",no);// I have applied this conditions in case of bigger nos and nos multiples of 23
    }
}