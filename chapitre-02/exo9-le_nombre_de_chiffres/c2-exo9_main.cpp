#include <cstdio> 
int main(){
  int nombre;
  int chiffres = 0;
  printf(" entrer la valeur d'un entier\n" );
   scanf("%d",&nombre);
   if(nombre == 0){
    chiffres = 1;
   } else{
    while(nombre >0 ){
        nombre = nombre /10;
        chiffres++ ;
    }
   }
printf("le nombre de chiffre est: %d\n", chiffres);
     return 0 ;

}
