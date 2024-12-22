#include <stdio.h> //  biblioteca para ler inputs e outputs.
#include <stdlib.h> // biblioteca para usar alguns comando especificos como por exemplo na implementação do código os System("cls").
#include <string.h> // biblioteca utilizada para manipulação de strings.

void menu(){ // função void que retorna vazio
        printf("|-----------MENU Conversor-------------|\n");
        printf("|1 - Converter metros para centimetros |\n");
        printf("|2 - Converter centimetros para metros |\n");
        printf("|3 - Converter milimetros para metros  |\n");
        printf("|4 - Converter metros para milimetros  |\n");
        printf("|5 - Sair                              |\n");

        printf("Informe uma opcao:\n");
}

float calc_metros() { // Função que calcula metros para centímetros
    float metro = 0.0;

    printf("Informe a quantidade em metros:\n");
    scanf("%f", &metro);

    if (metro > 0) { // verifica se o numero que foi informado é maior que zero. Usei para não aceitar numeros negativos
        metro *= 100;
        printf("A conversao de metros para centimetro e de: %2.fcm\n", metro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return metro;
}