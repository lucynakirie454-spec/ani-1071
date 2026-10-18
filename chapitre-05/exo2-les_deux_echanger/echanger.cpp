#include <cstdio>

     void echanger(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void echanger(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void echangerDouble(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

void echangerChar(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;

        printf("Entiers avant : x = %d, y = %d\n", x, y);
        echanger(&x, &y);
    printf("Apres pointeurs : x = %d, y = %d\n", x, y);
 
    echanger(x, y);
    printf("Apres references : x = %d, y = %d\n", x, y);

             double a = 3.5, b = 7.2;
         printf("Doubles avant : a = %.1f, b = %.1f\n", a, b);
      echangerDouble(a, b);
    printf("Doubles apres : a = %.1f, b = %.1f\n", a, b);

          char c = 'A', d = 'B';
      printf("Caracteres avant : c = %c, d = %c\n", c, d);
echangerChar(c, d);
    printf("Caracteres apres : c = %c, d = %c\n", c, d);

    return 0;
}
