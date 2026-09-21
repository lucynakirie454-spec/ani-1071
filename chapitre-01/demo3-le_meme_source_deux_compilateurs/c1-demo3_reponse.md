
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
 pour dessin_gcc la commande utiliser et la taille sont les suivante:
 ```
 PS C:\Users\Lenovo> dir dessin_gcc.exe                   


    Répertoire : C:\Users\Lenovo


Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     08:42          73661 dessin_gcc.exe                                                                                                 
   
  ```
tant dis que pour dessin sa taille et sa commande utiliser sont :
 ```                                                                                                   
PS C:\Users\Lenovo>  dir dessin.exe                  
    Répertoire : C:\Users\Lenovo


Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     08:38          73661 dessin.exe                                                                                                     

  ```
  donc les deux on meme taille 
  conclusion le langage c++ garantie que le resultat demander dan le rpogramme s'affiche et ceux peut importe le compilateur utiliser, par contre ce qu'il ne garanti pas c'est la maniere dont le compilateur procede pour afficher le meme resultar.

  apres avoir taper la commande  Get-FileHash dessin_gcc.exe,j'ai obtenue :
  ```
  PS C:\Users\Lenovo> Get-FileHash dessin_gcc.exe

Algorithm       Hash                                                                   Path                                                                      
---------       ----                                                                   ----                                                                      
SHA256          AC73B83A02434DA96618C9B0A30BD963E498D3DE0B94FF480F54A9B5C622A6BE       C:\Users\Lenovo\dessin_gcc.exe                                            
```
 de meme apres avoir taper la commande Get-FileHash dessin.exe j'ai obtenu comme rendu :
 ```
 PS C:\Users\Lenovo> Get-FileHash dessin.exe

Algorithm       Hash                                                                   Path                                                                      
---------       ----                                                                   ----                                                                      
SHA256          F4F6FDCAC091DC5CC51D4162FAEDF0AD9094AC7D9CB8D530DB35C6C436D58A89       C:\Users\Lenovo\dessin.exe     
```
cela montre que les compilateur differait pour le meme proramme
