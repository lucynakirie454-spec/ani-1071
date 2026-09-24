#include <cstdio>

int main(){

    int a,b,c,d,e;
    double moyenne;
    int somme;

printf(" entrer  5 entiers  ");
   scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    
   somme = a+b+c+d+e;
   moyenne = somme/5.0;
   printf("somme = %d\n", somme);
    printf("moyenne = %f\n", moyenne);

    return 0;

 


}