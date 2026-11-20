#include <iostream>

int main() {
    int pas;
    std::cin >> pas;

    int n;
    std::cin >> n;

    int position = 0;
    int deplacement = 0;
    int immobile = 0;

    for (int i = 0; i < n; i++) {
        int gauche;
        int droite;

        std::cin >> gauche >> droite;

        int axe = droite - gauche;

        position += axe * pas;

        if (axe == 0) {
            immobile++;
        }

        if (axe < 0) {
            deplacement += -axe * pas;
        } else {
            deplacement += axe * pas;
        }

        std::cout << axe << " " << position << std::endl;
    }

    std::cout << "DEPLACEMENT " << deplacement << std::endl;
    std::cout << "IMMOBILE " << immobile << std::endl;

    return 0;
}
