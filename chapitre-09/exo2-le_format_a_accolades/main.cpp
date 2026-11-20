#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Fichier
{
    string nom;
    bool garde;
    vector<string> inclus;
};

unordered_map<string, Fichier> fichiers;
unordered_map<string, int> compteSans;
unordered_map<string, int> compteAvec;
unordered_set<string> dejaInclus;

void calculSans(const string& nom)
{
    for (const string& inc : fichiers[nom].inclus)
    {
        compteSans[inc]++;
        calculSans(inc);
    }
}

void calculAvec(const string& nom)
{
    for (const string& inc : fichiers[nom].inclus)
    {
        bool inserer = true;

        if (fichiers[inc].garde)
        {
            if (dejaInclus.count(inc))
            {
                inserer = false;
            }
            else
            {
                dejaInclus.insert(inc);
            }
        }

        if (inserer)
        {
            compteAvec[inc]++;
            calculAvec(inc);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> ordre;

    for (int i = 0; i < n; ++i)
    {
