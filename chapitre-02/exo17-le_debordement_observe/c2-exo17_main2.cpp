#include <cstdio>
int main(){

    long long x = 1;
     int tour = 0 ;
     while(tour < 65){

        printf("tour %d : x =  %lld\n" , tour,x);
          x <<= 1;
         tour++ ;
     }
     return 0 ;

}