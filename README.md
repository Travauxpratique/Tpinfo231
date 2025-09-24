                     Projet 231 : Opérations sur Tableaux 

##  Description

Ce TP regroupe plusieurs algorithmes classiques et operations sur les tableaux.  
L’utilisateur interagit via un menu et peut choisir parmi différentes fonctionnalités : somme de matrices, produit de matrices, recherche séquentielle, médiane, Inversion de tableau , tableau trier...  


##  Organisation des fichiers
- `fichier.h` → fichier d’en-tête qui contient toutes les déclarations des fonctions.  
- `fichier.c` → fichier source qui contient l’implémentation des fonctions.  
- `main.c` → programme principal qui propose un **menu interactif** pour tester les fonctions.  
- `Makefile` -> Il évite de retaper des commandes compliquées, ne recompile que le nécessaire.
---

##  Fonctionnalités disponibles
Le menu propose les opérations suivantes :  

1. **Somme de matrices**  
   - Additionne deux matrices de même taille.  

2. **Produit de matrices**  
   - Multiplie deux matrices (si le nombre de colonnes de A = nombre de lignes de B).  

3. **Recherche séquentielle**  
   - Recherche un élément dans un tableau (retourne sa position ou indique s’il n’existe pas).  

4. **Produit `a × b` en utilisant uniquement `+1`**  
   - Simule la multiplication par additions successives en utilisant uniquement +1 .  

5. **Tester si un tableau est trié**  
   - Vérifie si un tableau est croissant.  

6. **Médiane d’un tableau**  
   - Trie une copie du tableau et retourne la médiane.  

7. **Inverser un tableau**  
   - Inverse les éléments du tableau.  

8. **Produit vectoriel**  
   - Calcule le produit vectoriel entre deux vecteurs 3D.  

9. **Produit vecteur × matrice**  
   - Multiplie un vecteur par une matrice.  

0. **Quitter**  

---

##  Compilation et exécution

### 1. Compilation
```bash
gcc main.c fichier.c -o programme
    ou
make clean
make
./main
