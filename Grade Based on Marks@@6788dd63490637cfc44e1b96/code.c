#include <stdio.h>

int main() {
    char grade;
    int marks;

    if(marks>=90){
        grade= 'A';
    }
    else if(marks>=80 && marks<90){
        grade= 'B';
    }
    else if(marks>=70 && marks<80){
        grade ='C';
    }
    else if(marks>=60 && marks<70){
        grade ='D';
    }
    else if(marks<60){
        grade ='F';
    }

    return 0;
}