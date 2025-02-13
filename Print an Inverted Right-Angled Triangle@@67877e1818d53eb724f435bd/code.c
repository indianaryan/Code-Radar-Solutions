#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d %d %d",&i,&j,&n);
    for(i=n; i<=n;i++){
        for(j=n+1;j>=i;j--)
        printf("*");
        printf("\n");
    }
    
}