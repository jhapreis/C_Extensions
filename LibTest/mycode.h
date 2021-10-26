#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <python3.8/Python.h>



#ifndef ARITH_H
#define ARITH_H


/**
 * @brief 
 * Show connection status with C extension.
 */
void connect();



/**
 * @brief Calls random function and generates a random int value.
 * 
 * @param max 
 * @return int 
 */
int random_number(int max);



/**
 * @brief Calcula a soma dos dois parâmetros
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int add_values(int a, int b);








#endif //ARITH_H
