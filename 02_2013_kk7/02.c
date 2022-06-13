//02

#include <stdio.h>

typedef struct p {
    int x, y;
}PT;

void calcPoint(PT x, PT y, PT z){
    z.x = x.x + y.x; //40
    z.y = x.y + y.y; //60
}

int main(void){
    PT p1 = {10, 20}, p2 = {30, 40}, p3 = {0, 0};
    calcPoint(p1, p2, p3);
    printf("%d, %d\n", p3.x, p3.y); //0, 0
    return 0;
}