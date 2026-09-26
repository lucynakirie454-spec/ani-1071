#include <cstdio>
int main(){

    int h ;
    int k;
    int i; 
    printf("entrer la valeur de h\n" );
     scanf("%d", &h);
      for ( k = 1; k <= h ;k++){
        for(i = 1; i <= h-k; i++)
        {
            printf(" ");
        }
        for(i = 1; i <= 2* k - 1 ; i++){
            printf("*");
 
        }
 printf("\n");
      }

}