//15. Crie um programa que converta um valor monetário entre três moedas: real
//(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
//moeda de destino e o valor a ser convertido. As taxas de conversão são as
//seguintes:
//● 1 USD = 5.30 BRL
//● 1 EUR = 6.20 BRL
//● 1 BRL = 0.19 USD
//● 1 BRL = 0.16 EUR
//O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
//reconhecida, o programa deve exibir uma mensagem de erro.

#include <stdio.h>

void valormonetario(float valor_mon, char moeda_origem, char moeda_destino) {
    float valor_convertido = 0.0;

    if (moeda_origem == 'B' && moeda_destino == 'U') {
        valor_convertido = valor_mon * 0.19;
    } else if (moeda_origem == 'B' && moeda_destino == 'E') {
        valor_convertido = valor_mon * 0.16;
    } else if (moeda_origem == 'U' && moeda_destino == 'B') {
        valor_convertido = valor_mon * 5.30;
    } else if (moeda_origem == 'E' && moeda_destino == 'B') {
        valor_convertido = valor_mon * 6.20;
    } else if (moeda_origem == 'U' && moeda_destino == 'E') {
        valor_convertido = (valor_mon * 5.30) / 6.20;
    } else if (moeda_origem == 'E' && moeda_destino == 'U') {
        valor_convertido = (valor_mon * 6.20) / 5.30;
    } else {
        printf("Erro: Moeda de origem ou destino não reconhecida.\n");
        return;
    }

    printf("O valor convertido é: %.2f\n", valor_convertido);
}

int main() {
    float valor_mon;
    char moeda_origem, moeda_destino;

    printf("Informe o valor que você tem: ");
    scanf("%f", &valor_mon);

    printf("Informe a moeda de origem (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moeda_origem);

    printf("Informe a moeda de destino (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moeda_destino);

    valormonetario(valor_mon, moeda_origem, moeda_destino);

    return 0;
}