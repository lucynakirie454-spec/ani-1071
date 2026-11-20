#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string format;
    getline(cin, format);

    int n;
    cin >> n;

    vector<int> arguments(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arguments[i];
    }

    string resultat;
    int remplaces = 0;
    int manquants = 0;

    for (size_t i = 0; i < format.size(); ++i)
    {
        if (i + 2 < format.size() &&
            format[i] == '{' &&
            format[i + 1] >= '0' &&
            format[i + 1] <= '9' &&
            format[i + 2] == '}')
        {
            int index = format[i + 1] - '0';

            if (index < n)
            {
                resultat += to_string(arguments[index]);
                ++remplaces;
            }
            else
            {
                resultat += '{';
                resultat += format[i + 1];
                resultat += '}';
                ++manquants;
            }

            i += 2;
        }
        else{
            resultat += format[i];
        }
    }

       cout << resultat << '\n';
        cout << "REMPLACES " << remplaces << '\n';
    cout << "MANQUANTS " << manquants << '\n';

    return 0;
}
