
/*a.c*/
#include <stdio.h> 
void b(void);  
  
int x = 2016; 
int y = 2017; 
int main() 
{ 
    b(); 
    printf("x = 0x%x y = 0x%x \n", x, y); 
    return 0; 
} 
/*b.c*/
int x =  210291 ; 
  
void b() 
{ 
    x = -0.0; 
} 