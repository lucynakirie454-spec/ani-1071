#include <cstdio>
int main(){

    int annee;

      printf(" entrer l'annee de votre choix \n" );
      scanf("%d",&annee);
      if(annee % 400 ==0){
        printf("annee bissextile\n");

      }else if( annee % 100 == 0){
        printf(" annee non bissextile");

      }else if( annee % 4 == 0){
printf("annee bissextile \n");
      }else{
        printf("annee non bissextile");
      }
return 0 ;
}
