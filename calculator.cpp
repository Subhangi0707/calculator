
#include <stdio.h>
int main(){
   int f=1;
   char Operator;
   float n1, n2, result = 0;
   while(f){
   printf("Enter the values of n1 and n2:\n ");
   scanf("%f%f", &n1, &n2);
   printf("\n Enter any one operator (+, -, *, /) : ");
   fflush(stdin);
   scanf("%c", &Operator);
   switch(Operator)
   {
      case '+': 
        result = n1 + n2;
        printf("Sum is:%f", result);
         break;
      case '-': 
        result = n1 - n2;
        printf("Sub is :%f", result);
         break;
      case '*':
        result = n1 * n2;
        printf("Mul is: %f", result);
         break;
      case '/':
        result = n1 / n2;
        printf("Div is: %f", result);
         break;
      default: 
        printf("\n Invalid Operator ");
   }
   scanf("%d", &f);
   }
   return 0;
}

