resultat de la compilation:
```
PS C:\Users\Lenovo> clang++ c2-exo11_main.cpp -o main 
PS C:\Users\Lenovo> ./main                            
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 
PS C:\Users\Lenovo> 
```
reponse a la question: pourquoi suffit-il de tester les diviseurs jusqu'à la racine carrée ?
```
par ce que si un nombre pocede un diviseur plus grand que sa racine carree, il pocerais forcement un autre diviseur. donc on teste cela pour reduire jusqu'ou on chercherai les diviseurs.
```