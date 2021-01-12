/* In this we are going to print the pattern like this
    *
   **
  ***
 ****
 Depending upon the no of lines input . With a new logic and taking up new variables  */
 #include<stdio.h>
 int main()
 {
     int n ;
     printf("Enter the no of lines \n");
     scanf("%d",&n);
     int sp = n - 1 ;//as max no of spaces in first line are 4 
     int star = 1 ; // as max no of stars in first lin are 1 
     for(int i = 1 ; i<= n ; i++)// for no of lines
     {
         for(int j = 1  ; j<= sp ; j++)
         {
             printf(" ");
         }
         for(int k = 1 ; k <= star ; k++)
         {
             printf("*");
         }
         printf("\n");
         sp -- ; 
         star ++;


     }

 }
 