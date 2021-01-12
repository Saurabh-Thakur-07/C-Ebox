//Explaining conditionals using if else statement 
#include<stdio.h>
int main()
{
    int marks = 83 ;
    if(marks>90)
    {
        printf("Excellent");
    }
     else if(marks>80 && marks<= 90)
    {
        printf("Good");
    }
     else if(marks>70 && marks<= 80)
    {
        printf("Fair");
    }
     else if(marks>60 && marks<= 70)
    {
        printf("Meets Excpectation");
    }
    else{
        printf("Meets Par");

    }


}