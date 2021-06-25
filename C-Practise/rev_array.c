#include<stdio.h>
int main()
{
    int array_size  , i   ;
    printf("Enter the array size"); // Enter the size of an array
    scanf("%d",&array_size);
    int a[array_size];
    for(i = 0 ; i< array_size ; i++)
    {
             scanf("%d",&a[i]);
    }
    for(i = ((array_size)-1) ; i>= 0 ; i--)
    {
        printf("%d \n",a[i]);
    }
}
