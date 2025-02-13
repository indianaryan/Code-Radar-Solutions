#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    
    scanf("%c", &operator);
    
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", );
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", );
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n",);
            break;
        case '/':
            if (num2 != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", );
            } else {
                printf("Division by zero is not allowed.\n");
            }
            
            break;
    }

    return 0;
}
