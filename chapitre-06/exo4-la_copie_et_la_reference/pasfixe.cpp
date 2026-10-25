#include <chrono>
#include <cstdio>
#include <cstdlib>

double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();
}

const double PAS = 1.0 / 120.0;

 long long nbMisesAJour = 0;
long long nbTours = 0;

void mettreAJour(double dt)
{
    (void)dt;
    nbMisesAJour++;
}

int main()
{
    srand(0);

    double accumulateur = 0.0;
     double precedent = maintenant();
    double debut = precedent;

    const int attenteMax = 50000; 

    while (maintenant() - debut < 10.0) {
        nbTours++;
    double actuel = maintenant();
     accumulateur += actuel - precedent;
        precedent = actuel;

        while (accumulateur >= PAS) {
            mettreAJour(PAS);
            accumulateur -= PAS;
        }

 volatile int attente = rand() % attenteMax;
        for (int i = 0; i < attente; i++) {
        }
    }

       printf("\n========== RESULTATS ==========\n");
                 printf("Duree du test : 10 secondes\n");
           printf("Pas fixe : %.6f seconde\n", PAS);
         printf("Duree maximale d'une attente : %d iterations\n", attenteMax);
       printf("Nombre de tours de la grande boucle : %lld\n", nbTours);
    printf("Nombre d'appels a mettreAJour() : %lld\n", nbMisesAJour);

    printf("Nombre attendu d'appels : %.0f\n", 10.0 / PAS);

    return 0;
}