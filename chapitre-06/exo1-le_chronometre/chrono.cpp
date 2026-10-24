#include <chrono>
#include <cstdio>

double maintenant() {
    using namespace std::chrono;

    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();
}

int main() {
    long long total = 0;

    double debut = maintenant();

    for (int i = 1; i <= 1000000; i++) {
        total = total + i;
    }

    double fin = maintenant();
    double duree = fin - debut;

    printf("total : %lld\n", total);
    printf("duree de la boucle : %.9f seconde\n", duree);

    double durees[5];

    for (int i = 0; i < 5; i++) {
        double debutprintf = maintenant();

        printf("ligne de test\n");

        double finprintf = maintenant();

        durees[i] = finprintf - debutprintf;
    }

    printf("\nDurees des cinq printf :\n");

    for (int i = 0; i < 5; i++) {
        printf("%d : %.9f seconde\n", i + 1, durees[i]);
    }

    return 0;
}
