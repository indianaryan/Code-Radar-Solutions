#include <stdio.h>

int main() {
    int price,selling;
    scanf("%f",&price);
    if(selling-price>0){
        printf("Profit");
    }
    else if(selling-price<0){
        printf("Loss");
    }
    else{
        printf("No profit No Loss");
    }
    return 0;
}