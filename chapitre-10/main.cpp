#include <iostream>

int main() {
    long long pas;
    std::cin >> pas;

    int n;
    std::cin >> n;

    long long seau = 0;
    long long pasTotal = 0;

    for (int i = 1; i <= n; i++) {
        long long duree;
        std::cin >> duree;

        seau += duree;

        int nombrePas = 0;

        if (pas > 0) {
            while (seau >= pas) {
                seau -= pas;
                nombrePas++;
                pasTotal++;
            }
        }

        std::cout << i << " " << nombrePas << " " << seau << std::endl;
    }

    std::cout << "PAS TOTAL " << pasTotal << std::endl;
    std::cout << "RESTE FINAL " << seau << std::endl;

    return 0;
}