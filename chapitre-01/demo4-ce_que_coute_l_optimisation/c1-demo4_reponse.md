Compilez de mon  programme deux fois tel quel, voici les rendues
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
```
temps mis :
```
PS C:\Users\Lenovo> Measure-Command { clang++ c1-demo2_dessin.cpp -o dessin }               


Days              : 0
Hours             : 0
Minutes           : 0
Seconds           : 0
Milliseconds      : 433
Ticks             : 4333865
TotalDays         : 5,0160474537037E-06
TotalHours        : 0,000120385138888889
TotalMinutes      : 0,00722310833333333
TotalSeconds      : 0,4333865
TotalMilliseconds : 433,3865
```
taille obtenue:
```
PS C:\Users\Lenovo> dir dessin.exe                                                                                                                                
   
   
    Répertoire : C:\Users\Lenovo
                        
                        
Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     14:37          72581 dessin.exe                                                                                                    
``

compilation avec l'obtion  -o2 :
```
PS C:\Users\Lenovo> clang++ -o2 c1-demo2_dessin.cpp -o dessin                    
PS C:\Users\Lenovo> ./dessin
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################

```
temps mis:

```
PS C:\Users\Lenovo> Measure-Command { clang++ -o2 c1-demo2_dessin.cpp -o dessin }


Days              : 0
Hours             : 0
Minutes           : 0
Seconds           : 0
Milliseconds      : 444
Ticks             : 4445698
TotalDays         : 5,1454837962963E-06
TotalHours        : 0,000123491611111111
TotalMinutes      : 0,00740949666666667
TotalSeconds      : 0,4445698
TotalMilliseconds : 444,5698

```
taille obtenue:

```
PS C:\Users\Lenovo> dir dessin.exe                                                                                                                                
   
   
    Répertoire : C:\Users\Lenovo
                        
                        
Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     14:37          72581 dessin.exe                                                                                                     
``` 
comparaison: la taille est  identique  pour les deux executions soit 72581 lenght.
le temps ici il y 'a un changement l'option -o2 a donnee

```
0,444secondes
```
l'execution a donne comme temps:

```
0,43seconde

```

 compilation du programme qui fait un million d'additions:
 ```
 PS C:\Users\Lenovo> clang++ c1-demo4_un_million_de_fois.cpp -o un_million
PS C:\Users\Lenovo> ./un_million
1000000
PS C:\Users\Lenovo> 
```
temps mis 
```
PS C:\Users\Lenovo> Measure-Command { clang++ c1-demo4_un_million_de_foi.cpp -o un_million }
clang++: error: no such file or directory: 'c1-demo4_un_million_de_foi.cpp'
clang++: error: no input files


Days              : 0
Hours             : 0
Minutes           : 0
Seconds           : 0
Milliseconds      : 124
Ticks             : 1246552
TotalDays         : 1,44276851851852E-06
TotalHours        : 3,46264444444444E-05
TotalMinutes      : 0,00207758666666667
TotalSeconds      : 0,1246552
TotalMilliseconds : 124,6552

```
taille obtenue:
```
PS C:\Users\Lenovo> dir un_million.exe


    Répertoire : C:\Users\Lenovo


Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     14:17          72581 un_million.exe                                                                                                 

```

compilation avec l'option -O2
```
PS C:\Users\Lenovo> clang++ -o2  c1-demo4_un_million_de_fois.cpp -o un_million
PS C:\Users\Lenovo> ./un_million
1000000
PS C:\Users\Lenovo> 
```
le temps mis 
```
PS C:\Users\Lenovo> Measure-Command { clang++ -O2 c1-demo4_un_million_de_fois.cpp -o un_million }


Days              : 0
Hours             : 0
Minutes           : 0
Seconds           : 0
Milliseconds      : 710
Ticks             : 7109610
TotalDays         : 8,22871527777778E-06
TotalHours        : 0,000197489166666667
TotalMinutes      : 0,01184935
TotalSeconds      : 0,710961
TotalMilliseconds : 710,961
```
taille :
```
PS C:\Users\Lenovo> dir un_million.exe
    Répertoire : C:\Users\Lenovo

Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     14:17          72581 un_million.exe                                                                                                 


PS C:\Users\Lenovo> clang++ -o2  c1-demo4_un_million_de_fois.cpp -o un_million                   
PS C:\Users\Lenovo> ./un_million
1000000
PS C:\Users\Lenovo> dir un_million.exe


    Répertoire : C:\Users\Lenovo


Mode                 LastWriteTime         Length Name                                                                                                           
----                 -------------         ------ ----                                                                                                           
-a----        21/09/2026     14:21          72581 un_million.exe                                                                                                 
```
taille identiuqe pour les deux executions soit 72581 lenght.
le temps ici il y 'a un changement l'option -o2 a donnee:
```
0,710seconde
```
et la compilation normal a donnee:
```
0,124seconde
```
je peut conclure en disant que L'option -O2 a réduit le temps d'exécution du programme. Dans mon cas, elle n'a pas modifié la taille de l'exécutable. Le résultat produit par le programme est resté le même.

