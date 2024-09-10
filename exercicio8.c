//8. Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
//pago.
#include <stdio.h>



void CalculoImposto(float sal){
    float imposto;

    if(sal > 5000){
        imposto = (sal * 20)/100;
        printf("Você terá que pagar R$ %.2f em impostos", imposto);
    } else{
       imposto = (sal * 10)/100;
        printf("Você terá que pagar R$ %.2f em impostos", imposto); 
    }

}


int main () {
    float sal;

    printf ("Escreva seu salário: ");
    scanf ("%f", &sal);
    
    CalculoImposto(sal);

    return 0;
}