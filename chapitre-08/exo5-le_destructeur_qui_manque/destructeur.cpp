#include <iostream>
#include <vector>

class Trace {
public:
    ~Trace() {
        std::cout << "~Trace" << std::endl;
    }
};

class Ennemi {
public:
    virtual void deplacer(double dt) {
        (void)dt;
    }

    virtual ~Ennemi() {
        std::cout << "~Ennemi" << std::endl;
    }
};

class Fantome : public Ennemi {
public:
    std::vector<int> valeurs;
    Trace trace;

    Fantome() : valeurs(1000) {
    }

    void deplacer(double dt) override {
        (void)dt;
    }

    ~Fantome() {
        std::cout << "~Fantome " << valeurs.size() << std::endl;
    }
};

int main() {
    std::cout << "Par Ennemi*" << std::endl;

    Ennemi* e = new Fantome;
            delete e;

    std::cout << "Par Fantome*" << std::endl;

        Fantome* f = new Fantome;
    delete f;

    return 0;
}
