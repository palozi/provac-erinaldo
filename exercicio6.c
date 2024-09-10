//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos.

#include <stdio.h>

void NotaAluno(float nota){

    if(nota >= 7){
        printf("Aprovado!");
    } else{
         printf("Reprovado!");
    }
}
    


int main(){

    float nota;

    do{
        printf("Informe a nota de 0 a 10: ");
        scanf("%f", &nota);
    } while(nota < 0 || nota > 10);

    NotaAluno(nota);
    


}