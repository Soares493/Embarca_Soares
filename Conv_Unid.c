

#include <stdio.h>

void converter(double valor, int escolha) {
    switch (escolha) {
        case 1:  // De metro para centimetro e milimetro
            printf("%.2f metro(s) é igual a %.2f centimetro(s) e %.2f milimetro(s).\n", 
                   valor, valor * 100, valor * 1000);
            break;
        case 2:  // De centimetro para metro e milimetro
            printf("%.2f centimetro(s) é igual a %.2f metro(s) e %.2f milimetro(s).\n", 
                   valor, valor / 100, valor * 10);
            break;
        case 3:  // De milimetro para metro e centimetro
            printf("%.2f milimetro(s) é igual a %.2f metro(s) e %.2f centimetro(s).\n", 
                   valor, valor / 1000, valor / 10);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
}

int main() {
    double valor;
    int escolha;

    printf("Escolha a unidade de medida:\n");
    printf("1 - Metro\n");
    printf("2 - Centimetro\n");
    printf("3 - Milimetro\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    printf("Digite o valor para conversão: ");
    scanf("%lf", &valor);

    converter(valor, escolha);

    return 0;
}