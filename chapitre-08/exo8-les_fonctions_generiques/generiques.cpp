#include <iostream>
#include <string>

using namespace std;

template <typename T>
void echanger(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

template <typename T>
T minimum(T a, T b){
    return (a < b) ? a : b;
}

template <typename T>
T clamp(T x, T bas, T haut){
    if (x < bas)
        return bas;
    if (x > haut)
        return haut;
    return x;
}

template <typename T>
void trier(T t[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;

        for (int j = i + 1; j < n; j++){
            if (t[j] < t[min]){
                min = j;
            }
        }

        if (min != i) {
            echanger(t[i], t[min]);
        }
    }
}

struct Vec2{
    double x, y;
};

int main()
{
          int a = 10;
    int b = 25;

               cout << "maximum int : " << maximum(a, b) << endl;
          cout << "minimum int : " << minimum(a, b) << endl;
    cout << "clamp(30, 0, 20) : " << clamp(30, 0, 20) << endl;

    echanger(a, b);
          cout << "apres echanger int : " << a << " " << b << endl;

    double x = 7.5;
           double y = 2.3;

    cout << "maximum double : " << maximum(x, y) << endl;
         cout << "minimum double : " << minimum(x, y) << endl;
    cout << "clamp(9.8, 0.0, 5.0) : " << clamp(9.8, 0.0, 5.0) << endl;

    echanger(x, y);
    cout << "apres echanger double : " << x << " " << y << endl;

    Vec2 u{1.0, 2.0};
    Vec2 v{3.0, 4.0};

    echanger(u, v);

    cout << "Vec2 u : (" << u.x << ", " << u.y << ")" << endl;
    cout << "Vec2 v : (" << v.x << ", " << v.y << ")" << endl;

    string mots[5] =
    {
        "zebre",
        "Yaounde",
        "arbre",
        "Zoo",
        "abricot"
    };

    trier(mots, 5);

    cout << "\nTableau trie :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << mots[i] << endl;
    }

     //maximum(u, v);
     //maximum(3, 7.5);

    return 0;
}
