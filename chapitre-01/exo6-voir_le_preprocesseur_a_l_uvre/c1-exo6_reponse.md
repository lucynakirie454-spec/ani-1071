mon programme bonjour.cpp contient belle et bien 6 ligne mais apres execution avec la commande clang++ -E bonjour.cpp et clang++ -E bonjour.cpp > sortie.txt , le fichier sorti.txt contient precisement 2033 lignes 
je peut dire que cela s'explique par le prepocesseur qui joue un role preparateur de contenue, donc lui il se charge juste de charger le fichier qui sera compiler par le compilateur.
