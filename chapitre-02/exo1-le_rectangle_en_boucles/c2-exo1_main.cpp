#include <cstdio>
int main(){
    int ligne=7;
    int colonne=20;
    for(int i = 0 ; i < 7; i++){
          for (int j = 0; j < 20; j++)
         {
            if ( i == 0 || i == 7-1 ||j == 0 || j == 20-1)
             printf("#");
             else 
             printf(" ");
         }
    printf("\n");
    }
return 0 ;
}
