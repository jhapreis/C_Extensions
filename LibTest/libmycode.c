#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mycode.h"



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
