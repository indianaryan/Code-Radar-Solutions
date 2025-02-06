#include <stdio.h>

int main() {
    char name[50], hobby[100];
    int age;
    scanf("%s", name); 
    scanf("%d", &age); 
    scanf("%s", hobby); 

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);

    return 0;
}