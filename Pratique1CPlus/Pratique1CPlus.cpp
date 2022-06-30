// Pratique1CPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int a;
static int b;
char* pstr;
// Série - 4 -
//Using Array to make string copy
char* mon_strcpy(char destination[], char source[]) {
    int index = 0;
    while (source[index] != '\0') {
        destination[index] = source[index]; index++;
    }
    destination[index] = '\0'; return destination;
}
//Using pointer to make string copy
char* mon_strcopy(char* pdes, char* psou) {
    int index = 0;
    while (*(psou+index) != '\0') {
        *(pdes + index) = *(psou + index); index++;
    }
    *(pdes + index) = '\0'; return pdes;
}

int main()
{
    cout << "Travail Pratique 1 Group Yang Li et Yongjiang Liu...\n";

    /*
    Exercice -1- Le but de cet exercice est d’écrire une série d’instructions reliées à la notion de pointeurs. 
    Pour chaque instruction vous devez nous expliquer ce qui se produit dans l’arrière-scène.
    Si l’instruction à écrire provoque une erreur lors de la compilation ou l’exécution du programme, 
    expliquez l’erreur et dites comment faudra-t-il la corriger. Il ne vous est pas demandé de remettre un programme pour cet exercice.
    Ceci écrit, vous pouvez quand même vous aider en écrivant un programme. Les questions sont reliées et se suivent. 
    Les séries sont indépendantes mais nous vous conseillons de les faire dans l’ordre.
    */
    cout << "\Exercice -1-\n" << endl;

    // Série - 1 -
    cout << "\nSérie - 1 -\n" << endl;
        // Q1 - Déclarez les deux pointeurs « ptrx » et « ptry » qui pointent des valeurs du type « int ».

    int *ptrx;         
    int* ptry;
    /*
    Déclare qu'un pointeur de type int peut pointer sur une variable de type int.
    */

        // Q2 - Déclarez la variable « varx » du type « int » sans l’initialiser et faites en sorte que « ptrx » pointe cette variable.

    int varx;
    ptrx = &varx;
    cout << "Valeur de local int varx non initialise: " << varx << endl;
    cout << "Valeur de *trpx pointeur dereferencez: " << *ptrx << endl;
    cout << "Address de varx: " << &varx << endl;
    cout << "Address valeur par poiteur ptrx: " << ptrx << endl;
    cout << "Global int Valeur de a: " << a << endl;
    cout << "Static int Valeur de b: " << b << endl;
    /*
    Un pointeur int déclaré peut représenter une variable int en marquant l'adresse de la variable int.
    
    Une variable int qui n'est pas initialisée et assignée, sa valeur est une valeur aléatoire. 
    Lorsque les variables int globales et les variables int statiques ne sont pas initialisées et affectées, 
    la valeur est automatiquement 0.
    */

        
        // Q3 - Déréférencez le pointeur « ptry » pour qu’il contient la valeur « 53 ».

    int y = 53;
    ptry = &y;
    cout << "Valeur de *ptry: " << *ptry << endl;

    /*
    Pour la variable y initialement affectée, la valeur est 53. 
    On peut déréférencerz cette variable en pointant le pointeur ptry sur cette adresse.
    Mais nous ne pouvons pas affecter directement une valeur à ptry sans affectation initialisée (*ptry = 53), 
    donc le système signalera une erreur. Comme l'adresse de la valeur 53 n'existe pas encore dans le système, 
    le pointeur ne sait pas où il doit pointer.
    */
    
        // Q4 - Assignez « ptrx » à « ptry ».
    ptrx = ptry;
    cout << "Valeur de *ptrx: " << *ptrx << endl;
    cout << "Address de pointeur ptrx pointer: " << ptrx << endl;
    cout << "Address de pointeur ptry pointer: " << ptry << endl;

    /*
    Affecter le pointeur ptrx à ptry signifie que les deux pointeurs ptrx et ptry pointent vers la même adresse, 
    mais leurs propres adresses sont différentes (représentant des pointeurs différents).
    */
        // Q5 - Déréférencez le pointeur « ptry » pour qu’il contient la valeur « 99 ».
    *ptry = 99;
    cout << "Valeur de *ptry: " << *ptry << endl;

        // Q6 - Quel est la valeur pointée par « ptrx » ?
    cout << "Valeur de *ptrx: " << *ptrx << endl;

    /*
    Le dereferencez ptry pointe vers la valeur 99, ce qui signifie que la valeur stockée dans l'adresse modifiée est passée de 53 à 99.
    De même, la valeur pointée par le pointeur ptrx passera également à 99.
    */
    
        // Q7 - À l’aide de votre programme de test, indiquez la valeur des adresses mémoires associées aux variables « ptrx », « ptry » et « varx ».
    cout << "Address de ptrx: " << &ptrx << endl;
    cout << "Address de ptry: " << &ptry << endl;
    cout << "Address de varx: " << &varx << endl;

    /*
    Les valeurs des adresses mémoire associées aux variables "ptrx", "ptry" et "varx" sont différentes.
    */
    
        // Q8 - Affichez la valeur contenue dans les variables « ptrx » et « ptry ». (Attention, il ne s’agit pas de déréférencer les pointeurs).
    cout << "la valeur contenue dans les variables ptrx: " << ptrx << endl;
    cout << "la valeur contenue dans les variables ptry: " << ptry << endl;

    /*
    La valeur contenue dans les variables ptrx et ptry est l'adresse vers laquelle elles pointent (elle n'a rien à voir avec la valeur 99 de referencez,
    mais représente l'adresse de stockage de cette valeur)
    */
    // Série - 2 -
    cout << "\nSérie - 2 -\n" << endl;
        // Q9 - Déclarez deux pointeurs « ptra » et « ptrb » qui pointent des valeurs du type « int ».
    int* ptra;
    int* ptrb;

        // Q10 - Faites en sorte que pour chaque pointeur « ptra » et « ptrb » il lui soit alloué une zone mémoire permettant de contenir un seul élément du type « int ».
    int a, b;
    ptra = &a;
    ptrb = &b;
    cout << "Address de ptra dans zone memoire pour contenir seul element int est: " << ptra << endl;
    cout << "Address de ptrb dans zone memoire pour contenir seul element int est: " << ptrb << endl;

    /*
    Pointez les pointeurs ptra et ptrb vers les variables à valeur unique int déclarées a, b, 
    afin qu'ils obtiennent l'adresse de stockage de la variable comme valeur, 
    et obtiennent également l'adresse où la valeur de l'adresse est stockée.
    */
        // Q11 - Déréférencez les pointeurs « ptra » et « ptrb » pour permettre de stocker respectivement les valeurs « 5 » et « 6 ».
    *ptra = 5;
    *ptrb = 6;
    cout << "Valeur de *ptra: " << *ptra << endl;
    cout << "Valeur de *ptrb: " << *ptrb << endl;
    cout << "Valeur de a: " << a << endl;
    cout << "Valeur de b: " << b << endl;

    /*
    Déréférencez les pointeurs « ptra » et « ptrb » pour permettre de stocker respectivement les valeurs « 5 » et « 6 », 
    En même temps, il est également affecté aux variables int a et b.
    */

    // Série - 3 -
    cout << "\nSérie - 3 -\n" << endl;
        // Q12 - Soit le fragment de code suivant :
    
    int untab[] = { 5, 19, 14, 8, -10, 99 };
    int* unptr;
    
         // Q12 - Initialisez de deux manières différentes le pointeur « unptr » avec le premier élément du tableau.
    unptr = untab;   // unptr = tab[0];
   // cout << "Valeur de *unptr: " << *unptr << endl;
         
         // Q13 - Expliquez pourquoi cette instruction est incorrecte ? untab = unptr;

    /*
    1. En c++, les adresses de toutes les variables ne peuvent pas être modifiées. 
    Une fois la variable définie, lorsqu'elle est utilisée pour la première fois, 
    le système lui allouera une partie de la mémoire et elle ne changera pas tant qu'elle ne mourra pas.

    2. Il n'y a pas d'affectation initiale du pointeur, unptr n'a pas de valeur disponible.

    3. Inversement, nous pouvons attribuer la valeur d'adresse untab de la table au pointeur.(Q12)
    */
        // Q14 - Expliquez le fragment de code suivant et que va - t - il s’afficher en sortie ?

    /*
    for (int i = 0; i < 6; i++) {
        cout << "untab[" << i << "] = " << untab[i] << endl; // ligne –A-
        cout << "unptr+" << i << " = " << *(unptr + i) << endl; // ligne –B-
    }
    */

    /*
    1. ligne –A-: Il affichera les données de la table untab dans l'ordre selon l'index (0-5) (manière conventionnelle);
    2. ligne –B-: Il sortira la première variable de table pointée par le pointeur (c'est-à-dire index0), 
    puis le pointeur se déplacera à l'adresse suivante (index1), jusqu'à la dernière adresse, 
    et sortira la valeur de table à son tour.
    */
    

        // Q15 - Si vous permutez la ligne « - B » par ce qui suit, le fragment de code sera - t - il correct ? Si oui, que va - t - il s’afficher en sortie ?
   /*
    for (int i = 0; i < 6; i++) {
        cout << "\nunptr+" << i << " = " << *unptr++ << endl; // ligne –B-
    }
   */


    /*
    Cette méthode est correcte, cela signifie qu'à partir de la première position du pointeur, 
    chaque cycle sort la première valeur d'adresse pointée par le pointeur (à partir de l'index0), 
    et chaque fois que le pointeur de boucle passe à l'adresse suivante (0-> 1->2...).
    */

        // Q16 - Si vous permutez la ligne « - B » par ce qui suit, le fragment de code sera - t - il correct ? Si oui, que va - t - il s’afficher en sortie ?
    /*

    for (int i = 0; i < 6; i++) {
        cout << "\nunptr+" << i << " = " << *(++unptr) << endl; // ligne –B-
    }
     */
   
    /*
    Cette méthode est incorrecte. Le pointeur *(++unptr) affichera la valeur de la table à partir de la deuxième adresse 
    (index1, la valeur est 19), et à la fin dépassera l'adresse de la table, pointera vers une nouvelle adresse inconnue 
    et obtiendra une valeur aléatoire.
    La première valeur (index0, 5) ne s'imprimera pas.
    */

    // Série - 4 -
    cout << "\nSérie - 4 -\n" << endl;
        // Le langage « C » et donc par extension le langage « C++ » dispose de la fonction « strcpy » permettant de copier une chaîne dans une autre.Soit le fragment de code suivant qui représente une version de cette fonction :

        // La fonction suppose que la destination a assez d’espace pour contenir la chaîne source.Récrivez cette fonction en n’utilisant que les pointeurs.Il ne doit y avoir aucune référence aux tableaux.La signature d’une telle fonction est comme suit :

    //char* mon_strcpy(char destination*, char source*);
    char str1[] = "This is string1";
    char str2[] = "This is String2";
    //const char* str1 = "This is string1";
    //const char* str2 = "This is String2";

    //mon_strcpy(str1, str2);
    mon_strcopy(str1, str2);
    cout << str1 << endl;
}


