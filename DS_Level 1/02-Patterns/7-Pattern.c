/* In this pattern we are going to print the stars along the diagonal only 
The pattern is like :
* 
 *
  *
   * 
   * This First is my method 
   * In the second one I was used the matrix logic
  #include<stdio.h>
  int main()
  {
      int n ;
      printf("Enter the no of lines : \n");
      scanf("%d",&n);
      int diagonal = 1 ;
      int spaces = 0 ;
      for(int i = 1 ; i<= n ; i++)
      {
          for(int k =1 ; k<= spaces; k++)
          {
              printf("\t");
          }
          for(int j = 1 ; j <= i ; j++)
          {
              if(j == diagonal)
              {
                  printf("*");
              }

          }

          diagonal ++ ;
          spaces ++ ;
          printf("\n");
      }
  }
  */
 // II - Method to do the same 
 #include<stdio.h>
 int main()
 {
     int n ; 
     printf("Enter the number of lines : \n");
     scanf("%d",&n);
     for(int i =1 ; i<= n ; i++)
     {
         for(int j =1 ; j<= n ;j++)
         {
             if(i == j)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }

         }
         printf("\n");
     }

 }