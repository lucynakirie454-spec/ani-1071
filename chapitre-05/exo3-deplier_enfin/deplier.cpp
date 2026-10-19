#include <cstdio>

void deplier(int i, int largeur, int& x, int& y)
{
    x = i % largeur;
    y = i / largeur;
}

void minMax(const int t[], int n, int& min, int& max)
{
    min = t[0];
    max = t[0];

    for (int i = 1; i < n; i++)
    {
        if (t[i] < min)
            min = t[i];

        if (t[i] > max)
            max = t[i];
    }
}

       bool diviser(int a, int b, int& quotient, int& reste)
{
    if (b == 0)
        return false;

    quotient = a / b;
    reste = a % b;

    return true;
}

int main()
{
    int x, y;

    deplier(0, 40, x, y);
             printf("i=0 largeur=40 -> x=%d y=%d\n", x, y);

          deplier(39, 40, x, y);
    printf("i=39 largeur=40 -> x=%d y=%d\n", x, y);

             deplier(85, 40, x, y);
    printf("i=85 largeur=40 -> x=%d y=%d\n", x, y);

                 int t[] = {12, 7, 19, 3, 15};
       int minimum, maximum;

                minMax(t, 5, minimum, maximum);
      printf("min=%d max=%d\n", minimum, maximum);

 int quotient, reste;

                        if (diviser(17, 5, quotient, reste))
        printf("17 / 5 -> quotient=%d reste=%d\n", quotient, reste);

              if (diviser(42, 8, quotient, reste))
        printf("42 / 8 -> quotient=%d reste=%d\n", quotient, reste);

      quotient = 999;
    reste = 888;

             printf("Avant : quotient=%d reste=%d\n", quotient, reste);

         bool resultat = diviser(10, 0, quotient, reste);

    printf("Retour = %d\n", resultat);
      printf("Apres : quotient=%d reste=%d\n", quotient, reste);

    return 0;
}
