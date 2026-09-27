#include <cstdio>
int main(){

    int choix;
    printf("1 nouvelle partie\n");
    printf("2 charger\n");
    printf("3 options\n");
    printf("4 quitter\n");
    printf("votre choix : ");
    scanf("%d",&choix);
    
     switch (choix)
     {
     case 1: 
     printf("1 nouvelle partie");
        break;
        case 2:
        printf("2 charger");
        break;
          case 3 : printf("option");
          break;
           case 4 :
           printf("quitter");
           break;
     
     default:
     printf("choix invalide\n");
        break;
     }
     return 0 ;


     
}