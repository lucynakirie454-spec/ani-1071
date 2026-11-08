
#include <iostream>

class Entite {
public:
    virtual const char* nom() const {
        return "entite";
    }

    virtual ~Entite() {}
};

class Ennemi : public Entite {
public:
    int degats;

    Ennemi(int d) : degats(d) {}

    const char* nom() const override {
        return "ennemi";
    }
};

void f(Entite e) {
    std::cout << e.nom() << std::endl;
}

void g(Entite& e) {
    std::cout << e.nom() << std::endl;
}

void h(Entite* e) {
    std::cout << e->nom() << std::endl;
}

int main() {
    Ennemi ennemi(10);

           f(ennemi);
        g(ennemi);
    h(&ennemi);

         std::cout << sizeof(Entite) << std::endl;
    std::cout << sizeof(Ennemi) << std::endl;

    return 0;
}