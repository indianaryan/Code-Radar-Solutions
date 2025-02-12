#include<stdio.h>
int main(){
    int Celsius;
    scanf("%d",&Celsius);
    if(Celsius<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
}