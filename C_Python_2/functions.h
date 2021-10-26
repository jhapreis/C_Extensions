#include <stdio.h>
#include <stdlib.h>


#ifndef __FUNCTIONS_H
#define __FUNCTIONS_H



int Cfib(int n);



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



#endif
