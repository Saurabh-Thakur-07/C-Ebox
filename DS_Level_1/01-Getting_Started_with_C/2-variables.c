#include<stdio.h>
#include<math.h>
int main()
{
    int a  = 10 ;
    int b = 30 ; 
    a  =a+b ;
    b = a - b ; 
    a  =  a - b  ;
    printf("%d %d\n", a,b);
    double c = pow(10.0,3.0);
    printf("%lf",pow(10,3));
    //Return Type of pow function in math class is either double or float becoz in case of integers it returns zero 

}