la premiere commande taper me donne 
```
PS C:\Users\Lenovo> clang++ -Wall  c1-exo10_main.cpp -o nom       
c1-exo10_main.cpp:3:10: warning: unused variable 'a' [-Wunused-variable]
    3 |      int a=7;
      |          ^
1 warning generated.
```
par contre la deuxieme commande ne me sort aucune erreur ni avertissement Comme il n’y a pas de code qui affiche quelque chose la variable a n’est pas utilisée,mais je vois que  le programme s’exécute mais ne montre rien à l’écran.
```
PS C:\Users\Lenovo> clang++ -Wextra  c1-exo10_main.cpp -o nom
PS C:\Users\Lenovo> ./nom
```

 de ce fais la difference entre un  avertissement et une erreur est que un avertissement n'arrete pas l'excution du programme, par contre ici le le compilaateur te fais juste savoir quleque chose sur une ligne qu;il trouve douteuse. alors que une erreur arret, et bloque automatiquement l'execution du programme.
