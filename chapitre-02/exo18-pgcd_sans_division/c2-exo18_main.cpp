#include <cstdio>
 int main(){

    int a,b;
   printf("entrer deux nombre : \n");
    scanf("%d %d",&a, &b);
     while( a!=b){
        
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
     }
     printf("PGCD : %d\n", a);

 }