#include <cstdio>

struct Noeud
{
    int valeur;
    Noeud* suivant;
};

int vivants = 0;

Noeud* ajouterEnTete(Noeud* tete, int v)
{
    Noeud* n = new Noeud;
    vivants++;

    n->valeur = v;
    n->suivant = tete;

    return n;
}

Noeud* ajouterEnQueue(Noeud* tete, int v)
{
    Noeud* n = new Noeud;
    vivants++;

    n->valeur = v;
    n->suivant = nullptr;

    if (tete == nullptr)
        return n;

    Noeud* courant = tete;

    while (courant->suivant != nullptr)
        courant = courant->suivant;

    courant->suivant = n;

    return tete;
}

int compter(const Noeud* n)
{
    int nb = 0;

    while (n != nullptr)
    {
        nb++;
        n = n->suivant;
    }

    return nb;
}

bool contient(const Noeud* n, int v)
{
    while (n != nullptr)
    {
        if (n->valeur == v)
            return true;

        n = n->suivant;
    }

    return false;
}

void afficher(const Noeud* n)
{
    while (n != nullptr)
    {
        printf("%d ", n->valeur);
        n = n->suivant;
    }

    printf("\n");
}

Noeud* retirer(Noeud* tete, int v)
{
    if (tete == nullptr)
        return nullptr;

    if (tete->valeur == v)
    {
        Noeud* suivant = tete->suivant;

        delete tete;
        vivants--;

        return suivant;
    }

    Noeud* courant = tete;

    while (courant->suivant != nullptr)
    {
        if (courant->suivant->valeur == v)
        {
            Noeud* aSupprimer = courant->suivant;

            courant->suivant = aSupprimer->suivant;

            delete aSupprimer;
            vivants--;

            return tete;
        }

        courant = courant->suivant;
    }

    return tete;
}

void liberer(Noeud* n)
{
    while (n != nullptr)
    {
        Noeud* suivant = n->suivant;

        delete n;
        vivants--;

        n = suivant;
    }
}

Noeud* inverser(Noeud* tete)
{
    Noeud* precedent = nullptr;
    Noeud* courant = tete;

    while (courant != nullptr)
    {
        Noeud* suivant = courant->suivant;

        courant->suivant = precedent;

        precedent = courant;
        courant = suivant;
    }

    return precedent;
}

int main()
{
    Noeud* liste = nullptr;

        liste = ajouterEnQueue(liste, 10);
     liste = ajouterEnQueue(liste, 20);
      liste = ajouterEnQueue(liste, 30);
     liste = ajouterEnQueue(liste, 40);
    liste = ajouterEnQueue(liste, 50);

        printf("Liste initiale : ");
      afficher(liste);

      printf("Compter : %d\n", compter(liste));

      printf("Contient 30 : %d\n", contient(liste, 30));
      printf("Contient 99 : %d\n", contient(liste, 99));

           liste = ajouterEnTete(liste, 5);
       printf("Apres ajouterEnTete : ");
    afficher(liste);

              liste = retirer(liste, 5);
       printf("Retirer tete (5) : ");
     afficher(liste);

           liste = retirer(liste, 30);
      printf("Retirer milieu (30) : ");
    afficher(liste);

        liste = retirer(liste, 999);
       printf("Retirer absent (999) : ");
    afficher(liste);

            liste = inverser(liste);
       printf("Liste inversee : ");
    afficher(liste);

            printf("Vivants avant liberer : %d\n", vivants);

         liberer(liste);
      liste = nullptr;

        printf("Vivants apres liberer : %d\n", vivants);

    return 0;
}