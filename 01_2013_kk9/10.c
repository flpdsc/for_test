//10

#include <stdio.h>
#include <string.h>

int f[11];

void init(void)
{
    memset(f, -1, 11*sizeof(int));
}

void print(void)
{
    for(int i=0; i<11; ++i)
    {
        printf("%d ", f[i]);
    }
    puts("");
}

int fun1(int n)
{
    if(n<=0) return n;
    else return fun1(n-1)+2;
}

int fun2(int n)
{
    int i;
    f[0] = 0;
    for(int i=1; i<=n; i++)
        f[i] = f[i-1]+2;
    return f[n];
}

int fun3(int n)
{
    int i = n;
    f[0] = 0;
    while(i>=1)
    {
        f[i] = f[i-1]+2;
        i--;
    }
    return f[n];
}

int fun4(int n)
{
    if(n<=0) f[n] = n;
    if(f[n]<0)
        f[n] = fun4(n-1)+2;
    return f[n];
}

int main(void)
{
    printf("%d\n", fun1(10)); //20
    init();
    printf("%d\n", fun2(10)); //20
    print(); //0 2 4 6 8 10 12 14 16 18 20 
    init();
    printf("%d\n", fun3(10)); //1
    print(); //0 2 1 1 1 1 1 1 1 1 1 
    init();
    printf("%d\n", fun4(10)); //20
    print(); //0 2 4 6 8 10 12 14 16 18 20 
}