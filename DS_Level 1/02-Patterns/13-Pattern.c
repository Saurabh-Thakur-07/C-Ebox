/*In this we are going to print the tables pattern 
*/
#include<stdio.h>
int main()
{
    int x ;
    printf("Enter the value of the x \n");
    scanf("%d",&x);
    for(int i =1 ; i<= 10 ; i++)
    {
        int val = x * i ; 
        printf("%d * %d  =  %d\n",x ,i,val);
    }
}