#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    
    scanf("%d %d %c", &num1, &num2,&op);

    

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
                printf("%d",num1/num2);
            } else {
                printf("error");
            }

            break;
    }

    return 0;
}
