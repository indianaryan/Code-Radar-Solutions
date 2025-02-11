#include <stdio.h>

int main() {
    int price,selling;
    scanf("%d %d",&price,&selling);
    if(selling-price>0){
        printf("Profit");
    }
    else if(selling-price<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}