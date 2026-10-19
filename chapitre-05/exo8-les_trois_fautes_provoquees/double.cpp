#include <cstdio>

int main()
{
    int* t = new int[10];

    t[0] = 123;
       printf("%d\n", t[0]);

    delete[] t;
      delete[] t; 

    return 0;
}