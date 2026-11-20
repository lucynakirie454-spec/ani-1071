#include <iostream>
#include <string>
#include <set>

int main() {
    int n;
    std::cin >> n;

    std::set<std::string> touches;
    int oublis = 0;

    for (int i = 0; i < n; i++) {
        std::string evenement;
        std::cin >> evenement;

        if (evenement == "BAS") {
            std::string touche;
            std::cin >> touche;
            touches.insert(touche);
        }
        else if (evenement == "HAUT") {
            std::string touche;
            std::cin >> touche;
            touches.erase(touche);
        }
        else if (evenement == "QUESTION") {
            std::string touche;
            std::cin >> touche;

            if (touches.count(touche)) {
                std::cout << "oui" << std::endl;
            }
            else {
                std::cout << "non" << std::endl;
            }
        }
        else if (evenement == "FOCUS_PERDU") {
            oublis += touches.size();
            touches.clear();
        }
    }

    std::cout << "ENFONCEES " << touches.size() << std::endl;
    std::cout << "OUBLIS " << oublis << std::endl;

    return 0;
}
