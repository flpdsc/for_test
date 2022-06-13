//06

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, res = 0;
    int *ip = (int*)calloc(5, sizeof(int));
    for(int i=0; i<5; i++)
        ip[i] += i+1; //1 2 3 4 5
    ip = (int*) realloc(ip, 10*sizeof(int));
    for(int i=5; i<10; i++)
        ip[i] = ip[i-5]+i+1; // 7 9 11 13 15
    for(int i=0; i<10; i++)
        res += ip[i]; // 70
    printf("%d\n", res);
    return 0;
}