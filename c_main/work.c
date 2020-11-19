#include<stdio.h> 
#include<stdlib.h> 
void _start() 
{ 
    int x = my_fun(); //calling custom main function 
    exit(x); 
} 
  
int my_fun() // our custom main function 
{ 
    printf("Hello world!\n"); 
    return 0; 
}
