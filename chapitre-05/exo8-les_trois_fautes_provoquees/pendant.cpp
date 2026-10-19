#include <cstdio>

int main()
{
    int* t = new int[10];

    t[0] = 123;
    delete[] t;

    printf("%d\n", t[0]); 

    return 0;
}