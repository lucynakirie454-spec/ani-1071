#include <cstdio>
int main(){

    int x=1;
    int tour = 0;
    while(tour < 35){
        printf("tour %d : x = %d\n ", tour,x );
         
        x <<= 1;
         tour++ ;
    }
    return 0 ;
}