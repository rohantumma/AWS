#include<stdio.h>
#include<stdlib.h>

//#include <iostream> 

int my_fun();

void _start()
{
    int x = my_fun(); //calling custom main function
    exit(x);
}

int my_fun() // our custom main function
{
    printf("Hello world!\n");
  //  std :: cout<< "cpp with out main()";
    return 0;
}

