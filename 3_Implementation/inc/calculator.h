// Header Guard
#ifndef calculator_h_
#define calculator_h_
/**
 * @file calculator.h
 * @author Akshay Eknathe (akshayeknathe8788@gmail.com)
 * @brief Header files
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int Menu();
/**
 * @brief 
 * 
 * @return int 
 */

int addition(int,int);
/**
 * @brief 
 * 
 * @return int 
 */
int subtraction(int, int);
/**
 * @brief 
 * 
 * @return int 
 */
int multiplication(int, int);
/**
 * @brief 
 * 
 * @return int 
 */
int division(int, int);
/**
 * @brief 
 * 
 * @return int 
 */
int modulus(int, int);
/**
 * @brief 
 * 
 */
int power(int);
/**
 * @brief 
 * 
 * @return int 
 */
int factorial(int);
/**
 * @brief 
 * 
 * @return int 
 */
int cube(int);

#endif  /* #define __CALCULATOR_H__ */