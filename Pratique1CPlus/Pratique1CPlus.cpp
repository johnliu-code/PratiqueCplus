// Pratique1CPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int a;
static int b;
char* pstr;
// S�rie - 4 -
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
    Exercice -1- Le but de cet exercice est d��crire une s�rie d�instructions reli�es � la notion de pointeurs. 
    Pour chaque instruction vous devez nous expliquer ce qui se produit dans l�arri�re-sc�ne.
    Si l�instruction � �crire provoque une erreur lors de la compilation ou l�ex�cution du programme, 
    expliquez l�erreur et dites comment faudra-t-il la corriger. Il ne vous est pas demand� de remettre un programme pour cet exercice.
    Ceci �crit, vous pouvez quand m�me vous aider en �crivant un programme. Les questions sont reli�es et se suivent. 
    Les s�ries sont ind�pendantes mais nous vous conseillons de les faire dans l�ordre.
    */
    cout << "\Exercice -1-\n" << endl;

    // S�rie - 1 -
    cout << "\nS�rie - 1 -\n" << endl;
        // Q1 - D�clarez les deux pointeurs � ptrx � et � ptry � qui pointent des valeurs du type � int �.

    int *ptrx;         
    int* ptry;
    /*
    D�clare qu'un pointeur de type int peut pointer sur une variable de type int.
    */

        // Q2 - D�clarez la variable � varx � du type � int � sans l�initialiser et faites en sorte que � ptrx � pointe cette variable.

    int varx;
    ptrx = &varx;
    cout << "Valeur de local int varx non initialise: " << varx << endl;
    cout << "Valeur de *trpx pointeur dereferencez: " << *ptrx << endl;
    cout << "Address de varx: " << &varx << endl;
    cout << "Address valeur par poiteur ptrx: " << ptrx << endl;
    cout << "Global int Valeur de a: " << a << endl;
    cout << "Static int Valeur de b: " << b << endl;
    /*
    Un pointeur int d�clar� peut repr�senter une variable int en marquant l'adresse de la variable int.
    
    Une variable int qui n'est pas initialis�e et assign�e, sa valeur est une valeur al�atoire. 
    Lorsque les variables int globales et les variables int statiques ne sont pas initialis�es et affect�es, 
    la valeur est automatiquement 0.
    */

        
        // Q3 - D�r�f�rencez le pointeur � ptry � pour qu�il contient la valeur � 53 �.

    int y = 53;
    ptry = &y;
    cout << "Valeur de *ptry: " << *ptry << endl;

    /*
    Pour la variable y initialement affect�e, la valeur est 53. 
    On peut d�r�f�rencerz cette variable en pointant le pointeur ptry sur cette adresse.
    Mais nous ne pouvons pas affecter directement une valeur � ptry sans affectation initialis�e (*ptry = 53), 
    donc le syst�me signalera une erreur. Comme l'adresse de la valeur 53 n'existe pas encore dans le syst�me, 
    le pointeur ne sait pas o� il doit pointer.
    */
    
        // Q4 - Assignez � ptrx � � � ptry �.
    ptrx = ptry;
    cout << "Valeur de *ptrx: " << *ptrx << endl;
    cout << "Address de pointeur ptrx pointer: " << ptrx << endl;
    cout << "Address de pointeur ptry pointer: " << ptry << endl;

    /*
    Affecter le pointeur ptrx � ptry signifie que les deux pointeurs ptrx et ptry pointent vers la m�me adresse, 
    mais leurs propres adresses sont diff�rentes (repr�sentant des pointeurs diff�rents).
    */
        // Q5 - D�r�f�rencez le pointeur � ptry � pour qu�il contient la valeur � 99 �.
    *ptry = 99;
    cout << "Valeur de *ptry: " << *ptry << endl;

        // Q6 - Quel est la valeur point�e par � ptrx � ?
    cout << "Valeur de *ptrx: " << *ptrx << endl;

    /*
    Le dereferencez ptry pointe vers la valeur 99, ce qui signifie que la valeur stock�e dans l'adresse modifi�e est pass�e de 53 � 99.
    De m�me, la valeur point�e par le pointeur ptrx passera �galement � 99.
    */
    
        // Q7 - � l�aide de votre programme de test, indiquez la valeur des adresses m�moires associ�es aux variables � ptrx �, � ptry � et � varx �.
    cout << "Address de ptrx: " << &ptrx << endl;
    cout << "Address de ptry: " << &ptry << endl;
    cout << "Address de varx: " << &varx << endl;

    /*
    Les valeurs des adresses m�moire associ�es aux variables "ptrx", "ptry" et "varx" sont diff�rentes.
    */
    
        // Q8 - Affichez la valeur contenue dans les variables � ptrx � et � ptry �. (Attention, il ne s�agit pas de d�r�f�rencer les pointeurs).
    cout << "la valeur contenue dans les variables ptrx: " << ptrx << endl;
    cout << "la valeur contenue dans les variables ptry: " << ptry << endl;

    /*
    La valeur contenue dans les variables ptrx et ptry est l'adresse vers laquelle elles pointent (elle n'a rien � voir avec la valeur 99 de referencez,
    mais repr�sente l'adresse de stockage de cette valeur)
    */
    // S�rie - 2 -
    cout << "\nS�rie - 2 -\n" << endl;
        // Q9 - D�clarez deux pointeurs � ptra � et � ptrb � qui pointent des valeurs du type � int �.
    int* ptra;
    int* ptrb;

        // Q10 - Faites en sorte que pour chaque pointeur � ptra � et � ptrb � il lui soit allou� une zone m�moire permettant de contenir un seul �l�ment du type � int �.
    int a, b;
    ptra = &a;
    ptrb = &b;
    cout << "Address de ptra dans zone memoire pour contenir seul element int est: " << ptra << endl;
    cout << "Address de ptrb dans zone memoire pour contenir seul element int est: " << ptrb << endl;

    /*
    Pointez les pointeurs ptra et ptrb vers les variables � valeur unique int d�clar�es a, b, 
    afin qu'ils obtiennent l'adresse de stockage de la variable comme valeur, 
    et obtiennent �galement l'adresse o� la valeur de l'adresse est stock�e.
    */
        // Q11 - D�r�f�rencez les pointeurs � ptra � et � ptrb � pour permettre de stocker respectivement les valeurs � 5 � et � 6 �.
    *ptra = 5;
    *ptrb = 6;
    cout << "Valeur de *ptra: " << *ptra << endl;
    cout << "Valeur de *ptrb: " << *ptrb << endl;
    cout << "Valeur de a: " << a << endl;
    cout << "Valeur de b: " << b << endl;

    /*
    D�r�f�rencez les pointeurs � ptra � et � ptrb � pour permettre de stocker respectivement les valeurs � 5 � et � 6 �, 
    En m�me temps, il est �galement affect� aux variables int a et b.
    */

    // S�rie - 3 -
    cout << "\nS�rie - 3 -\n" << endl;
        // Q12 - Soit le fragment de code suivant :
    
    int untab[] = { 5, 19, 14, 8, -10, 99 };
    int* unptr;
    
         // Q12 - Initialisez de deux mani�res diff�rentes le pointeur � unptr � avec le premier �l�ment du tableau.
    unptr = untab;   // unptr = tab[0];
   // cout << "Valeur de *unptr: " << *unptr << endl;
         
         // Q13 - Expliquez pourquoi cette instruction est incorrecte ? untab = unptr;

    /*
    1. En c++, les adresses de toutes les variables ne peuvent pas �tre modifi�es. 
    Une fois la variable d�finie, lorsqu'elle est utilis�e pour la premi�re fois, 
    le syst�me lui allouera une partie de la m�moire et elle ne changera pas tant qu'elle ne mourra pas.

    2. Il n'y a pas d'affectation initiale du pointeur, unptr n'a pas de valeur disponible.

    3. Inversement, nous pouvons attribuer la valeur d'adresse untab de la table au pointeur.(Q12)
    */
        // Q14 - Expliquez le fragment de code suivant et que va - t - il s�afficher en sortie ?

    /*
    for (int i = 0; i < 6; i++) {
        cout << "untab[" << i << "] = " << untab[i] << endl; // ligne �A-
        cout << "unptr+" << i << " = " << *(unptr + i) << endl; // ligne �B-
    }
    */

    /*
    1. ligne �A-: Il affichera les donn�es de la table untab dans l'ordre selon l'index (0-5) (mani�re conventionnelle);
    2. ligne �B-: Il sortira la premi�re variable de table point�e par le pointeur (c'est-�-dire index0), 
    puis le pointeur se d�placera � l'adresse suivante (index1), jusqu'� la derni�re adresse, 
    et sortira la valeur de table � son tour.
    */
    

        // Q15 - Si vous permutez la ligne � - B � par ce qui suit, le fragment de code sera - t - il correct ? Si oui, que va - t - il s�afficher en sortie ?
   /*
    for (int i = 0; i < 6; i++) {
        cout << "\nunptr+" << i << " = " << *unptr++ << endl; // ligne �B-
    }
   */


    /*
    Cette m�thode est correcte, cela signifie qu'� partir de la premi�re position du pointeur, 
    chaque cycle sort la premi�re valeur d'adresse point�e par le pointeur (� partir de l'index0), 
    et chaque fois que le pointeur de boucle passe � l'adresse suivante (0-> 1->2...).
    */

        // Q16 - Si vous permutez la ligne � - B � par ce qui suit, le fragment de code sera - t - il correct ? Si oui, que va - t - il s�afficher en sortie ?
    /*

    for (int i = 0; i < 6; i++) {
        cout << "\nunptr+" << i << " = " << *(++unptr) << endl; // ligne �B-
    }
     */
   
    /*
    Cette m�thode est incorrecte. Le pointeur *(++unptr) affichera la valeur de la table � partir de la deuxi�me adresse 
    (index1, la valeur est 19), et � la fin d�passera l'adresse de la table, pointera vers une nouvelle adresse inconnue 
    et obtiendra une valeur al�atoire.
    La premi�re valeur (index0, 5) ne s'imprimera pas.
    */

    // S�rie - 4 -
    cout << "\nS�rie - 4 -\n" << endl;
        // Le langage � C � et donc par extension le langage � C++ � dispose de la fonction � strcpy � permettant de copier une cha�ne dans une autre.Soit le fragment de code suivant qui repr�sente une version de cette fonction :

        // La fonction suppose que la destination a assez d�espace pour contenir la cha�ne source.R�crivez cette fonction en n�utilisant que les pointeurs.Il ne doit y avoir aucune r�f�rence aux tableaux.La signature d�une telle fonction est comme suit :

    //char* mon_strcpy(char destination*, char source*);
    char str1[] = "This is string1";
    char str2[] = "This is String2";
    //const char* str1 = "This is string1";
    //const char* str2 = "This is String2";

    //mon_strcpy(str1, str2);
    mon_strcopy(str1, str2);
    cout << str1 << endl;
}


