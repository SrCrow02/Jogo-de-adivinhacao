#include <stdio.h>

int main(){
    //Calculadora

    int expressaoAritimedica;
    float primeiroNumero;
    float segundoNumero;

    float soma = primeiroNumero + segundoNumero;
    float sub = primeiroNumero - segundoNumero;
    float mult = primeiroNumero * segundoNumero;
    float div = primeiroNumero / segundoNumero;

    printf("Bem vindo a Calculadora!!!\n\n");

    printf("Digite a expressão aritimédica\n");

    printf("Opções disponiveis: soma, sub, mult, div: ");
    scanf("%f", &expressaoAritimedica);

    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%f", &segundoNumero);

        if(expressaoAritimedica){
        printf("O resultado da soma foi: %f", soma);
    }


}