#include <iostream>

int gEnnemi = 0;
int gFantome = 0;
int gRobot = 0;

class Ennemi {
public:
   void deplacer(double dt) {
        (void)dt;
        ++gEnnemi;
    }

    virtual ~Ennemi() {}
};

class Fantome : public Ennemi {
public:
    void deplacer(double dt)  {
        (void)dt;
        ++gFantome;
    }
};

class Robot : public Ennemi {
public:
    void deplacer(double dt)  {
        (void)dt;
        ++gRobot;
    }
};

int main() {
    Ennemi* ennemis[6] = {
        new Ennemi(),
            new Robot(),
             new Robot(),
             new Fantome(),
                   new Fantome(),
          new Fantome()
    };

    for (int i = 0; i < 10; ++i) {
        for (Ennemi* e : ennemis) {
            e->deplacer(0.1);
        }
    }

          std::cout << gEnnemi << std::endl;
       std::cout << gFantome << std::endl;
    std::cout << gRobot << std::endl;

    for (Ennemi* e : ennemis) {
        delete e;
    }

    return 0;
}