resultat de la compilation du programme 
```
PS C:\Users\Lenovo> clang++ c1-demo1_test.cpp -o test
PS C:\Users\Lenovo> ./test
PS C:\Users\Lenovo> 
```
 apres supression de .cpp le programme s'execute toujours et voici le rendu
 ```
 PS C:\Users\Lenovo> rm c1-demo1_test.cpp
PS C:\Users\Lenovo> ./test
PS C:\Users\Lenovo> 
```
l'explication en 5 ligne est la suivante:
Le fichier .cpp contient le code que j'ai écris.
La compilation transforme ce code en un fichier exécutable.
L'exécutable contient déjà tout ce qu'il faut pour fonctionner.
Donc, même si le fichier .cpp est supprimé, l'exécutable continue de marcher.
Cela montre qu'on peut donner un programme à quelqu'un sans lui donner le code qui a servi à le créer, parce que le programme fonctionne grace a l'executable et non grace a son  fichier.cpp
