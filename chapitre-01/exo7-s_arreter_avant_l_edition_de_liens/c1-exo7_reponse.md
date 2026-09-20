 ce qui se passe c'est que fichier refuse de s'ouvrir, on me demande telecharger une application pour l'ouvrir ou de selectionner une autre application, de plus avec bloc note voici le message qui s'affiche: ```
 d†     w         .text           *   T  ~           P`.data               œ              @ 0À.bss                                € 0À.xdata             œ              @ 0@.rdata             ¨              @ @.debug$S        œ   °              @ 0B.pdata             L  X         @ 0@/4                 v                UHƒì0Hl$0è    ÇEü    H
    è    1ÀHƒÄ0]Ã                     
5
RP  bonjour    ñ      
         ‚ <   Ð      V      clang version 22.1.8 (https://github.com/msys2/MINGW-packages 6e4e79c2f86eeb534e324e583f2057dc9fd5ecab)       *                               .text          *      è0VÖ     .data                           .bss                            .xdata                íh­     .rdata                –Ì:"     .debug$S       œ       	ôÏ)     .pdata               ž~¶h                          ÞA¾„     @feat.00    ÿÿ   main            __main                           .file       þÿ  gc1-exo7_main.cpp  !   .llvm_addrsig __mingw_printf ```


de ce fais pour obtenir ce résultat j'ai taper la commande suivante, qui m'a permis de créer le fichier ci dessus ```
PS C:\Users\Lenovo> clang++ -c bonjour.cpp
PS C:\Users\Lenovo>```
puis j'ai taper la commande suivante:``
PS C:\Users\Lenovo> dir bonjour.*`` et voici le resultat obtenue ```


    Répertoire : C:\Users\Lenovo


Mode                 LastWriteTime         Length Name                                                                                                            
----                 -------------         ------ ----                                                                                                            
-a----        18/09/2026     15:14             75 bonjour.cpp                                                                                                     
-a----        20/09/2026     01:54           1060 bonjour.o ```            


ce qui m'amène a conclure que 
le fichier objet est plus gros que le fichier  source, il contient 1060octets qui sont supérieure a 75 octets qui représente mon fichier source.



