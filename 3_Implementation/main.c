#include "calculator.h"
#include <stdio.h>

 int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial(); // it is header file, conatins all function
int main() {
  // variable declaration
  int choice; 
  int n1,n2, ans=0;
  double s ;
  printf("Select the operation you want perform");
  printf("\n");
  printf("\n1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modules\n 6.Power\n 7.Factorial \n 8.Cube \n ");
  scanf("%d", &choice);

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); //calling addition function
      
      printf("Addition of two numbers is = %d \n",ans);
      break;
    case 2:
     printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("subtraction of two numbers is = %d \n",ans);
      break;
    case 3:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function 
      printf("multiplication of two numbers is = %d \n",ans);
      break;
    case 4:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
     ans = division(n1,n2);    //calling division function
     printf("division of two numbers is = %d \n",ans);

      break;
    case 5: 
        printf("Enter two number");
        scanf("%d %d",&n1,&n2);
       ans= modulus(n1,n2);  // calling madules function
       printf("Modulus of number is = %d \n",ans);
        break;  
    case 6: 
        printf("\nEnter number to find the power \n");
        printf("number: ");
        scanf("%d",&n1);
       ans= power(n1);
          printf("Power of number is = %d \n",ans);
        break;  
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&n1);
        ans = factorial(n1); //calling  factorial function
        printf("factorial of number is = %d \n",ans);
        break;  
        case 8: 
        printf("\nEnter number to find the cube \n");
        printf("number: ");
        scanf("%d",&n1);
       ans= cube(n1);
          printf("Cube of number is = %d \n",ans);
        break; 
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}