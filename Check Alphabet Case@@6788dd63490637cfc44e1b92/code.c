#include <stdio.h>
 
int main(){
    char ch = 'a';
    // 97 122
    if(ch >= 97 && ch<=122){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}