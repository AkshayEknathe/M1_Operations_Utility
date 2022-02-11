// Header Guard
#ifndef CALCULATOR_H_
#define CALCULATOR_H_
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
#include <math.h>
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param operand1 
 * @param operand2 
 * @return int 
 */

int addition(int operand1, int operand2);
/**
 * @brief 
 * 
 * @param operand1 
 * @param operand2 
 * @return int 
 */
int subtraction(int operand1, int operand2);
/**
 * @brief 
 * 
 * @param operand1 
 * @param operand2 
 * @return int 
 */
int multiplication(int operand1, int operand2);
/**
 * @brief 
 * 
 * @param operand1 
 * @param operand2 
 * @return int 
 */
int division(int operand1, int operand2);
/**
 * @brief 
 * 
 * @param operand1 
 * @param operand2 
 * @return int 
 */
int modulus(int operand1, int operand2);
/**
 * @brief 
 * 
 */
int power(int operand1);
/**
 * @brief 
 * 
 * @param operand1 
 * @return int 
 */
int factorial(int operand1);
/**
 * @brief 
 * 
 * @param operand1 
 * @return int 
 */
int cube(int operand1);

#endif  /* #define __CALCULATOR_H__ */