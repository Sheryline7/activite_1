
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])

{
    
    int nombreEntre = 0, nombreMystere = 0, compteur = 0;
    const int MAX = 100, MIN = 1;
    
    srand((int)time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    
    do
        
    {
        compteur++;
        printf("Quel est le nombre?");
        scanf("%d", &nombreEntre);
        
        if (nombreEntre > nombreMystere)
            printf("C'est moins !\n");
        
        
        else if (nombreEntre < nombreMystere)
            printf("C'est plus !\n");
        
        else
            printf ("BRAVO, vous avez trouve le nombre mystere en %d coups!!!.\n", compteur);
        
    }
    
    while (nombreEntre != nombreMystere);
    
    
    
    return 0;
}
