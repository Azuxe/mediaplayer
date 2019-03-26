#include "stdio.h"
#include "string.h"
#include <math.h>

int main(int argc, char const *argv[])
{
    int end = 0;

    printf("======Déterminer si un nombre est premier======\n");
    printf("=====Comment ça fonctionne ?======\n");
    printf("Lorsque vous êtes invités à saisir un nombre,\nfaites le et appuyer sur la touche entrée pour que s'affiche le résultat.\nSi vous saisissez le nombre 0, alors le programme se termine.\n");

    while (end == 0)
    {
        int isPrime = 0;
        int value;
        int i = 2;

        printf("Saisir un nombre : ");
        scanf("%d", &value);
        printf("Vous avez saisi le nombre %d\n", value);

        if (value == 0)
        {
            end = 1;
        }

        while (end == 0 && isPrime == 0 && i < sqrt((double)value))
        {
            if (value % i == 0)
            {
                isPrime = 1;
            }
            i++;
        }

        if (isPrime == 1)
        {
            printf("%d n'est pas premier.\n", value);
        }
        else
        {
            printf("%d est premier.\n", value);
        }
    }

    return 0;
}
