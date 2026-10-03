#include <cstdio>
           int nombreDeChiffres(int n){
          if (n == 0){
       return 1;
}
long long valeur = n;
        if (valeur < 0){
  valeur = -valeur;
}
            int compteur = 0;
        while (valeur > 0){
    compteur++;
      valeur /= 10;
}
       return compteur;
}
       int main(){
       int n;
             bool lu = false;
while (scanf("%d", &n) == 1){
            
    lu = true;
   printf("%d\n", nombreDeChiffres(n));
}
         if (!lu){
         printf("AUCUN\n");
}
     return 0;
}