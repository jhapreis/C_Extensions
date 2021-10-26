#include <stdio.h>
#include <stdlib.h>

#include "functions.h"


int Cfib(int n){
    if (n < 2)
        return n;
    else
        return Cfib(n-1) + Cfib(n-2);
}



void connect(){
    printf("Connected to C extension...\n");
}




int random_number(int max){
    
    int random_number = rand() % max;

    return random_number;
}



int add_values(int a, int b){
    return a + b;
}
