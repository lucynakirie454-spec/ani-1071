#include <iostream>

int main() {
    long long pas;
    std::cin >> pas;

    long long plafond;
    std::cin >> plafond;

    int n;
    std::cin >> n;

        long long seauAvec = 0;
       long long seauSans = 0;

       long long totalAvec = 0;
    long long totalSans = 0;

    int plafonnages = 0;

    for (int i = 1; i <= n; i++) {
        long long duree;
        std::cin >> duree;

        long long dureePlafonnee = duree;

           if (duree > plafond) {
            dureePlafonnee = plafond;
            plafonnages++;
        }

          seauAvec += dureePlafonnee;
        seauSans += duree;

        int pasAvec = 0;
        int pasSans = 0;

        if (pas > 0) {
            while (seauAvec >= pas) {
                seauAvec -= pas;
                pasAvec++;
                totalAvec++;
            }

            while (seauSans >= pas) {
                seauSans -= pas;
                pasSans++;
                totalSans++;
            }
        }

        std::cout << i << " "
                  << pasAvec << " "
                  << pasSans << std::endl;
    }

         std::cout << "AVEC " << totalAvec << std::endl;
          std::cout << "SANS " << totalSans << std::endl;
       std::cout << "PLAFONNAGES " << plafonnages << std::endl;
    std::cout << "DETTE " << seauSans << std::endl;

    return 0;
}