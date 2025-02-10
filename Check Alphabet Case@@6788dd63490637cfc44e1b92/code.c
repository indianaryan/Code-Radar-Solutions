#include <stdio.h>
 
int main(){
    char ch = 'a';
    // 97 122
    if(ch >= 65 && ch<=90){
        printf("Uppercase");
    }
    else if (ch >= 97 && ch<=122){
        printf("Lowercase");
    }
    else{
        print("Not an alphabet")
    }
    return 0;
}