// Pratique1CPlus2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Pratique1CPlus2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;

//Complexe structure
struct complexe { float re_part, im_part; };

//User input to set complexe
static complexe SetComplexe() {
    complexe comp;
    cout << "Entrez numbre re_part de Complexe: \n";
    cin >> comp.re_part;
    cout << "Entrez numbre im_part de Complexe: \n";
    cin >> comp.im_part;

    return comp;
}

//Print sum of two complexe
static void AfficherCompSomme(complexe comp) {
    printf("Somme = %.2f + %.2fi \n", comp.re_part, comp.im_part);
}

//Sum function of two complexe
complexe addComplexe(complexe comp1, complexe comp2) {
    complexe compSomme;
    compSomme.im_part = comp1.im_part + comp2.im_part;
    compSomme.re_part = comp1.re_part + comp2.re_part;

    return compSomme;
}

//Modifie le complexe contenu dans la structure en le multipliant par le réel
complexe multiComplexe(float n, complexe* pcom) {
    complexe pcomModify;
    pcomModify.re_part = pcom->re_part * n;
    pcomModify.im_part = pcom->im_part * n;

    return pcomModify;
}

// Somme des ´éléments de complexe tableau
// complexe tabcomp[];
complexe addComplexeTableau(int numbreEles, complexe tabcomp[]) {
    complexe result = tabcomp[0];
    for (int i = 0; i < numbreEles; i++) {
        result = addComplexe(result, tabcomp[i]);
    }

    return result;
}

int main()
{
    cout << "Pratique 1 Excecice -2, Yang Li et Yongjiang Liu: \n";

    // On considère la structure suivante qui permet d’encoder les nombres complexes :

       // struct complexe { float re_part, im_part; };

   // On demande d’implémenter et de tester les deux fonctions suivantes :

    //a) Une fonction prenant deux structures complexe en argument et retournant(par valeur) une structure complexe contenant la somme des deux nombres complexes;
    complexe comp1, comp2, resultat;

    cout << "Premier complexe numbre: \n";
    comp1 = SetComplexe();
    cout << "Deuxieme complexe numbre: \n";
    comp2 = SetComplexe();
    resultat = addComplexe(comp1, comp2);
    AfficherCompSomme(resultat);

    // b) Une fonction prenant en argument un réel(flottant) ainsi qu’un pointeur sur une structure de type complexe, qui modifie le complexe contenu dans la structure en le multipliant par le réel.
    complexe comp_m, multi_resultat;
    cout << "Entrez complexe numbre pour multipliant par le reel : \n";
    comp_m = SetComplexe();

    multi_resultat = multiComplexe(2, &comp_m);
    cout << "Complexe apres multiple, Complexe re_part: " << multi_resultat.re_part << ", Complexe im_part: " << multi_resultat.im_part << endl;
    // c) En utilisant le code développé dans la partie précédente, ´écrire et tester une fonction prenant en entrée un tableau de structures de type complexe, ainsi que sa taille, et retournant une structure de type complexe correspondant à la somme des ´éléments de ce tableau.
    int numbreEls = 4;
    complexe tabSomme;
    complexe tabComp[4];

    for (int i = 0; i < numbreEls; i++) {
        tabComp[i] = SetComplexe();
    }

    tabSomme = addComplexeTableau(numbreEls, tabComp);
    cout << "Complexe apres add elements de complexe tableau, Complexe re_part: " << tabSomme.re_part << ", Complexe im_part: " << tabSomme.im_part << endl;
}


