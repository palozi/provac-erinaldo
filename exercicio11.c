//11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
//de ICMS com base nas faixas de preço do produto:
//● Até R$ 1.000,00: Desconto de 5%
//● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
//● Acima de R$ 5.000,00: Desconto de 15%
//Use a estrutura condicional aninhada para aplicar o desconto corretamente.

#include <stdio.h>

int main () {
    float valor_prod, valor_desc, calc;

    //solicita o valor do produto ao usuario
    printf ("Informe o valor do Produto: ");
    scanf ("%f", &valor_prod);

    //aplica o desconto de acordo com as faixas de preco
    if (valor_prod <= 1000.00) {
        valor_desc = valor_prod * 0.05;  
    } else if (valor_prod <= 5000.00) {
        valor_desc = valor_prod * 0.10;
    } else {
        valor_desc = valor_prod * 0.15;
    }

    //calcula o valor final apos aplicar o desconto
    calc = valor_prod - valor_desc;

    //exibe o valor do desconto e o valor final do produto
    printf("O valor do desconto e: R$ %.2f\n", valor_desc);
    printf("O valor final do produto com desconto e: R$ %.2f\n", calc);

    return 0;
}