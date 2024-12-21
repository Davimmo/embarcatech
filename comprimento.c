#include <stdio.h> //  biblioteca para ler inputs e outputs.
#include <stdlib.h> // biblioteca para usar alguns comando especificos como por exemplo na implementação do código os System("cls").
#include <string.h> // biblioteca utilizada para manipulação de strings.

void menu(){ // função void que retorna vazio
        printf("---------MENU Conversor---------\n");
        printf("1 - Converter centrimetros para metros\n");
        printf("2 - Converter metros para centimetros\n");
        printf("3 - Converter milimetros para metros\n");
        printf("4 - Sair\n");
    
        printf("Informe uma opcao:\n");
}

float calc_metros() { // Função que calcula metros para centímetros
    float metro = 0.0;

    printf("Informe a quantidade em metros:\n");
    scanf("%f", &metro);

    if (metro > 0) {
        metro *= 100;
        printf("A conversao de metros para centimetro e de: %2.fcm\n", metro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return metro;
}

int main(){ // função main resposável por executar o programa.    
    int ler_menu;
    char opcao[4];

    do{
    system("cls");
        menu();
        scanf("%d",&ler_menu);
        
        while (getchar() != '\n');

        switch(ler_menu){
        
        case 1:
            
            printf("deseja retornar ao menu? [Sim] / [Nao]\n");
            fgets(opcao , 4 , stdin);

            opcao[strcspn(opcao, "\n")] = 0;

            if(strcmp(opcao, "Sim") == 0 || strcmp(opcao , "sim") == 0){

            }else if(strcmp(opcao, "Nao") == 0 || strcmp(opcao , "nao") == 0){
            ler_menu = 4;
            }
        break;
        }
    }while(ler_menu >=1 && ler_menu <= 4);
}

