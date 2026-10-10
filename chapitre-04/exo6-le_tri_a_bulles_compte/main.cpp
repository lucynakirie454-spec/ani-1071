#include <cstdio>


long long trierParBulles(int t[], int n) {
    long long compte = 0;
    bool echange;

    do {
        echange = false;
        for (int i = 0; i < n - 1; i++) {
            if (t[i] > t[i + 1]) {
              
                int tmp = t[i];
                t[i] = t[i + 1];
                t[i + 1] = tmp;

                compte++;
                echange = true;
            }
        }
        
    } while (echange);

    return compte;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1; 
    }

    if (n == 0) {
        printf("AUCUN\n");
        return 0;
}
    int t[1000]; 
        for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    long long compte = trierParBulles(t, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", t[i]);
    }
    printf("%lld\n", compte);

    return 0;
}
