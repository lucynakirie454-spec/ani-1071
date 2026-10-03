#include <cstdio>

       int chiffresRecursif(int n){
          if (n < 0){
      n = -n;
}
 
       if (n < 10){
   return 1;
}

          return 1 + chiffresRecursif(n / 10);
}
         int sommeChiffresRecursif(int n){
     if (n < 0){
   n = -n;
}
           if (n < 10){
     return n;
} 
         return n % 10 + sommeChiffresRecursif(n / 10);
}
   int main(){
           int n;
       int lu = 0;
        while (scanf("%d", &n) == 1){
                     lu = 1;
             printf("%d\n", chiffresRecursif(n));
           printf("%d\n", sommeChiffresRecursif(n));
}
if (lu == 0){
     printf("AUCUN\n");
}
   return 0;
}