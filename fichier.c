#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

// 1. Somme de matrices
void sommeMatrices(int A[10][10], int B[10][10], int res[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
}

// 2. Produit de matrices
void produitMatrices(int A[10][10], int B[10][10], int res[10][10], int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            res[i][j] = 0;
            for (int k = 0; k < m; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// 3. Recherche séquentielle
int rechercheSeq(int tab[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (tab[i] == val) {
            return i;
        }
    }
    return -1;
}

// 4. a × b avec +1 uniquement
int produitPlusUn(int a, int b) {
    int res = 0;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            res += 1;
        }
    }
    return res;
}

// 5. Tester si un tableau est trié
int estTrie(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return 0;
        }
    }
    return 1;
}

// 6. Médiane 
float mediane(int tab[], int n) {
    // Créer une copie pour ne pas modifier le tableau original
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = tab[i];
    }
    
    // Tri simple par sélection
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp[i] > temp[j]) {
                int tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }
    
    if (n % 2 == 0) {
        return (temp[n/2 - 1] + temp[n/2]) / 2.0;
    } else {
        return temp[n/2];
    }
}

// 7. Inverser un tableau
void inverserTableau(int tab[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }
}

// 8. Produit vectoriel (u,v en 3D)
void produitVectoriel(int u[3], int v[3], int res[3]) {
    res[0] = u[1] * v[2] - u[2] * v[1];
    res[1] = u[2] * v[0] - u[0] * v[2];
    res[2] = u[0] * v[1] - u[1] * v[0];
}

// 9. Produit vecteur × matrice
void produitVecteurMatrice(int vec[], int mat[10][10], int res[], int n, int m) {
    for (int j = 0; j < m; j++) {
        res[j] = 0;
        for (int i = 0; i < n; i++) {
            res[j] += vec[i] * mat[i][j];
        }
    }
}