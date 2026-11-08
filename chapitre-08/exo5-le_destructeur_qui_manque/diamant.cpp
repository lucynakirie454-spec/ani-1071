#include <iostream>

struct Vec2
{
    double x;
    double y;
};

struct Entite
{
    Vec2 position;
};

struct Mobile : virtual public Entite
{
    Vec2 vitesse;
};

struct Visible : virtual public Entite
{
    char glyphe;
};

struct Ennemi : public Mobile, public Visible
{
};

int main()
{
    std::cout << "sizeof(Entite) = " << sizeof(Entite) << '\n';
    std::cout << "sizeof(Mobile) = " << sizeof(Mobile) << '\n';
    std::cout << "sizeof(Visible) = " << sizeof(Visible) << '\n';
    std::cout << "sizeof(Ennemi) = " << sizeof(Ennemi) << '\n';

    Ennemi e{};

    // Test sans héritage virtuel :
    // e.position.x = 3.0;

    e.position.x = 3.0;
    e.position.y = 0.0;

    Mobile& m = e;
    Visible& v = e;

    std::cout << "\nPosition vue par Mobile& : "
              << m.position.x << ", "
              << m.position.y << '\n';

    std::cout << "Position vue par Visible& : "
              << v.position.x << ", "
              << v.position.y << '\n';

    return 0;
}