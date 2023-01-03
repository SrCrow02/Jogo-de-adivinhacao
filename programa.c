#include <stdio.h>

int main(){

    int numerosecreto = 42;

    int chute;   

    int ganhou = 0; 

    int tentativas = 1;

    printf("*************************************************\n");
    printf("Hello Word! Bem vindo ao jogo de Adivinhação.\n");
    printf("*************************************************\n");

    while(ganhou == 0){


        printf("Você está na tentavia %d\n", tentativas-1);

        printf("Qual o seu chute");
        scanf("%d", &chute);

        if (chute < 0){
            return printf("Você não pode digitar numeros negativos!\n");

            continue;
        }
        else if(numerosecreto == chute){
            printf("\nParabens!! Você acertou.");

            //FOR PARAR DE EXECUTAR

            ganhou = 1;  

        } else if(chute > numerosecreto){
            printf("\nSeu chute foi maior que o numero secreto, Você errou.");
        } else if(chute < numerosecreto){
            printf("\nSeu chute foi menor que o numero secreto, Você errou.");
        }
        tentativas ++ 1;
    }   
    printf("Fim de jogo!");
}   