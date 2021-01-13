#include<stdio.h>
int main()
{
    int i = 1, check = 0 ,number_1 = 1 ;
    int counter ,count = 0   ;
   printf("Enter the number till where you to display the prime numbers ");
   scanf("%d",&counter);
   while(count != counter)
    {
       check = 0 ;i =1 ;
             for(i=1;i<=number_1;i++)
               {
                 
                    if(number_1%i==0)
                                         {
                        check++;
                     }  
                      
                
                 if(check==2)
                {
                  count++ ;
                printf("prime number %d",number_1);
                }
                number_1 ++;
            }
   
        

    }
}
