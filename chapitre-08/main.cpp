#include <iostream>
#include <string>

using namespace std;

int niveauValeur(const string& niveau)
{
    if (niveau == "DEBUG") return 0;
    if (niveau == "INFO")  return 1;
    if (niveau == "WARN")  return 2;
    if (niveau == "ERROR") return 3;
    return -1;
}

int main()
{
    string seuil;
    int nbMessages;

    cin >> seuil;
    cin >> nbMessages;

    int seuilValeur = niveauValeur(seuil);

    int affiches = 0;
    int filtres = 0;

    for (int i = 0; i < nbMessages; ++i)
    {
        string niveau;
        string message;

        cin >> niveau >> message;

        int valeurMessage = niveauValeur(niveau);

        if (seuilValeur == -1 || valeurMessage == -1)
        {
            ++filtres;
        }
        else if (valeurMessage >= seuilValeur)
        {
            cout << niveau << ' ' << message << '\n';
            ++affiches;
        }
        else
        {
            ++filtres;
        }
    }

    cout << "AFFICHES " << affiches << '\n';
    cout << "FILTRES " << filtres << '\n';

    return 0;
}