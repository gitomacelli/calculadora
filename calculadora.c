#include <stdio.h>

float soma(float a, float b){
    return a + b;
}
float subtracao(float a, float b){
    return a - b;
}
float multiplicacao(float a, float b){
    return a * b;
}
float divisao(float a, float b){
    if (b == 0) {
        printf("Erro na divisao por zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    int escolha;

    do {
        printf("Digite o primeiro valor:\n");
        scanf("%f", &num1);
        printf("Digite o segundo valor:\n");
        scanf("%f", &num2);

        printf("\nESCOLHA A OPERACAO DESEJADA:\n\n");
        printf("0- Encerrar programa!\n");
        printf("1- Soma\n");
        printf("2- Subtracao\n");
        printf("3- Multiplicacao\n");
        printf("4- Divisao\n");
        printf("\nOpcao desejada:\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Soma: %.2f\n", soma(num1, num2));
                break;
            case 2:
                printf("Subtracao: %.2f\n", subtracao(num1, num2));
                break;
            case 3:
                printf("Multiplicacao: %.2f\n", multiplicacao(num1, num2));
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro na divisao por zero!\n");
                } else {
                    printf("Divisao: %.2f\n", divisao(num1, num2));
                }
                break;
            case 0:
                printf("Encerrar o programa!\n");
                break;
            default:
                printf("Opcao invalida!!!\n");
        }
    } while (escolha != 0);

    return 0;
}