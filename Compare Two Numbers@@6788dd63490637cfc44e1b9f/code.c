#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
   if(a == b) {
        printf(" Equal");
    } else if(a > b) {
        printf("The first number is larger");
    } else {
        printf("The second number is larger");
    }
    
    return 0;
}