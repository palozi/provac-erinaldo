//. 2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
//bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
//divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
//por 400.


#include <stdio.h>

void bissexto(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("1");
    }
}




int main(){
    int ano;

    printf("Escreva um ano: ");
    scanf("%d", &ano);

    bissexto(ano);

    return 0;
}



/*
int bissexto(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        return 1;
    }else{
        return 0;
    }
}




int main(){
    int ano;

    printf("Escreva um ano: ");
    scanf("%d", &ano);

    if(bissexto(ano)){
        printf("O ANO é bissexto.");
    } else{
        printf("O ANO NÃO É bissexto.");
    }


return 0;
}
*/
