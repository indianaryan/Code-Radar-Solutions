#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(!(a>0)){
        printf("True",a,b);
    }
    else{
        printf("False",a,b);
    }

    return 0;
}