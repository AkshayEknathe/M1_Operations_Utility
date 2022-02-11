/**
 * @file calculator.c
 * @author Akshay Eknathe (akshayeknathe8788@gmail.com)
 * @brief Mathematical Operations of calculator
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>  

int addition(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtraction(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiplication(int operand1, int operand2)
{
    return operand1 * operand2;
}

int division(int operand1, int operand2)
{
    if(operand2==0)
       return 0;
    else
        return operand1 / operand2;
}

int modulus(int operand1,int operand2)
{
    
   return (operand2%operand2);//returning madules value to main funtion 
    
}
int power(int operand1)
{
    return operand1*operand1;
}
int factorial(int a)
{
    int i,fact=1;
 
   
    if (a<=0) //checking for negative value
    {
        printf("\nPlease enter a positive number to");
        return 0;
                  //function termination
    } 
    // calculating factorial using for loop
    for(i=1;i<=a;i++)
    fact=fact*i;
   
    
    return fact; //return factocial value to main funtion 
}
int cube(int operand1)
{
    return operand1*operand1*operand1;
}