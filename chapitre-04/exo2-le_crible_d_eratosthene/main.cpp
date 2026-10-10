#include <cstdio>

void cribler(bool premier[], int n) {
    for (int i = 0; i <= n; i++) {
        premier[i] = true;
    }
           if (n >= 0) premier[0] = false;
    if (n >= 1) premier[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (premier[i]) {
            
            for (int j = i * i; j <= n; j += i) {
                premier[j] = false;
            }
        }
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1; 
    }

    if (n < 2) {
        printf("AUCUN\n");
        return 0;
    }
    bool premier[100001]; // tableau booléen jusqu'à 100000
       cribler(premier, n);
    for (int i = 2; i <= n; i++) {
        if (premier[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}
