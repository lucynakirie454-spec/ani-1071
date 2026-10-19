#include <cstdio>

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        int* t = new int[100];
        t[0] = i;
        printf("%d\n", t[0]);

    }

    return 0;
}