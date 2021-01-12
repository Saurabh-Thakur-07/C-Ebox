#include<stdio.h>
#include<math.h>
int main()
{
    int no , rots ,digit = 0 , tno ;
    printf("Enter the number \n");
    scanf("%d",&no);
    printf("Enter the number of rotations \n");
    scanf("%d",&rots);
    int i = 1 ;
    tno = no ;
    while(tno != 0)
    {
        tno = tno/10;
        digit++;
    }
    rots = rots % digit ;
    if(rots < 0)
    {
        rots  = rots + digit ;
    }
    int multiplier = 1 , divisor = 1 ; 
    for(i = 1 ; i<=digit ; i++)
    {
        if(i<=rots)
        {
            divisor = divisor * 10;
        }
        else
        {
            multiplier = multiplier * 10 ; 
        }
        
    }
    int quotient = 0 , remainder= 0 , rotated_no = 0 ;
    remainder = no % divisor ;
    quotient =no / divisor ;
    rotated_no =  remainder * multiplier + quotient ; 
    printf("The rotated no is \n");
    printf("%d",rotated_no);


}
