#include <cstdio>

  void tourner(int t[], int n, int k){
       
    if (n == 0) {
        return;
    }

          k %= n;
    if (k < 0) {
     
        k += n;
    }
          int temp[1000];

    for (int i = 0; i < n; i++){

        temp[i] = t[(i + k) % n];
    }
    for (int i = 0; i < n; i++){
       
          t[i] = temp[i];
    }
}

int main()
{
    int n;
    int k;

 scanf("%d %d", &n, &k);

    int t[1000];
           for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
 tourner(t, n, k);
     for (int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    } 
    return 0;
}
