#include <stdio.h>


void main(){
    int check = 0;
    int i = 1;
    int number_1 = 1;
    int limit;
    printf("Enter the String: ");
    scanf("%d", &limit);
    int counter = 0 ;
    


    //Calculating prime
    while (counter <= limit){
        check = 0;
        //Checking if number_1 is not equal to 1
        if (number_1 == 1){
            printf("1 is neither prime nor composite\n");
            number_1++;
            continue;
        }

        //Now looking at remainders
        for(i = 1; i <= number_1; i++){
            if (number_1%i ==0){
                check++;
                continue;
            }
        }
        
        //Now checking prime not prime
        if (check == 2){
            printf("%d is a prime number\n", number_1);
            counter ++ ; 
        }
        
        //Next number
        number_1++;
    }
}
