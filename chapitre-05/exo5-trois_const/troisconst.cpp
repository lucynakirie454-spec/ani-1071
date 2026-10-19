#include <cstdio>

int main()
{
    int x = 1, y = 2;

             const int* a = &x;
           int* const b = &x;
    const int* const c = &x;

    
           // *a = 5;      // refusé
    a = &y;         // accepté

    
           *b = 5;         // accepté
    // b = &y;      // refusé

  
          // *c = 5;      // refusé
    // c = &y;      // refusé

         printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}