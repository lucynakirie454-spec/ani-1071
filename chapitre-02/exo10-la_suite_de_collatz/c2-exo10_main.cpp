#include <cstdio> 
int main(){
     int n ;
     int etape = 0;
      printf(" entrer un entier \n" );
      scanf("%d",&n);
         while ( n != 1){
            printf("%d ", n);
            if( n %2 ==0){
                n = n /2 ;
                
            }else{
                n = 3*n + 1;
            }
            etape++;
         }
         printf("1 \n");
        printf("etape: %d\n", etape);
         
        return 0 ;
}
