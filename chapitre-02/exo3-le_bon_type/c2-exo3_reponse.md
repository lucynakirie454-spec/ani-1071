 pour chacune des valeurs voici le type de base le plus adaper et justifiez par la taille et la plage:

 ```
* un âge = type: unsigned int , taille=4 octets  plage 32; bits
*le nombre d'habitants de la Terre = long long, taille= 8 octets, plage : -9223372036854775808 a 9223372036854775807.
*une température en degrés = float, taille= 4 octets, plage = -3,4*10^38 a 3,4*10^38 6 a 7 chiffres significatifs.
* le caractère tapé au clavier = char , taille= 1 octet plage: -128 a 127;
*le fait qu'une porte soit ouverte = bool , taille : 1 octet,plage: 2 soit vrai soit faux.
* le nombre de pixels d'une image de 4000 × 3000 = int , taille = 4 octets, plage=−2 147483648 a 2 147483648
*un solde bancaire en francs CFA = double , taille 8 octets,plage = -1,7*10^308 a 1,7*10^308.
```
 justification: opération que le type refuse.

 ```
$ un âge = refuse les valeur negative;
$ le nombre d'habitants de la Terre  =  le stcakage d'un plus grand nombre que celui de la plage autorisser
$ une température en degrés = l'utilisation de l'operateur modulo
$ le caractère tapé au clavier = les cahine de caracteres 
$ le fait qu'une porte soit ouverte  =  ici il refuse les division(/), et le modulo(%);
$  le nombre de pixels d'une image de 4000 × 3000  = un nombre au dela de la plage autoriser
$ un solde bancaire en francs CFA = ici c'est le refus de l'usage du modulo(%);
```

