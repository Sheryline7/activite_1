#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    int choixPseudo = 0;

printf("Quel age avez vous?\n");
scanf("%d", &age);
printf("Super, maintenant je t'invite à choisir un pseudo de joueur parmis les suivants.\n1. Le Joker\n2. Thor\n3. Black Widow\n4. Sangoku Super Saiyan 3\n5. Nikita\n6. Katniss Everdeen\n Alors ton choix?");
scanf("%d", &choixPseudo);
    
    switch (choixPseudo)
    
    {
        case 1:
            printf("D'la bombe! Jolis les cheveux verts!\n\n");
            break;
            
        case 2:
            printf("Ok! Du tonerre! C'est parti!\n\n");
            break;
            
        case 3:
            printf("Yeah, allons-y crinière de feu!\n\n");
            break;
            
        case 4:
            printf("Oh waouh phénoménal la crinière!\n\n");
            break;
            
        case 5:
            printf("Je vois, une main de fer dans un gant de velours!\n\n");
            break;
            
        case 6:
            printf("Excellent choix. Puisse le sort vous être favorable!\n\n");
            break;
            
        default: // Correspond a Else.
            
            printf("Ben alors t'as rien sélectionné?\n\n");
            break;
    }
    
    return 0;
}
