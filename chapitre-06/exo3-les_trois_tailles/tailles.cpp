#include <cstdio>

struct Vec2
{
    double x;
    double y;
};

struct Particule
{
    Vec2 position;
    Vec2 vitesse;
    double vie;
};

struct A
{
    char c;
    int n;
};

struct B
{
    char c;
    double d;
    char e;
};

struct C
{
    double d;
    char c;
    char e;
};


struct Particule2
{
    double vie;
    char etat;
    Vec2 position;
    Vec2 vitesse;
};

struct Particule3
{
    Vec2 position;
    Vec2 vitesse;
    double vie;
    char etat;
};


struct Particule4
{
    char etat;
    double vie;
    Vec2 position;
    Vec2 vitesse;
};

int main()
{
    printf("Vec2       : %zu\n", sizeof(Vec2));
    printf("Particule  : %zu\n", sizeof(Particule));
       printf("A          : %zu\n", sizeof(A));
    printf("B          : %zu\n", sizeof(B));
           printf("C          : %zu\n", sizeof(C));

            printf("\nParticule2 : %zu\n", sizeof(Particule2));
        printf("Particule3 : %zu\n", sizeof(Particule3));
    printf("Particule4 : %zu\n", sizeof(Particule4));

    return 0;
}
