//9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
// Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.

// Utilize as alíquotas e deduções conforme a tabela abaixo:
// ● Até R$ 2.112,00: Isento
// ● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
// ● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
// ● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
// ● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
// Use a estrutura condicional aninhada para calcular o imposto corretamente. 

#include <stdio.h>

void IRRF(float sal_brut){
    float aliquota, deducao, imposto;

    if(sal_brut <= 2112){
    //Até R$ 2.112,00: Isento   
        aliquota = 0;
        deducao = 0;
    }else if(sal_brut > 2112 && sal_brut <= 2826.65){
    //De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
        aliquota = 0.075;
        deducao = 158.40;
    } else if (sal_brut > 2826.65 && sal_brut <= 3751.05){
    //De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
        aliquota = 0.15;
        deducao = 370.40;
    } else if (sal_brut > 3751.05 && sal_brut <= 4664.68){
    //De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
        aliquota = 0.22;
        deducao = 651.73;
    } else{
    //Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
        aliquota = 0.275;
        deducao = 884.96;
    }

    
    imposto = (sal_brut * aliquota) - deducao;
    printf("O seu salário é R$%.2f e o IRRF é R$%.2f", sal_brut, imposto);

}


int main () {
    float sal_brut;

    printf ("O valor do seu salário atual é de: ");
    scanf ("%f", &sal_brut);

    IRRF(sal_brut);

    return 0;
}


