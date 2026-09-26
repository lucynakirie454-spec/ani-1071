#include <cstdio>
int main(){

    int a,b ;
    int rest ;
    printf("entrer deux entiers : \n");
     scanf("%d %d", &a, &b);
       while( b != 0){

        rest = a % b;
        a = b;
        b = rest ;
       }
       printf("PGCD %d\n", a);
        return 0 ;
}