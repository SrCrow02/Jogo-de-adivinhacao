#include <stdio.h>

int main(){
    //Calculadora

    int expressaoAritimedica;

    double primeiroNumero;
    double segundoNumero;

    int resetar = 1;

    while(resetar == 1){
        printf("Bem vindo a Calculadora!!!\n\n");

        printf("Digite a expressão aritimédica\n");

        printf("Opções disponiveis: 1 soma, 2 sub, 3 mult, 4 div: ");
        scanf("%d", &expressaoAritimedica);

        printf("Digite o primeiro numero: ");
        scanf("%lf", &primeiroNumero);

        printf("Digite o segundo numero: ");
        scanf("%lf", &segundoNumero);

        if(expressaoAritimedica == 1){
            double soma = primeiroNumero + segundoNumero;
            printf("O resultado da soma foi: %.1f", (double)soma);
        } else if (expressaoAritimedica == 2){
            double sub = primeiroNumero - segundoNumero;
            printf("O resultado da soma foi: %.1f", (double)sub);
        } else if(expressaoAritimedica == 3) {
            double mult = primeiroNumero * segundoNumero;
            printf("O resultado da soma foi: %.1f", (double)mult);
        } else if(expressaoAritimedica == 4) {
            double div = primeiroNumero / segundoNumero;
            printf("O resultado da soma foi: %.1f", (double)div);
        }

        printf("\nDeseja fazer outro calculo... Digite 1 se sim ou Digite 2 se não: ");
        scanf("%d", &resetar);
    }
}