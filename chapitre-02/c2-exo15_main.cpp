#include <cstdio>
  int main(){

    int r ;
     scanf("%d", &r);
      for( int y = -r; y <=r; y++)
       {
        for(int x = -r; x <= r ;
        x++) {
            if(x * x + y * y <= r*r){
                printf("##");

            }else{
                printf("  ");
            }
        }
        printf("\n");
       }
return 0 ;
  }