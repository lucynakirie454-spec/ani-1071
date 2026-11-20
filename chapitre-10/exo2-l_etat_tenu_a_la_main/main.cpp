#include <iostream>

int main() {
    int n;
    std::cin >> n;

    bool precedent = false;
    int appuis = 0;
    int relaches = 0;

    for (int i = 1; i <= n; i++) {
        int etat;
        std::cin >> etat;

        if (!precedent && etat) {
            std::cout << i << " APPUYE" << std::endl;
            appuis++;
        }
        else if (precedent && etat) {
            std::cout << i << " MAINTENU" << std::endl;
        }
        else if (precedent && !etat) {
            std::cout << i << " RELACHE" << std::endl;
            relaches++;
        }
        else {
            std::cout << i << " RIEN" << std::endl;
        }

        precedent = etat;
    }

    std::cout << "APPUIS " << appuis << std::endl;
    std::cout << "RELACHES " << relaches << std::endl;

    return 0;
}