//12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
//do IPTU com base na tabela abaixo:
//● Até R$ 100.000,00: Alíquota de 1%
//● De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
//● De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
//● Acima de R$ 500.000,00: Alíquota de 2,5%
//Use a estrutura condicional aninhada para aplicar a alíquota corretamente.

#include <stdio.h>

//funcao para calcular o valor do IPTU com base no valor venal do imovel
float calcularIPTU(float imovel) {
    float iptu;
    
    if (imovel <= 100000.00) {
        iptu = imovel * 0.01;  
    } else if (imovel <= 300000.00) {
        iptu = imovel * 0.015; 
    } else if (imovel <= 500000.00) {
        iptu = imovel * 0.02;  
    } else {
        iptu = imovel * 0.025; 
    }
    
    return iptu;
}

int main () {
    float valor_mensal, imovel, calc, valor_iptu;

    //solicita o valor mensal de um imovel
    printf("Informe o valor mensal de um imovel: ");
    scanf("%f", &valor_mensal);

    //solicita o valor venal do imovel
    printf("Informe o valor venal do imovel: ");
    scanf("%f", &imovel);

    //calcula o valor do IPTU
    valor_iptu = calcularIPTU(imovel);

    //calcula o valor mensal apos aplicar o IPTU
    calc = valor_mensal + (valor_iptu / 12);  

    //exibe o valor do IPTU e o valor mensal com o IPTU incluido
    printf("O valor total do IPTU e: R$ %.2f\n", valor_iptu);
    printf("O valor mensal com IPTU incluido e: R$ %.2f\n", calc);

    return 0;
}