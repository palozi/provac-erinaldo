//13. Crie um programa que simule uma calculadora simples. O programa deve
//permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
//multiplicação e divisão. O usuário deve informar a operação desejada e dois
//números. O programa deve realizar a operação selecionada e exibir o resultado.
//Caso a operação não seja reconhecida, o programa deve informar um erro.


#include <stdio.h>


void calculadora(int calc_simples) {
    
    float num1, num2;
    
    switch (calc_simples){
    case 1:
         printf("Soma\n");
         printf("Informe dois números: ");
         scanf("%f %f", &num1, &num2);
         printf("A soma entre estes dois números é: %.2f", num1 + num2);
         break;

    case 2:
         printf("Subtração.\n");
         printf("Informe dois números: ");
         scanf("%f %f", &num1, &num2);
         printf("A subtração entre estes dois números é: %.2f", num1 - num2);
         break;

    case 3:
         printf("Multiplicação.\n");
         printf("Informe dois números: ");
         scanf("%f %f", &num1, &num2);
         printf("A multiplicação entre estes dois números é: %.2f", num1 * num2);
         break;
    
    case 4:
         printf("Divisão.\n");
         printf("Informe dois números: ");
         scanf("%f %f", &num1, &num2);
         while(num2 == 0){
               printf("Você não pode dividir um número por zero\n");
               printf("Digite um número válido\n");
               scanf("%f", &num2);
         }
         printf("A divisão entre estes dois números é: %.2f", num1 / num2);
         break;
    
    default:
        printf("Selecione uma opção válida!");
        break;
    }

}


int main () {
    int calc_simples;

    printf ("Escolha um número para saber qual tipo de operação aritméticas:\n 1 - Soma\n 2 - Subtração\n 3 - multiplicação\n 4 - Divisão\n ");
    scanf("%d", &calc_simples);

    calculadora(calc_simples);


    return 0;
}
