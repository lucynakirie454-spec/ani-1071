#include <iostream>
#include <cstdio>

struct Vec2
{
    double x, y;

    Vec2() : x(0.0), y(0.0) {}
    Vec2(double x_, double y_) : x(x_), y(y_) {}

    Vec2& operator+=(Vec2 b)
    {
        x += b.x;
        y += b.y;
        return *this;
    }
};

Vec2 operator+(Vec2 a, Vec2 b)
{
    return {a.x + b.x, a.y + b.y};
}

Vec2 operator*(Vec2 a, double k)
{
    return {a.x * k, a.y * k};
}

const int MAX = 1000;

using Entite = int;

struct Transform
{
    Vec2 position;
    double rotation;
    Vec2 echelle;
};

struct Corps
{
    Vec2 vitesse;
    double masse;
};

struct Sprite
{
    char glyphe;
};

Transform transforms[MAX];
bool aTransform[MAX] = {};

Corps corps[MAX];
bool aCorps[MAX] = {};

Sprite sprites[MAX];
bool aSprite[MAX] = {};

struct Cellule
{
    Vec2 position;
    Vec2 vitesse;
    int suivante;
};

Cellule pool[1000];
int premiereLibre = 0;

void initialiser()
{
    for (int i = 0; i < 999; i++)
        pool[i].suivante = i + 1;

    pool[999].suivante = -1;
}

Entite creerEntite()
{
    if (premiereLibre == -1)
        return -1;

    int i = premiereLibre;
    premiereLibre = pool[i].suivante;
    return i;
}

void detruireEntite(Entite e)
{
    aTransform[e] = false;
    aCorps[e] = false;
    aSprite[e] = false;

    pool[e].suivante = premiereLibre;
    premiereLibre = e;
}

const int H = 20;
const int L = 40;

char image[H][L];

void effacer(char c = ' ')
{
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#')
{
    if (x < 0 || x >= L || y < 0 || y >= H)
        return;

    image[y][x] = c;
}

void afficher()
{
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < L; x++)
            std::printf("%c", image[y][x]);

        std::printf("\n");
    }
}

int systemePhysique(double dt)
{
    int compteur = 0;

    for (int e = 0; e < MAX; e++)
    {
        if (aTransform[e] && aCorps[e])
        {
            corps[e].vitesse += Vec2(0.0, -9.81) * dt;
            transforms[e].position += corps[e].vitesse * dt;
            compteur++;
        }
    }

    return compteur;
}

int systemeRendu()
{
    int compteur = 0;

    effacer();

    for (int e = 0; e < MAX; e++)
    {
        if (aTransform[e] && aSprite[e])
        {
            int x = (int)transforms[e].position.x;
            int y = (int)transforms[e].position.y;

            point(x, H - 1 - y, sprites[e].glyphe);

            compteur++;
        }
    }

    return compteur;
}

int main()
{
    initialiser();

    for (int i = 0; i < 40; i++)
    {
        Entite e = creerEntite();

        aTransform[e] = true;
        aSprite[e] = true;

        transforms[e].position = Vec2(i % L, 15);
        sprites[e].glyphe = '#';
    }

    for (int i = 0; i < 40; i++)
    {
        Entite e = creerEntite();

        aTransform[e] = true;
        aCorps[e] = true;
        aSprite[e] = true;

        transforms[e].position = Vec2(i % L, 10);
        corps[e].vitesse = Vec2(1.0, 5.0);
        sprites[e].glyphe = '*';
    }

    for (int i = 0; i < 20; i++)
    {
        Entite e = creerEntite();

        aTransform[e] = true;
        aCorps[e] = true;
        aSprite[e] = true;

        transforms[e].position = Vec2(i % L, 5);
        corps[e].vitesse = Vec2(0.5, 3.0);
        sprites[e].glyphe = 'E';
    }

    for (int i = 0; i < 5; i++)
    {
        int physique = systemePhysique(0.1);
        int rendu = systemeRendu();

        std::cout << "Physique: "
                  << physique
                  << "  Rendu: "
                  << rendu
                  << '\n';
    }

    for (int e = 5; e <= 50; e += 5)
        detruireEntite(e);

    std::cout << "\nNouveaux numeros : ";

    for (int i = 0; i < 5; i++)
    {
        Entite e = creerEntite();
        std::cout << e << ' ';
    }

    std::cout << '\n';

    int physique = systemePhysique(0.1);
       int rendu = systemeRendu();

    std::cout << "Physique: "
              << physique
              << "  Rendu: "
              << rendu
              << '\n';

    afficher();

    return 0;
}
