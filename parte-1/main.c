#include <stdio.h>
#include <stdlib.h>
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

                questao01(base, altura);

                break;
            }

            case 2: {
                float lado;

                printf("digite o vlaor do lado: ");
                scanf("%f", &lado);

                questao02(lado);

                break;
            }
            
            case 3: {
                float raio;

                printf("digite o valor do raio: ");
                scanf("%f", &raio);

                questao03(raio);
                break;
            }

            case 4: {
                float lado;

                printf("digite o valor do lado: ");
                scanf("%f", &lado);

                float perimetro = questao04(lado);
                printf("perimetro: %.1f\n", perimetro);

                break;
            }

            case 5: {
                int numero;

                printf("digite numero: ");
                scanf("%d", &numero);

                int sucessor = questao05(numero);
                printf("numero: %d | sucessor: %d\n", numero, sucessor);

                break;
            }

            case 6: {
                int valorA, valorB;

                printf("digite valor A: ");
                scanf("%d", &valorA);
                printf("digite valor B: ");
                scanf("%d", &valorB);

                questao06(valorA, valorB);
                
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

            case 9: {
                float raio, altura;

                printf("Digite valor do raio: ");
                scanf("%f", &raio);

                printf("Digite valor da altura: ");
                scanf("%f", &altura);

                float volume = questao09(raio, altura);
                printf("Volume: %.1f cm³\n", volume);

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

            case 21: {
                int valor;

                printf("Digite valor: ");
                scanf("%d", &valor);

                int resultado = questao21(valor);
                if(resultado == 0){
                    printf("Numero positivo\n");
                } else {
                    printf("Numero negativo\n");
                }

                break;
            }

            case 23: {
                int numero;

                printf("Digite valor: ");
                scanf("%d", &numero);

                int resultado = questao23(numero);

                if(resultado == 0) {
                    printf("Par\n");
                } else {
                    printf("Impar\n");
                }

                break;
            }

            case 24: {
                int valorA, valorB, valorC;

                printf("valor A:");
                scanf("%d", &valorA);

                printf("valor B:");
                scanf("%d", &valorB);

                printf("valor C:");
                scanf("%d", &valorC);

                int maior = questao24(valorA, valorB, valorC);

                printf("maior valor é: %d\n", maior);

                break;
            }

            case 25: {
                int mes, resultado;

                printf("Digite mes: ");
                scanf("%d", &mes);

                resultado = questao25(mes);

                printf("O mes %d, tem %d dias\n", mes, resultado);

                break;
            }

            case 26: {
                int A, B, C;

                printf("Digite A: ");
                scanf("%d", &A);

                printf("Digite B: ");
                scanf("%d", &B);

                printf("Digite C: ");
                scanf("%d", &C);

                int resultado = questao26(A, B, C);

                printf("soma = %d\n", resultado);

                break;
            }

            case 27:{
                float notaA, notaB, notaC, media;

                printf("Digite nota 1: ");
                scanf("%f", &notaA);

                printf("Digite nota 2: ");
                scanf("%f", &notaB);

                printf("Digite nota 3: ");
                scanf("%f", &notaC);

                media = questao27(notaA, notaB, notaC);

                printf("Media = %.1f", media);
                break;
            }

            case 29: {
                float salario;

                printf("Digite o valor do salario: ");
                scanf("%f", &salario);

                float desconto = questao29(salario);

                printf("Valor descontado: %.2f", desconto);

                break;
            }
            
            default:{
                printf("Opcao incorreta, tente novamente!\n");
                break;
            }
        }

    }
    
    return 0;
}
