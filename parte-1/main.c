#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"

int main(){
    int opcao, exit = 0;

    while(!exit){
        menu();
        scanf("%d", &opcao);

        switch (opcao){
        case 0:{
            printf("Finalizando programa...\n");
            exit = 1;
            break;
        }

        case 1: {
            float base, altura;

            printf("digite o valor da base: ");
            scanf("%f", &base);

            printf("digite o valor da altura: ");
            scanf("%f", &altura);

            questao1(base, altura);

            break;
        }

        case 2: {
            float lado;

            printf("digite o vlaor do lado: ");
            scanf("%f", &lado);

            questao2(lado);

            break;
        }
        
        case 3: {
            float raio;

            printf("digite o valor do raio: ");
            scanf("%f", &raio);

            questao3(raio);
            break;
        }

        case 4: {
            float lado;

            printf("digite o valor do lado: ");
            scanf("%f", &lado);

            float perimetro = questao4(lado);
            printf("perimetro: %.1f\n", perimetro);

            break;
        }

        case 5: {
            int numero;

            printf("digite numero: ");
            scanf("%d", &numero);

            int sucessor = questao5(numero);
            printf("numero: %d | sucessor: %d\n", numero, sucessor);

            break;
        }

        case 6: {
            int valorA, valorB;

            printf("digite valor A: ");
            scanf("%d", &valorA);
            printf("digite valor B: ");
            scanf("%d", &valorB);

            questao6(valorA, valorB);
            
            break;
        }

        case 7: {
            int dia, mes, ano;

            printf("digite dia de nascimento: "); scanf("%d", &dia);

            printf("digite mes de nascimento: "); scanf("%d", &mes);

            printf("digite ano de nascimento: "); scanf("%d", &ano);

            questao07(dia, mes, ano);
            break;
        }

        case 8: {
            float temp, resultado;

            printf("Digite temperatura em Fahrenheit: ");
            scanf("%f", &temp);

            resultado = questao8(temp);

            printf("%.1f Farh = %.1f Celsius\n", temp, resultado);

            break;
        }
        
        default:
            printf("Opcao incorreta, tente novamente!\n");
            break;
        }
    }
    
    return 0;
}
