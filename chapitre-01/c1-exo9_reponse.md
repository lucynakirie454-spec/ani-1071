
    EXECUTION DU CODE EN ENLEVANT TOUS LES POINT VIRGULE ET VOICI LES DIFFERENTE ERREURS APPARUENT :

[c1-exo9_test_main.cpp:2:15: error: expected ';' after top level declarator
    2 | int calculer()
      |               ^
c1-exo9_test_main.cpp:5:46: error: expected ';' after expression
    5 | printf("Appel de calculer: %d\n", calculer())
      |                                              ^
      |                                              ;
c1-exo9_test_main.cpp:6:13: error: expected ';' after return statement
    6 |     return 0
      |             ^
3 errors generated.]

           LE NOMBRE DE MESSAGE D'ERREURS EST DE 3 ERRUERS.

APRES AVOIR REMIS LE PREMIER POINT VIRGULE ON SE RETROUVE AVEC DEUX ERREURS
SUR LA LIGNE 5 LA COLONNE 19 ET LA LIGNE 7 LA COLONNE 10.

[c1-exo9_test_main.cpp:5:46: error: expected ';' after expression
    5 | printf("Appel de calculer: %d\n", calculer())
      |                                              ^
      |                                              ;
c1-exo9_test_main.cpp:6:13: error: expected ';' after return statement
    6 |     return 0
      |             ^
      |             ;
2 errors generated.]
