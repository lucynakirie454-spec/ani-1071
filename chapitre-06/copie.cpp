#include <cstdio>
#include <cmath>

    struct Vec2
{
    double x;
    double y;
};

void bougerCopie(Vec2 p)
{
    p.x = p.x + 1;
}

   void bougerRef(Vec2& p)
{
    p.x = p.x + 1;
}

double longueurRef(const Vec2& p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

int main()
{
        Vec2 p = {3, 4};

          printf("Depart : (%.1f, %.1f)\n", p.x, p.y);

    bougerCopie(p);
              printf("Apres bougerCopie : (%.1f, %.1f)\n", p.x, p.y);

              bougerRef(p);
    printf("Apres bougerRef : (%.1f, %.1f)\n", p.x, p.y);

    double longueur = longueurRef(p);

           printf("Apres longueurRef : (%.1f, %.1f)\n", p.x, p.y);
    printf("Longueur : %.2f\n", longueur);

    return 0;
}