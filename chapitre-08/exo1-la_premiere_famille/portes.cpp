#include <iostream>

class Base {
public:
    int publique;

protected:
    int protegee;

private:
    int privee;

public:
    Base() : publique(1), protegee(2), privee(3)
    {
    }
};

class Derivee : public Base {
public:
    void afficher()
    {
        std::cout << publique << '\n'; 
        std::cout << protegee << '\n';  

         std::cout << privee << '\n'; 
    }
};

int main()
{
    Derivee d;

    std::cout << d.publique << '\n';  // Compile.

    // std::cout << d.protegee << '\n'; // Refusé : protegee est protected.
    // std::cout << d.privee << '\n';   // Refusé : privee est private.

    d.afficher();

    return 0;
}

