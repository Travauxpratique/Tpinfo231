// somme matrice
Procédure sommeMatrices(A, B, C, n, m)
Début
    Pour i de 1 à n faire
        Pour j de 1 à m faire
            C[i][j] ← A[i][j] + B[i][j]
        Fin Pour
    Fin Pour
Fin
// produit matrice
Procédure produitMatrices(A, B, C, n, m, q)
Début
    Pour i de 0 à n-1 faire
        Pour j de 0 à q-1 faire
            C[i][j] ← 0
            Pour k de 0 à m-1 faire
                C[i][j] ← C[i][j] + A[i][k] * B[k][j]
            Fin Pour
        Fin Pour
    Fin Pour
Fin

// recherche sequentiel
Fonction rechercheSeq(tab, taille, x) : Entier
Début
    Pour i de 1 à taille faire
        Si tab[i] = x alors
            Retourner i
        Fin Si
    Fin Pour
    Retourner -1
Fin

// produit a*b
Fonction produitPlusUn(a, b) : Entier
Début
    Entier resultat ← 0
    Pour i de 1 à b faire
        resultat ← resultat + a
    Fin Pour
    Retourner resultat
Fin

// tester si un tableau est trier
Fonction estTrie(tab, taille) : Booléen
Début
    Pour i de 0 à taille-2 faire
        Si tab[i] > tab[i+1] alors
            Retourner Faux
        Fin Si
    Fin Pour
    Retourner Vrai
Fin

 //mediane
Fonction mediane(tab, taille) : Réel
Début
    TrierTableau(tab, taille)
    
    Si taille mod 2 = 1 alors
        Retourner tab[taille div 2]
    Sinon
        Retourner (tab[taille div 2 - 1] + tab[taille div 2]) / 2.0
    Fin Si
Fin

// inverser les elements d`un tableau
Procédure inverserTableau(tab, taille)
Début
    Pour i de 0 à (taille div 2) - 1 faire
        Entier temp ← tab[i]
        tab[i] ← tab[taille-1-i]
        tab[taille-1-i] ← temp
    Fin Pour
Fin

// produit vectoriel
Procédure produitVectoriel(u, v, w)
Début
    w[0] ← u[1]*v[2] - u[2]*v[1]
    w[1] ← u[2]*v[0] - u[0]*v[2]
    w[2] ← u[0]*v[1] - u[1]*v[0]
Fin

// produit vectoriel * matrice
Procédure produitVecteurMatrice(vec, mat, res, n, m)
Début
    Pour j de 0 à m-1 faire
        res[j] ← 0
        Pour i de 0 à n-1 faire
            res[j] ← res[j] + vec[i] * mat[i][j]
        Fin Pour
    Fin Pour
Fin