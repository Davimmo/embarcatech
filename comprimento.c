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
        printf("A conversao de metros para centimetros e de: %2.f cm\n", metro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return metro;
}

float calc_centimetros() { // Função que calcula centímetros para metros
    float centimetro = 0.0;

    printf("Informe a quantidade em centimetros:\n");
    scanf("%f", &centimetro);

    if (centimetro > 0) { // verifica se o numero que foi informado é maior que zero. Usei para não aceitar numeros negativos
        centimetro /= 100;
        printf("A conversao de centimetros para metros e de: %.2f m\n", centimetro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return centimetro;
}

float calc_milimetro() { // Função que calcula milímetros para metros
    float milimetro = 0.0;

    printf("Informe a quantidade de metros:\n");
    scanf("%f", &milimetro);

    if (milimetro > 0) { // verifica se o numero que foi informado é maior que zero. Usei para não aceitar numeros negativos
        milimetro /= 1000;
        printf("O valor em milimetros e: %.2f m\n", milimetro);
    } else {
        printf("Opcao invalida!!\n");
    }

    return milimetro;
}

float calc_metro_mili() { // Função que calcula metros para milímetros
    float metro_milimetro = 0.0;

    printf("Informe a quantidade em metros:\n");
    scanf("%f", &metro_milimetro);

    if (metro_milimetro > 0) { // verifica se o numero que foi informado é maior que zero. Usei para não aceitar numeros negativos
        metro_milimetro *= 1000;
        printf("O valor em milimetros e: %4.f mm\n", metro_milimetro);
    } else {   
        printf("Opcao invalida!!\n");
    }

    return metro_milimetro;
}

int main(){

   int ler_menu;
   //char opcao[4];

    do {
        menu();
        scanf("%d", &ler_menu);
        while (getchar() != '\n'); // Limpa o buffer de entrada
        system("cls");
        switch (ler_menu) {
            case 1:
                calc_metros(); // calcula a função calc_metros
            break;

            case 2:
                calc_centimetros();// calcula a função calc_centimetros
            break;

            case 3:
                calc_milimetro();// calcula a função calc_milimetro
            break;

            case 4:
                calc_metro_mili();// calcula a função calc_metro_mili
            break;
            
            case 5:
                printf("Programa encerrado!"); // encerra o programa
            break;

            default:
                printf("Opcao invalida.\n");
            break;
        }
} while (ler_menu >= 1 && ler_menu <= 4);

}