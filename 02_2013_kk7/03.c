//03

#include <stdio.h>

int main(void){
    int a;
    double c, d;
    c = a = 3.5; //c = 3, a = 3;
    d = 3+a/2+c; //d = 3+1+3 = 7
    printf("Result = %3.1f\n", d); //Result = 7.0
    return 0;
}