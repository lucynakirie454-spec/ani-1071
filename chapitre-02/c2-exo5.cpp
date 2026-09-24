#include <cstdio>
int main(){

    int n;
   printf("Entrez un entier \n: ");
scanf("%d", &n);
    if(n %2 ==0){
        printf("pairs\n");

    }else{
        printf("impair\n");

    }
     if(n > 0){
        printf("positif\n");

     } else if(n == 0 ){
        printf("nul\n");
     } else{
        printf("negatif\n");
     }
     
     if(n %3 == 0)
     {
        printf("n, divisible par 3\n");
     }else {
        printf("non divisible par 3 \n");
     }
return 0 ;
}