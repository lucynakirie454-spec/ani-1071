#include <cstdio>
int main(){

    unsigned int  x = 1;
     int tour = 0 ;
     while(tour < 65){

        printf("tour %d : x =  %d\n" , tour,x);
          x <<= 1;
         tour++ ;
     }
     return 0 ;

}