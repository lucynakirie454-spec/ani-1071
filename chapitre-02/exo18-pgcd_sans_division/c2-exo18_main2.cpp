#include <cstdio>
int main(){

    int a,b ;
    int rest ;
    int tours = 0;
    printf("entrer deux entiers : \n");
     scanf("%d %d", &a, &b);
       while( b != 0){

        rest = a % b;
        a = b;
        b = rest ;
           tours++;
       }
       printf("PGCD %d\n", a);
    printf("tours : %d\n", tours);
        return 0 ;
}
