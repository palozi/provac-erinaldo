//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:
//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//● De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%
//Use a estrutura condicional aninhada para calcular o desconto corretamente. 

#include <stdio.h>

void INSS(float sal_brut){

    float contribuicao, faixa1, faixa2, faixa3, faixa4;
    
    faixa1 = 1320;
    faixa2 = 2571.29;
    faixa3 = 3856.94;
    faixa4 = 7507.49;
  
    
    if(sal_brut <= faixa1){
        contribuicao = (sal_brut * 7.5) / 100;
    }else if(sal_brut > faixa1 && sal_brut <= faixa2){
        contribuicao = faixa1 * 7.5 / 100 + (sal_brut - faixa1) * 9 / 100;
    } else if (sal_brut > faixa2 && sal_brut <= faixa3){
        contribuicao = faixa1 * 7.5 / 100 + (faixa2 - faixa1) * 9 / 100 + (sal_brut - faixa2) * 12 / 100;
    } else if (sal_brut > faixa3 && sal_brut <= faixa4){
        contribuicao = faixa1 * 7.5 / 100 + (faixa2 - faixa1) * 9 / 100 + (faixa3 - faixa2) * 12 / 100 + (sal_brut - faixa3) * 14 / 100;
    } 

    
    printf("Você contribui com %.2f com o INSS", contribuicao);

}

int main () {
    float sal_brut;

    printf ("O valor do seu salário bruto atualmente é: ");
    scanf ("%f", &sal_brut);


    INSS(sal_brut);

    return 0;
}