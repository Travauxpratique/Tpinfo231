#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fichier.h"

int main() {
    int choix;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Somme de matrices\n");
        printf("2. Produit de matrices\n");
        printf("3. Recherche séquentielle\n");
        printf("4. Produit a*b avec +1\n");
        printf("5. Tester si tableau trié\n");
        printf("6. Médiane\n");
        printf("7. Inverser tableau\n");
        printf("8. Produit vectoriel\n");
        printf("9. Produit vecteur * matrice\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: { // Somme de matrices
                int n, m;
                printf("Entrez le nombre de lignes de la matrice : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonnes de la matrice : ");
                scanf("%d", &m);

                int A[n][m], B[n][m], C[n][m];

                printf("Saisie de la matrice A :\n");
                for(int i = 0; i < n; i++)
                    for(int j = 0; j < m; j++) {
                        printf("A[%d][%d] = ", i, j);
                        scanf("%d", &A[i][j]);
                    }

                printf("Saisie de la matrice B :\n");
                for(int i = 0; i < n; i++)
                    for(int j = 0; j < m; j++) {
                        printf("B[%d][%d] = ", i, j);
                        scanf("%d", &B[i][j]);
                    }

                sommeMatrices(A, B, C, n, m);

                printf("Resultat C = A + B :\n");
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < m; j++)
                        printf("%d ", C[i][j]);
                    printf("\n");
                }
                break;
            }

            case 2: { // Produit de matrices
                int n, m, p, q;
                printf("Entrez le nombre de lignes de A : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonnes de A : ");
                scanf("%d", &m);

                printf("Entrez le nombre de lignes de B : ");
                scanf("%d", &p);
                printf("Entrez le nombre de colonnes de B : ");
                scanf("%d", &q);

                if(m != p) {
                    printf("Erreur : nombre de colonnes de A != nombre de lignes de B\n");
                    break;
                }

                int A[n][m], B[p][q], C[n][q];

                printf("Saisie de la matrice A :\n");
                for(int i = 0; i < n; i++)
                    for(int j = 0; j < m; j++) {
                        printf("A[%d][%d] = ", i, j);
                        scanf("%d", &A[i][j]);
                    }

                printf("Saisie de la matrice B :\n");
                for(int i = 0; i < p; i++)
                    for(int j = 0; j < q; j++) {
                        printf("B[%d][%d] = ", i, j);
                        scanf("%d", &B[i][j]);
                    }

                produitMatrices(A, B, C, n, m, q);

                printf("Resultat C = A * B :\n");
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < q; j++)
                        printf("%d ", C[i][j]);
                    printf("\n");
                }
                break;
            }

            case 3: { // Recherche séquentielle
                int taille;
                printf("Entrez la taille du tableau : ");
                scanf("%d", &taille);

                int tab[taille];
                printf("Entrez les elements du tableau :\n");
                for(int i = 0; i < taille; i++) {
                    printf("tab[%d] = ", i);
                    scanf("%d", &tab[i]);
                }

                int x;
                printf("Entrez l'element a rechercher : ");
                scanf("%d", &x);

                int pos = rechercheSeq(tab, taille, x);
                if(pos != -1) printf("Trouve a la position %d\n", pos);
                else printf("Non trouve\n");
                break;
            }

            case 4: { // Produit a*b avec +1
                int a, b;
                printf("Entrez a : ");
                scanf("%d", &a);
                printf("Entrez b : ");
                scanf("%d", &b);
                printf("Resultat = %d\n", produitPlusUn(a, b));
                break;
            }

            case 5: { // Tester si tableau trié
                int taille;
                printf("Entrez la taille du tableau : ");
                scanf("%d", &taille);

                int tab[taille];
                printf("Entrez les elements du tableau :\n");
                for(int i = 0; i < taille; i++) {
                    printf("tab[%d] = ", i);
                    scanf("%d", &tab[i]);
                }

                printf("%s\n", estTrie(tab, taille) ? "Trie" : "Non trie");
                break;
            }

            case 6: { // Médiane
                int taille;
                printf("Entrez la taille du tableau : ");
                scanf("%d", &taille);

                int tab[taille];
                printf("Entrez les elements du tableau :\n");
                for(int i = 0; i < taille; i++) {
                    printf("tab[%d] = ", i);
                    scanf("%d", &tab[i]);
                }

                printf("Mediane = %.2f\n", mediane(tab, taille));
                break;
            }

            case 7: { // Inverser tableau
                int taille;
                printf("Entrez la taille du tableau : ");
                scanf("%d", &taille);

                int tab[taille];
                printf("Entrez les elements du tableau :\n");
                for(int i = 0; i < taille; i++) {
                    printf("tab[%d] = ", i);
                    scanf("%d", &tab[i]);
                }

                inverserTableau(tab, taille);

                printf("Tableau inverse : ");
                for(int i = 0; i < taille; i++) printf("%d ", tab[i]);
                printf("\n");
                break;
            }

            case 8: { // Produit vectoriel
                int u[3], v[3], w[3];
                printf("Entrez les 3 composantes du vecteur u :\n");
                for(int i = 0; i < 3; i++) scanf("%d", &u[i]);

                printf("Entrez les 3 composantes du vecteur v :\n");
                for(int i = 0; i < 3; i++) scanf("%d", &v[i]);

                produitVectoriel(u, v, w);

                printf("Produit vectoriel u x v = (%d, %d, %d)\n", w[0], w[1], w[2]);
                break;
            }

            case 9: { // Produit vecteur * matrice
                int n, m;
                printf("Entrez la taille du vecteur : ");
                scanf("%d", &n);
                printf("Entrez le nombre de colonnes de la matrice : ");
                scanf("%d", &m);

                int vec[n], mat[n][m], res[m];

                printf("Entrez les elements du vecteur :\n");
                for(int i = 0; i < n; i++) scanf("%d", &vec[i]);

                printf("Entrez les elements de la matrice :\n");
                for(int i = 0; i < n; i++)
                    for(int j = 0; j < m; j++)
                        scanf("%d", &mat[i][j]);

                produitVecteurMatrice(vec, mat, res, n, m);

                printf("Resultat du produit : ");
                for(int j = 0; j < m; j++) printf("%d ", res[j]);
                printf("\n");
                break;
            }

            case 0:
                printf("Fin du programme.\n");
                break;

            default:
                printf("Choix invalide, veuillez reessayer.\n");
        }

    } while(choix != 0);

    return 0;
}
