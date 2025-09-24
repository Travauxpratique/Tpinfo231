# Projet 231 : Opérations sur Tableaux

## Description

Ce TP regroupe plusieurs algorithmes classiques et opérations sur les tableaux.  
L’utilisateur interagit via un menu et peut choisir parmi différentes fonctionnalités : somme de matrices, produit de matrices, recherche séquentielle, médiane, inversion de tableau, test de tri, etc.

---

## Organisation des fichiers

- `fichier.h` → fichier d’en-tête qui contient toutes les déclarations des fonctions.  
- `fichier.c` → fichier source qui contient l’implémentation des fonctions.  
- `main.c` → programme principal qui propose un **menu interactif** pour tester les fonctions.  
- `Makefile` → évite de retaper des commandes compliquées, ne recompile que le nécessaire.

---

## Fonctionnalités disponibles

| Opération                       | Description                                    | Complexité      |
|---------------------------------|-----------------------------------------------|----------------|
| Somme de matrices                | Additionne deux matrices de même taille      | O(n×m)         |
| Produit de matrices              | Multiplie deux matrices (colonnes A = lignes B) | O(n×m×p)     |
| Recherche séquentielle           | Recherche un élément dans un tableau          | O(n)           |
| Produit a × b avec +1            | Multiplication par additions successives      | O(a×b)         |
| Tester si un tableau est trié    | Vérifie si un tableau est croissant           | O(n)           |
| Médiane d’un tableau             | Trie une copie et retourne la médiane         | O(n²)          |
| Inverser un tableau              | Inverse les éléments du tableau               | O(n)           |
| Produit vectoriel (3D)           | Calcule le produit vectoriel de deux vecteurs | O(1)           |
| Produit vecteur × matrice        | Multiplie un vecteur par une matrice          | O(n×m)         |
| Quitter                          | Sort du programme                              | -              |

---

## Compilation et exécution

### 1. Compilation
Si tu compiles manuellement :
```bash
gcc main.c fichier.c -o programme ou make et ./main
 
  
