// probematic case of toggle on and off bulbs 
#include<stdio.h>
int main()
{
    int n ;
printf("Enter the no of bulbs\n");
scanf("%d",&n);
printf("No of bulbs that would remain on\n");
for(int i = 1 ; i*i <= n ; i++)
{
    printf("%d\n",(i*i));
}
}