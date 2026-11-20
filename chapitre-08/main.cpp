#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    bool modifie = false;
    bool fermee = false;

    int demandes = 0;
    int ignores = 0;

    for (int i = 0; i < n; i++) {
        std::string evenement;
        std::cin >> evenement;

        if (fermee) {
            ignores++;
        }
        else if (evenement == "MODIF") {
            modifie = true;
            std::cout << "modifie" << std::endl;
        }
        else if (evenement == "SAUVE") {
            modifie = false;
            std::cout << "enregistre" << std::endl;
        }
        else if (evenement == "FERMETURE") {
            demandes++;

            if (modifie) {
                std::cout << "fermeture refusee" << std::endl;
            }
            else {
                std::cout << "fermeture acceptee" << std::endl;
                fermee = true;
            }
        }
    }

    std::cout << "DEMANDES " << demandes << std::endl;
    std::cout << "IGNORES " << ignores << std::endl;

    if (fermee) {
        std::cout << "FERMEE oui" << std::endl;
    }
    else {
        std::cout << "FERMEE non" << std::endl;
    }

    return 0;
}