#include <stdio.h>
 
int main(){
    char ch = 'a';
    // 97 122
    if(ch >= 97 && ch<=122){
        printf(" lowercase");
    }
    else{
        printf(" uppercase");
    }
    return 0;
}