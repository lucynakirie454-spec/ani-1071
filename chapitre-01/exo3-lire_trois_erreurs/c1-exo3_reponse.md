PS C:\Users\Lenovo> clang++ c1-exo3_main.cpp -o programme
PS C:\Users\Lenovo> ./programme
mengue kerine
 yaounde
PS C:\Users\Lenovo> 

ERREUR 1-POINT VIRGULE MANQUANT MESSAGE EXACTE:
c1-exo3_main.cpp:4:26: error: expected ';' after expression
LIGEN signaler par la machine ligne 4;
colonne signaler par la machine colonne 26
mais la ligne ou se trouve reelement la faute  est la ligne 4,colonne 26,manque d'un point virgule.
    4 | printf("mengue kerine\n")
    ETAPE DE LA MACHINE AYANT PARLER LE COMPILATEUR clang++

ERREUR 2-Printf au lieu de printf MESSAGE EXACTE:
c1-exo3_main.cpp:4:1: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
LIGNE DE L'ERREUR SIGNALER LIGNE 4, colonne 1;
mais la ligne ou se trouve reellement la faute  est la ligne 4 et la colonne 1,car j'ai mis printf avec un P majuscule.
    4 | Printf("mengue kerine\n");
      | ^~~~~~
      | printf
C:/msys64/ucrt64/include/stdio.h:300:5: note: 'printf' declared here
  300 | int printf (const char *__format, ...)
      |     ^
1 error generated.
ETAPE DE LA MACHINE AYANT PARLER LE COMPILATEUR clang++


ERREUR 3-retirer la ligne #include <cstdio> MESSAGE EXACTE:
c1-exo3_main.cpp:4:1: error: use of undeclared identifier 'printf'
LIGNE DE L'ERREUR , LIGNE 4 ET LIGNE 5.
mais la ligne ou se trouve reelement la faute  est la ligne #<include <cstdio>
    4 | printf("mengue kerine\n");
      | ^~~~~~
c1-exo3_main.cpp:5:1: error: use of undeclared identifier 'printf'
    5 | printf(" yaounde");
      | ^~~~~~
2 errors generated.
ETAPE DE LA MACHINE AYANT PARLER LE COMPILATEUR clang++


