#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter the operator: ");
    scanf("%c",&operator);

    printf("\nNumber 1: ");
    scanf("%lf",&num1);

    printf("\nNumber 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("Result: %.2lf \n",result);
        break;

        case '-':
        result = num1 - num2;
        printf("Result: %.2lf \n", result);
        break;

        case '*':
        result = num1 * num2;
        printf("Result: %.2lf \n", result);
        break;

        case '/':
        result = num1 / num2;
        printf("Result: %.2lf \n", result);
        break;

        default:
        printf("\n%c IS NOT A VALID OPERATOR! \n", operator);
    }

    return 0;
}