#include <cstdio>

     long long pgcd(long long a, long long b) {
       if (a < 0)
    {
            a = -a;
}
if (b < 0){
    b = -b;
}
       while (b != 0){
       long long reste = a % b;
    a = b;
    b = reste;
}
    return a;
 }
        long long ppcm(long long a, long long b){
     if (a == 0 || b == 0) {

  return 0;
}
       long long d = pgcd(a, b);
  
       return (a / d) * b;
}
     int main(){

      long long a, b;
  int lu = 0;
         while (scanf("%lld %lld", &a, &b) == 2){
       
            lu = 1;
   long long d = pgcd(a, b);
long long m = ppcm(a, b);

    if (m < 0) {
    m = -m;
}
     printf("%lld\n", d);
  printf("%lld\n", m);
}
  if (lu == 0){
    printf("AUCUN\n");
}
return 0;
}