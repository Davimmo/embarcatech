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

float calc_centimetros() { // Função que calcula centímetros para metros
    float centimetro = 0.0;

    printf("Informe a quantidade em centimetros:\n");
    scanf("%f", &centimetro);

    if (centimetro > 0) {
        centimetro /= 100;
        printf("A conversao de centimetros para metros e de: %.2fm\n", centimetro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return centimetro;
}

float calc_milimetro() { // Função que calcula milímetros para metros
    float milimetro = 0.0;

    printf("Informe a quantidade de metros:\n");
    scanf("%f", &milimetro);

    if (milimetro > 0) {
        milimetro /= 1000;
        printf("O valor em milimetro e: %.2fm\n", milimetro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return milimetro;
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

