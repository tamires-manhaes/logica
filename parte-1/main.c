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

            resultado = questao08(temp);

            printf("%.1f Farh = %.1f Celsius\n", temp, resultado);

            break;
        }

        case 11: {
            float nota1Bi1, nota2Bi1, nota1Bi2, nota2Bi2, media;

            printf("Bimestre 1: \n");
            printf("Nota 1: ");
            scanf("%f", &nota1Bi1);

            printf("Nota 2: ");
            scanf("%f", &nota2Bi1);


            printf("Bimestre 2: \n");
            printf("Nota 1: ");
            scanf("%f", &nota1Bi2);

            printf("Nota 2: ");
            scanf("%f", &nota2Bi2);

            media = questao11(nota1Bi1, nota2Bi1, nota1Bi2, nota2Bi2);

            printf("Media = %.1f\n", media);

            break;
        }

        case 12: {
            float velocidadeKm, velocidadeMs;

            printf("Velocidade: ");
            scanf("%f", &velocidadeMs);

            velocidadeKm = questao12(velocidadeMs);

            printf("%.1f m/s = %.1f km/h\n", velocidadeMs, velocidadeKm);   

            break;
        }

        case 18: {
            int var1, var2;

            printf("Valor 1: ");
            scanf("%d", &var1);

            printf("Valor 2: ");
            scanf("%d", &var2);

            questao18(var1, var2);

            break;
        }
        
        default:
            printf("Opcao incorreta, tente novamente!\n");
            break;
        }
    }
    
    return 0;
}
