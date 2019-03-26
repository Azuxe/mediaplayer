#include "stdio.h"
#include "string.h"
#include <time.h>

int main(int argc, char const *argv[])
{
    int number = rand() % 100 + 1;
    int found = 0;
    
    printf("======Jeu du +/-======\n");
    printf("=====Règles du jeu======\n");
    printf("Un nombre aléatoire entre 1 et 100 a déjà été généré, vous devez saisir une valeur, \npresser la touche entrée et le programme vous donneras une \nindication si le nombre a trouver est < ou > au nombre généré !\n");

    while(found == 0){
        int value;
        printf("Saisir un nombre : ");
        scanf("%d", &value);
        printf("Vous avez saisi le nombre %d.\n",value);
        if (value < number) {
            printf("C'est plus !\n");
        }
        else if(value > number){
            printf("C'est moins !\n");
        }else{
            printf("Bien joué, le nombre a trouver était bien %d.\n", number);
            found = 1;
        }
        
    }
    
    
    return 0;
}
