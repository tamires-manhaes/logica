#include <stdio.h>
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
        
        default:
            printf("Opcao incorreta, tente novamente!\n");
            break;
        }
    }
    
    return 0;
}