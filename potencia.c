#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void ConversaoPotencia( char unidadep, float valorp) {
    
    switch(unidadep) {
    case 'w':
        printf("A potência é: \n%.2fW \n%.2fkW \n%.2fcv \n%.2fhp\n", valorp, valorp/1000, valorp/735.5, valorp/745.7);
        break;

    case 'k':
        printf("A potência é: \n%.2fkW  \n%.2fW \n%.2fcv \n%.2fhp\n", valorp, valorp*1000, valorp*1000 / 735.5, valorp*1000/745.7);
        break;

    case 'c':
        printf("A potência é: \n%.2fcv \n%.2fW \n%.2fkW \n%.2fhp\n", valorp, valorp* 735.5, valorp* 735.5/1000, valorp*735.5/745.7);
        break;

    case 'h':
        printf("A potência é: \n%.2fhp \n%.2fW \n%.2fkW, %.2fcv\n", valorp, valorp*745.7, valorp*745.7/1000, valorp*745.7/735.5);
        break;

    default:
        printf("Unidade inválida! Por favor, insira w, k, c ou h.\n"); } }
int main() {
 setlocale(LC_ALL, "portuguese");
 char unidadep, continuar;
 float valorp;

do {
    printf("Insira a unidade de potência: \n'w' para watts \n'k' para kilo watts \n'c' para cavalo vapor \n'h' para Hourse Power\n");
    scanf(" %c", &unidadep);
    
    printf("Insira o valor da potência\n");
    scanf("%f", &valorp);
    
    ConversaoPotencia(unidadep, valorp);
    
    printf("\nDigite 's' caso deseje continuar e 'n' caso deseja encerrar\n");
    scanf(" %c", &continuar); }

while (continuar == 's' || continuar == 'S');
printf("\nprograma encerrado\n");
system("pause");
return 0; }
