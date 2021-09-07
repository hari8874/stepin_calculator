#include"fun.h"
#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
    
  
  
int main()  
{  
    int op;  
    do  
    {   
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op); 
      
    switch (op)  
    {  
        case 1:  
            addition();   
            break; 
        case 2:  
            subtract();   
            break; 
              
        case 3:  
            multiply();   
            break; 
              
        case 4:  
            divide();   
            break; 
              
        case 5:  
            sq();   
            break; 
              
        case 6:  
            sqrt1(); 
            break; 
              
        case 7:  
            exit(0); 
            break; 
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (op != 7);  
      
  
    return 0;        
}  
  
  
  
