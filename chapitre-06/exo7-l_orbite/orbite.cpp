#include <cstdio>
#include <cmath>

struct Vec2{
    
    
    double x;
    double y;
};

   const double mu = 100.0;

    const int H = 20;
     const int L = 40;

          char image[H][L];

    void effacer(char c = ' '){
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#'){
    if (x < 0 || x >= L || y < 0 || y >= H)
        return;

    image[y][x] = c;
}

void afficher(){
    for (int y = 0; y < H; y++){
        for (int x = 0; x < L; x++)
            printf("%c", image[y][x]);

        printf("\n");
    }
}

         double longueur(Vec2 v){
    return sqrt(v.x * v.x + v.y * v.y);
}

Vec2 acceleration(Vec2 p)
{
    double r = longueur(p);
    double facteur = -mu / (r * r * r);

    Vec2 a;
    a.x = facteur * p.x;
    a.y = facteur * p.y;

    return a;
}

void eulerExplicite(Vec2& p, Vec2& v, Vec2 a, double dt)
{
    p.x += v.x * dt;
    p.y += v.y * dt;

    v.x += a.x * dt;
    v.y += a.y * dt;
}

void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt)
{
    v.x += a.x * dt;
    v.y += a.y * dt;

    p.x += v.x * dt;
    p.y += v.y * dt;
}

int main()
{
    const double dt = 0.1;
    const int nbPas = 10000;

    Vec2 pExp = {100.0, 0.0};
    Vec2 vExp = {0.0, 1.0};

    Vec2 pSemi = {100.0, 0.0};
    Vec2 vSemi = {0.0, 1.0};

    printf("Distances tous les 500 pas\n\n");

    effacer();

    const double echelle = 5.5;

    for (int i = 0; i < nbPas; i++)
    {
        Vec2 aExp = acceleration(pExp);
        Vec2 aSemi = acceleration(pSemi);

        eulerExplicite(pExp, vExp, aExp, dt);
        eulerSemiImplicite(pSemi, vSemi, aSemi, dt);

        if (i % 500 == 0)
        {
            printf(
                "%5d  %.6f  %.6f\n",
                i,
                longueur(pExp),
                longueur(pSemi)
            );
        }

        int xE = (int)(L / 2 + pExp.x / echelle);
        int yE = (int)(H / 2 - pExp.y / echelle);

        int xS = (int)(L / 2 + pSemi.x / echelle);
        int yS = (int)(H / 2 - pSemi.y / echelle);

        point(xE, yE, '#');
        point(xS, yS, '#');
    }

               printf("\nOrbites:\n\n");
      afficher();

          printf("\nPas dix fois plus petit\n\n");

        Vec2 pExp2 = {100.0, 0.0};
    Vec2 vExp2 = {0.0, 1.0};

    Vec2 pSemi2 = {100.0, 0.0};
    Vec2 vSemi2 = {0.0, 1.0};

    double dtPetit = dt / 10.0;

    for (int i = 0; i < nbPas; i++)
    {
            Vec2 aExp = acceleration(pExp2);
        Vec2 aSemi = acceleration(pSemi2);

                eulerExplicite(pExp2, vExp2, aExp, dtPetit);
        eulerSemiImplicite(pSemi2, vSemi2, aSemi, dtPetit);
    }

           printf("Explicite : %.6f\n", longueur(pExp2));
    printf("Semi-implicite : %.6f\n", longueur(pSemi2));

    return 0;
}
