#include <iostream>
#include <vector>
#include <string>
#include <set>

struct Liaison {
    std::string nom;
    std::string type;

    std::string touche;

    std::string negative;
    std::string positive;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Liaison> liaisons;

    for (int i = 0; i < n; i++) {
        Liaison l;

        std::cin >> l.nom;
        std::cin >> l.type;

        if (l.type == "ACTION") {
            std::cin >> l.touche;
        }
        else {
            std::cin >> l.negative;
            std::cin >> l.positive;
        }

        liaisons.push_back(l);
    }

    int images;
    std::cin >> images;

      int activations = 0;
    int axesNonNuls = 0;

    for (int image = 1; image <= images; image++) {
        int nbTouches;
        std::cin >> nbTouches;

        std::set<std::string> toucheEnfoncee;

        for (int j = 0; j < nbTouches; j++) {
            std::string touche;
            std::cin >> touche;
            toucheEnfoncee.insert(touche);
        }

        std::cout << "image " << image << std::endl;

        for (const Liaison& l : liaisons) {

            if (l.type == "ACTION") {

                int valeur = toucheEnfoncee.count(l.touche) ? 1 : 0;

                if (valeur == 1) {
                    activations++;
                }

                std::cout << l.nom << " " << valeur << std::endl;
            }
            else {

                     int negatif = toucheEnfoncee.count(l.negative) ? 1 : 0;
                int positif = toucheEnfoncee.count(l.positive) ? 1 : 0;

                int axe = positif - negatif;

                if (axe != 0) {
                    axesNonNuls++;
                }

                std::cout << l.nom << " " << axe << std::endl;
            }
        }
    }

       std::cout << "ACTIVATIONS " << activations << std::endl;
    std::cout << "AXES NON NULS " << axesNonNuls << std::endl;

    return 0;
}
