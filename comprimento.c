#include <stdio.h> //  biblioteca para ler inputs e outputs
#include <stdlib.h> // biblioteca para usar alguns comando especificos como por exemplo na implementação do código os System("cls").
#include <string.h> // biblioteca utilizada para manipulação de strings.

void menu(){ // função void que retorna vazio
    int ler_menu;
    do{

        printf("---------MENU Conversor---------\n");
        printf("1 - Converter centrimetros para metros\n");
        printf("2 - Converter metros para centimetros\n");
        printf("3 - Converter milimetros para metros\n");
        printf("4 - Sair\n");
    
        printf("Informe uma opcao:\n");
        scanf("%d", &ler_menu);


        switch(ler_menu){
            char opcao;
            case 1:
            // operacao

            printf("Deseja retornar ao menu? [Sim] ou [Nao]\n");
            scanf("%c",&opcao);

            if(opcao = "Sim"){
                printf("teste");
            }
            break;
        }
    }while(ler_menu >=1 && ler_menu <= 4);

}

int main(){ // função main resposável por executar o programa.    

    menu();
}

