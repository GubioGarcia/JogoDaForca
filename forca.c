#include <stdio.h>
#include <string.h>

int main (){
    char palavraSecreta[20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou =  1;

    do {
        char palpite;
        scanf("%c", &palpite);

        for(int i = 0; i < strlen(palavraSecreta); i++){
            if (palavraSecreta[i] == palpite){
                printf("A posicao %d tem essa letra!\n", i);
            }
        }

    } while (!acertou && !enforcou);
    
}