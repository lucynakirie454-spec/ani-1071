#include <cstdio>
 int main(){

    int a,b;
  int tours = 0;
   printf("entrer deux nombre : \n");
    scanf("%d %d",&a, &b);
     while( a!=b){
      tour++;
        
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
     }
     printf("PGCD : %d\n", a);
  printf("tours : %d\n", tours);
return 0 ;
 }
