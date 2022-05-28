//19

#include <stdio.h>
int main()
{
    struct list
    {
        int *fp;
    } data, *p;

    int x[] = {100, 200, 300, 400};
    p = &data;
    p->fp = x+1;
    printf("%d", *(++p->fp)); //300
    return 0;
}