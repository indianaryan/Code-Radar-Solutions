#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    
    scanf("%lf %lf", &num1, &num2);
    scanf("%c", &operator);
    

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2 );
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf",num1,num2,num1-num2 );
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf",num1,num2,num1*num2);
            break;
        case '/':
            if (num2 != 0.0) {
                printf("%.2lf / %.2lf = %.2lf", num1,num2,num1/num2);
            } else {
                printf("Division by zero is not allowed");
            }
            
            break;
    }

    return 0;
}
