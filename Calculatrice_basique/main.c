#include <stdio.h>
#include <stdlib.h>
#include <math.h> // J'importe la biblioth�que math.h pour avoir d'autres fonctions
/*
fabs = valeur absolue.
ceil = entier sup�rieur.
floor = entier inf�rieur.
pow = puissance.
sqrt = racine carr�e.
sin, cos, tan = sinus, cosinus, tangente.
exp = exponentielle.
log = logarithme.
ETC...
*/


int main()
{
    printf("\n\n-----------------------------CALCULETTE-----------------------------\n\n");

    printf("\nADDITION : \n\nQuel est votre premier nombre ?\n");
    int premierNombre = 0;
    scanf("%d", &premierNombre);

    printf("\n\nMaintenant, quel est votre deuxieme nombre ?\n");
    int deuxiemeNombre = 0;
    scanf("%d", &deuxiemeNombre);

    int resultatAddition = premierNombre + deuxiemeNombre;
    printf("\n\nLe resultat de votre addition est : %d\n\n", resultatAddition);
    return 0;
}
