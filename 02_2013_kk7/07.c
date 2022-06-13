//07

#include <stdio.h>

#define COL 4 //실행결과 15가 출력되기 위한 COL 값은?

int main(){
    int arr[][COL] = {1,2,3,4,5,6,7,8,9,10};
    const int ROW = sizeof(arr)/sizeof(int)/COL;
    int (*ptr1)[COL] = arr;
    int *ptr2[ROW];
    int i, res=0;
    for(int i=0; i<ROW; i++){
        ptr2[i] = *(ptr1+i);
        res += *ptr2[i];
    }
    printf("%d\n", res);
    return 0;
}

