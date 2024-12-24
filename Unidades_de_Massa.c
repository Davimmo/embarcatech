#include <stdio.h>

//considere 1=grama; 2=quilograma; 3=tonelada

double ConversorDeMassa(double val, int a, int b){//a=incio e b=destino
   double gramas=0; //considere grama o valor base

   switch (a)
   {
    case 1:
        gramas=val;
        break;
    case 2:
        gramas=val*1000;
        break;
    case 3:
        gramas=val*1000000;
        break;
   default:
        printf("O local de inicio é invalido.\n");
        break;
   }

   switch (b)
   {
        case 1:
            return(gramas);
        case 2:
            return(gramas/1000);
        case 3:
            return(gramas/1000000);
        default:
            printf("O local de destino é invalido.\n");
            return -1;
   }
}

int main(){
    int a,b,c;
    float x;
    do{
        printf("=====BEM VINDO AO CONVERSOR DE MASSA=====\n\n");
        printf("O que voce deseja:\n");
        printf("1-Converter Massa.\n2-Sair do Programa\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("Qual valor de massa deseja converter?\n");
            scanf("%f",&x);
            printf("Certo, agora selecione a unidade de medida dele:\n");
            printf("1-Grama\n2-Quilograma\n3-Tonelada\n");
            scanf("%d",&a);
            printf("Certo, agora selecione para qual unidade de medida deseja transformar dele:\n");
            printf("1-Grama\n2-Quilograma\n3-Tonelada\n");
            scanf("%d",&b);
            printf("\n");
            x=ConversorDeMassa(x,a,b);
            if(x!=-1){
                switch (b)
                {
                case 1:
                    printf("O valor convertido sera de: %.2f gramas\n",x);
                    break;
                    
                case 2:
                    printf("O valor convertido sera de: %.2f quilogramas\n",x);
                    break;
                case 3:
                    printf("O valor convertido sera de: %.2f toneladas\n",x);
                    break;
                default:
                    printf("Valor invalido de massa.\n");
                    break;
                } 
            }
            break;   
        case 2:
            return(0);
            break;
        default:
            printf("Valor de opcao invalida no programa.\n");
            break;
        }
    }while(c!=2);
    return 0;
}