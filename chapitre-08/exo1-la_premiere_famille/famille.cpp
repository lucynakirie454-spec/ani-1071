#include <iostream>

struct Vec2 {
    double x, y;
};

class Entite {
protected:
    Vec2 position;
    const char* nom;

public:
    Entite(Vec2 position, const char* nom)
        : position(position), nom(nom)
    {
    }
};

class Ennemi : public Entite {
private:
    int degats;

public:
    Ennemi(Vec2 position, const char* nom, int degats)
        : Entite(position, nom), degats(degats)
    {
    }

    void modifierPosition(double x, double y)
    {
        position.x = x;
        position.y = y;
    }
};

class Joueur : public Entite {
private:
    double vie;

public:
    Joueur(Vec2 position, const char* nom, double vie)
        : Entite(position, nom), vie(vie)
    {
    }
};

int main()
{
    std::cout << "sizeof(Vec2) = " << sizeof(Vec2) << '\n';
    std::cout << "sizeof(const char*) = " << sizeof(const char*) << '\n';
    std::cout << "sizeof(Entite) = " << sizeof(Entite) << '\n';
    std::cout << "sizeof(Ennemi) = " << sizeof(Ennemi) << '\n';
    std::cout << "sizeof(Joueur) = " << sizeof(Joueur) << '\n';

    Ennemi ennemi({0.0, 0.0}, "gobelin", 10);
    // ennemi.position.x = 10.0; // Ligne refusée : position est protected.
    return 0;
}
