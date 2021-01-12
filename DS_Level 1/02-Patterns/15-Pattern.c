/* In this we are going to print the pattern like this 
  1
 232
34543
 232
  1 
  This logic was framed by me completely what I did just was to follow the steps as told in the question video*/
  #include<stdio.h>
  int main()
  {
      int n ;
      printf("Enter the value of n: \n");
      scanf("%d",&n);
      int space = n/2, stars = 1 ;
      int counter = 1 , inner_counter = 1;
      for(int i = 1 ; i<= n ; i++)
      {
          inner_counter = counter ; 

          for(int k = 1 ; k<= space ; k++)//for spaces
          {
              printf(" ");
          }
          for(int j = 1 ; j <= stars; j++)
          {
              printf("%d",inner_counter);
              if(j <= stars/2)
              {
                 inner_counter ++ ;
              }
              else
              {
                  inner_counter -- ;
              }
              
              
          }
          printf("\n");
          if(i<= n/2)
          {
              space -- ;
              stars += 2 ;
              counter ++ ;
          }
          else
          {
              space ++ ; 
              stars -=2 ;
              counter -- ;
          }
          
      } 
  }