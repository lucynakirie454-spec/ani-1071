resulta de valeurs a,b,c,d sans code:
```
a= 3

b= 4
Apres a++, a devient  4. ici  , a++ : donne puis change.

c=10
Apres ++a, a devient 5 . ici ++a :change puis donne.
 cas de la ligne int d = a-- - --a;
  ici d a une valeur non definie.
  ```
  Resultat du code :
  ```
  PS C:\Users\Lenovo> clang++ c2-exo8_main.cpp -o programme
PS C:\Users\Lenovo> ./programme
b = 4 ,a, = 4
c = 10, a = 5
PS C:\Users\Lenovo> 
```