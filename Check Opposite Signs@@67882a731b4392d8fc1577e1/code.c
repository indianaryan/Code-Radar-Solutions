#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    
    if ((num1 ^ num2) < 0) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}