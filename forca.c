#include <stdio.h>
#include <string.h>

int main (){
    char palavraSecreta[20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char vetorPalpites[26];
    int tentativas = 0;

    printf("*   JOGO DA FORCA   *\n\n");

    do {
        for (int i = 0; i < strlen(palavraSecreta); i++) {
            int achou = 0;

            for (int j = 0; j < tentativas; j++) {
                if (vetorPalpites[j] == palavraSecreta[i]) {
                    achou = 1;
                    break;
                }
            }
            
            if (achou) {
                printf ("%c ", palavraSecreta[i]);
            } else {
                printf ("_ ");
            }
        }

        printf ("\n");      

        char palpite;
        printf ("Qual letra? ");
        scanf (" %c", &palpite);

        vetorPalpites[tentativas] = palpite;
        tentativas++;
    } while (!acertou && !enforcou);
    
}