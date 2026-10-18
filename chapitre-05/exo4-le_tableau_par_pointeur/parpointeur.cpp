#include <cstdio>
#include <cstring>

int somme(const int* t, int n) {
    int total = 0;
    const int* p = t;

    while (p < t + n) {
        total += *p;
        ++p;
    }

    return total;
}

int maximum(const int* t, int n) {
    if (n <= 0) {
        return 0;
    }

    int max = *t;
    const int* p = t + 1;

    while (p < t + n) {
        if (*p > max) {
            max = *p;
        }
        ++p;
    }

    return max;
}

void inverser(int* t, int n) {
    if (n <= 1) {
        return;
    }

    int* gauche = t;
    int* droite = t + n - 1;

    while (gauche < droite) {
        int temp = *gauche;
        *gauche = *droite;
        *droite = temp;

        ++gauche;
        droite = droite + (-1);
    }
}

int longueur(const char* s) {
    const char* p = s;
   
    while (*p != '\0') {
        ++p;
    }

    return static_cast<int>(p - s);
}

int main() {
    int nombres[] = {12, 7, 19, 3, 15};

    printf("Somme : %d\n", somme(nombres, 5));
       printf("Maximum : %d\n", maximum(nombres, 5));

    int t[] = {1, 2, 3, 4, 5};

    printf("Tableau avant inversion : ");
      const int* p = t;
             while (p < t + 5) {
        printf("%d ", *p);
        ++p;
    }
              printf("\n");

    inverser(t, 5);

          printf("Tableau apres inversion : ");
    p = t;
    while (p < t + 5) {
        printf("%d ", *p);
        ++p;
    }
    printf("\n");

    const char* mot1 = "bonjour";
    const char* mot2 = "Yaoundé";

    printf("Longueur de bonjour : %d\n", longueur(mot1));
    printf("strlen de bonjour : %zu\n", std::strlen(mot1));

    printf("Longueur de Yaounde : %d\n", longueur(mot2));
    printf("strlen de Yaounde : %zu\n", std::strlen(mot2));

    return 0;
}