#include <cstdio>
int main(){

int a, n;
scanf("%d,%d", &a, &n);
  int petit = (a < n) ? a : n;
   int grand = ( a > n) ? a : n;
       printf("le plus petit : %d \n", petit);
       printf("le plus grand : %d \n", grand);

          printf("%d est %s\n", petit,(petit %2 == 0)?
          "pair ": "impair");

          printf("%d est %s\n", grand,(grand %2 == 0)?
          "pair": "impair");
printf("%d%s\n", n, (n == 1)?
 "objet" : "objets ");
          return 0 ;
        

}
