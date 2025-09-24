#ifndef FICHIER_H
#define FICHIER_H

// 1. Somme de matrices
void sommeMatrices(int A[10][10], int B[10][10], int res[10][10], int n, int m);

// 2. Produit de matrices
void produitMatrices(int A[10][10], int B[10][10], int res[10][10], int n, int m, int p);

// 3. Recherche séquentielle
int rechercheSeq(int tab[], int n, int val);

// 4. a × b avec +1 uniquement
int produitPlusUn(int a, int b);

// 5. Tester si un tableau est trié
int estTrie(int tab[], int n);

// 6. Médian d’un tableau
float mediane(int tab[], int n);

// 7. Inverser un tableau
void inverserTableau(int tab[], int n);

// 8. Produit vectoriel (vecteurs 3D)
void produitVectoriel(int u[3], int v[3], int res[3]);

// 9. Produit vecteur × matrice
void produitVecteurMatrice(int vec[], int mat[10][10], int res[], int n, int m);

#endif
