//13

#include <stdio.h>
#define MULTIPLY(a, b) (a*b)

int main(){
    float f = 100/MULTIPLY(2+3, 4+5); //MULTIPLY(2+3, 4+5) => 2+3*4+5 => 2+12+5 => 19
    printf("%.1f\n", f);
    return 0;
}