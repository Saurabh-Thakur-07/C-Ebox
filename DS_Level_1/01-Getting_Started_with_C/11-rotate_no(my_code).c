//int this two cases are possible in case the the no of rotations is less than the no 
#include<stdio.h>
#include<math.h>
int main()
{
    int no , rots , digits  = 0 ,digit = 0, temp ,tno ; 
    int rem , divisor , multiplier , final_no ; 
    
   
    printf("Enter the number \n");
    scanf("%d",&no);
    printf("Enter the number of rotations \n");
    scanf("%d",&rots);
    // in this case we would need a muliplier and a divisor 
    tno = no ;
     while(tno!= 0 )
    {
        tno = tno /10 ;
        digit++;
    }
    while(rots < 0 )
    {
        rots = rots + digit;
    }
    if(1)
    {
    while(rots >= digit)
    {
    rots = rots - digit ; 
    }
    if(rots < digit)
    { 
    divisor = (int)pow(10 ,rots);
    rem = no % divisor ;
    no = no /divisor ; 
    temp = no ; 
    while(no!= 0 )
    {
        no = no /10 ;
        digits++;
    }
      multiplier = (int)pow(10 , digits);
    final_no =  rem * multiplier + temp ; 
    printf("%d",final_no);
    }
 }
}
 //This code I created myself    
 // digit is udes to count total no of digits in a number
 //digits is ued to count to count total digits in remainder
   
    

