#include <cstdio>

      void transposer(const int source[], int lignes, int colonnes, int destination[]) {
    for (int y = 0; y < lignes; y++) {
        for (int x = 0; x < colonnes; x++) {
           
int indiceSource = y * colonnes + x;
           
     int indiceDestination = x * lignes + y;
            destination[indiceDestination] = source[indiceSource];
        }
    }
}

int main() {
    int lignes, colonnes;
    if (scanf("%d %d", &lignes, &colonnes) != 2) {
        return 1; 
    }

    if (lignes == 0 || colonnes == 0) {
        printf("AUCUN\n");
        return 0;
    }

    int source[10000];      
      int destination[10000]; 

    for (int i = 0; i < lignes * colonnes; i++) {
        scanf("%d", &source[i]);
    }

    
    transposer(source, lignes, colonnes, destination);

    for (int y = 0; y < colonnes; y++) {
        for (int x = 0; x < lignes; x++) {
            int indice = y * lignes + x;
            printf("%d", destination[indice]);
            if (x < lignes - 1) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
