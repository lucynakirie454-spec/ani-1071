#include <cstdio>
int main(){
    int ligne=12;
    int colonne=40;
    for(int i = 0 ; i < 12; i++){
          for (int j = 0; j < 40; j++)
         {
            if ( i == 0 || i == 12-1 ||j == 0 || j == 40-1)
             printf("#");
             else 
             printf(" ");
         }
    printf("\n");
    }
return 0 ;
}