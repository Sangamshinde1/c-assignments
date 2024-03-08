#include<stdio.h>


int main()
{
    
    int a ;
     a = 5 & 6;
     printf("a = %d \n",a);
     a = 12 &  13;
     printf("a = %d \n",a);



    // //Bitwise OR |
     a = 5 | 6 ;
     printf("a = %d \n",a);
      a = 7 | 12 ;
     printf("a = %d \n",a);


//     //Bitwise EX-OR ^
     a = 5 ^ 6 ;
	 printf("a = %d \n",a);
  a = 7 ^ 12 ;
  printf("a = %d \n",a);

 
    //Bitwise LeftShift <<
     a =  8 << 1 ;
     printf("a = %d \n",a);
     a =  12 << 2 ;  
     printf("a = %d \n",a);
    // //    x << n    //  
 //Bitwise Right >>

  a =  8 >> 1 ; 
 
   
     printf("a = %d \n",a);

    a =  100 >> 3 ; 
    
                  
     printf("a = %d \n",a);
 return 0 ;
 }
