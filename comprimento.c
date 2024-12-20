#include <stdio.h> // Adicionando biblioteca para ler inputs e outputs
#include <stdlib.h>

int main(){ // função main resposável por executar o programa.
    int opcao; 

    do{ // estrutura repetição para melhoria do MENU
    system("cls");
    
    printf("---------MENU Conversor---------\n");
    printf("1 - Converter centrimetros para metros\n");
    printf("2 - Converter metros para centimetros\n");
    printf("3 - Converter milimetros para metros\n");
    printf("4 - Sair\n");
    printf("Informe uma opcao:\n");

    scanf("%d", &opcao);

    }while(opcao >= 1 && opcao <= 3);
    
}