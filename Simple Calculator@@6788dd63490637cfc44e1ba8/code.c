#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    
    scanf("%lf %lf", &num1, &num2);
    scanf("%c", &op);
    

    switch (op) {
        case '+':
            printf("%d",num1+num2 );
            break;
        case '-':
            printf("%d",num1-num2 );
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            if (num2 != 0.0) {
                printf("%d",,num1/num2);
            } else {
                printf("Division by zero is not allowed");
            }
            
            break;
    }

    return 0;
}
