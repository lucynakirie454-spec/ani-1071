#include <cstdio>

            unsigned int factorielle32(unsigned int n){
          unsigned int resultat = 1;
         for (unsigned int i = 1; i <= n; i++){
     resultat *= i;
}
     return resultat;
}
             unsigned long long factorielle64(unsigned long long n){
     unsigned long long resultat = 1;
      for (unsigned long long i = 1; i <= n; i++){
resultat *= i;
}

      return resultat;
}
int main(){
      unsigned int n;
 
scanf("%u", &n);
    printf("%u\n", factorielle32(n));
    
   printf("%llu\n", factorielle64(n));
return 0;
}