#include <stdio.h>

#define NUMERO_DE_TENTATIVAS = 5

int main(){

    int numerosecreto = 42;

    int chute;    

    printf("*************************************************\n");
    printf("Hello Word! Bem vindo ao jogo de Adivinhação.\n");
    printf("*************************************************\n");

    for(int i = 1;i <= NUMERO_DE_TENTATIVAS; i++){

        printf("Você está na tentavia %d de %d\n", i, NUMERO_DE_TENTATIVAS);

        printf("Qual o seu chute");
        scanf("%d", &chute);

        printf("Seu chute foi %d, e o numero secreto é %d", chute, numerosecreto);

        if(numerosecreto == chute){
            printf("\nParabens!! Você acertou.");

            //FOR PARAR DE EXECUTAR

            break;

        } else if(chute > numerosecreto){
            printf("\nSeu chute foi maior que o numero secreto, Você errou.");
        } else if(chute < numerosecreto){
            printf("\nSeu chute foi menor que o numero secreto, Você errou.");
        }
    }   
}   