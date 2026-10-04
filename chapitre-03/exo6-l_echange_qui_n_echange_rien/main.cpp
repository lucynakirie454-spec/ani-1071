#include <cstdio>
         void echangerParValeur(int a, int b){
     int temp = a;
  a = b;
    b = temp;
}
  void echangerParReference(int& a, int& b){
    int temp = a;
     a = b;
    b = temp;
}
    int main(){
    int a, b;
     scanf("%d %d", &a, &b);
      echangerParValeur(a, b);
         printf("%d\n", a);
   printf("%d\n", b); 
echangerParReference(a, b);

   printf("%d\n", a);
printf("%d\n", b);

   return 0;
}

  
