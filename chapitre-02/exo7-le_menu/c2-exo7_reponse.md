resultat du premier code :
```
PS C:\Users\Lenovo> clang++ c2-exo7_main.cpp -o main 
PS C:\Users\Lenovo> ./main                            
1 nouvelle partie
2 charger
3 options
4 quitter
votre choix : 3
option
PS C:\Users\Lenovo> 
```
resultat du code lorsqu'on enleve un seul break:
 ce qui se cahnge  ici c'est que le programme continue premierement a compiler normalement sans erreur, de plus lorsque je rentre le numero de la ligne corespondant au break  c'est a dire l'entrer : 3, je me rends comte que j'ai la reponse attendue mais pas que cela. en effet en plus de cette reponse j'ai egalement le reste de reponse qui suivent directement le code. donc ma boucle ne n'arret pas elle m'affiche les autres reponse qui sont a la suite du code.
 rendu:
 ```
 PS C:\Users\Lenovo> clang++ c2-exo7_main2.cpp -o main 
PS C:\Users\Lenovo> ./main                            
1 nouvelle partie
2 charger
3 options
4 quitter
 votre choix :3
3 options4 quitter
PS C:\Users\Lenovo> 
```