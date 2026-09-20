la compilation avec clang++ a donner le rendu suivant :
```
PS C:\Users\Lenovo> clang++ c1-demo2_dessin.cpp -o dessin 
PS C:\Users\Lenovo> ./dessin
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################
PS C:\Users\Lenovo> 
```
 et la compilation avec g++ a donnee le resultat suivant:
```
PS C:\Users\Lenovo> g++ c1-demo2_dessin.cpp -o dessin_gcc
PS C:\Users\Lenovo> ./dessin_gcc                         
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################
PS C:\Users\Lenovo> 
```
 comparaison de la tailles des deux executables
 pour dessin_gcc sa taille est de
 ```
  73661 dessin_gcc.exe  
  ```
tant dis que pour dessin sa taille est de :
 ```                                                                                                   
73661 dessin.exe 
  ```
  donc les deux on meme taille 
  conclusion le langage c++ garantie que le resultat demander dan le programme s'affiche et ceux peut importe le compilateur utiliser, par contre ce qu'il ne garanti pas c'est la maniere dont le compilateur procede pour afficher le meme resultat.
