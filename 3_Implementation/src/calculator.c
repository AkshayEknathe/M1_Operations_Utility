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
#include"calculator.h"
#include <stdio.h>
#include <stdlib.h>  

int Menu() {
 	int choice;
    printf("\n Hello:) This is your Simple Calculator \n\n");
    printf(" Select the operation you want perform:-\n\n");
    printf("  1   Addition\n");
    printf("  2   Subtraction\n");
    printf("  3   Multiplication\n");
    printf("  4   Division\n");
    printf("  5   Modulus\n");
    printf("  6   Power\n");
    printf(" 7   Factorial\n");
    printf(" 8   Cube\n");
    printf(" 9   Exit\n");
    scanf("%d",&choice);
    return choice;
}

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
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
 
    return fact; //return factocial value to main funtion 
}
int cube(int operand1)
{
    return operand1*operand1*operand1;
}