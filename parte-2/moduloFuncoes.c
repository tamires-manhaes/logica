#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"

#define TAMANHO 2

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 2\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 1\n");
    printf("\t\t\t2 - questao 2\n");
    printf("\t\t\t3 - questao 3\n");
    printf("\t\t\t6 - questao 6\n");
    printf("\t\t\t7 - questao 7\n");
    printf("\t\t\t10 - questao 10\n");
    printf("\t\t\t11 - questao 11\n");
    printf("\t\t\t12 - questao 12\n");
    printf("\t\t\t13 - questao 13\n");
    printf("\t\t\t14 - questao 14\n");
    printf("\t\t\t15 - questao 15\n");
    printf("\t\t\t19 - questao 19\n");
    printf("\t\t\t20 - questao 20\n");
    printf("\t\t\t21 - questao 21\n");
    printf("\t\t\t22 - questao 22\n");
    printf("\t\t\t23 - questao 23\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\tDigite opcao desejada: ");
}

void questao01(){
    int op, exit = 0;

    while(!exit){
        printf("\n");
        printf("1 - Média Aritmetica\n");
        printf("2 - Média Ponderada\n");
        printf("3 - Sair\n");
        printf("Digite opcao desejada: ");
        scanf("%d", &op);

        switch(op){
            case 1: {
                float valorA, valorB, mediaAritmetica;
                
                printf("Valor 1: ");
                scanf("%f", &valorA);
                printf("Valor 2: ");
                scanf("%f", &valorB);

                mediaAritmetica = ( valorA + valorB ) / 2;
                printf("Média aritmetica = %.1f\n", mediaAritmetica);

                break;
            }

            case 2: {
                float notaA, notaB, notaC, pesoA, pesoB, pesoC, mediaPonderada;

                printf("Nota 1: ");
                scanf("%f", &notaA);

                printf("Nota 2: ");
                scanf("%f", &notaB);

                printf("Nota 3: ");
                scanf("%f", &notaC);

                printf("Peso 1: ");
                scanf("%f", &pesoA);

                printf("Peso 2: ");
                scanf("%f", &pesoB);

                printf("Peso 3: ");
                scanf("%f", &pesoC);

                mediaPonderada = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
                printf("Média ponderada = %.1f\n", mediaPonderada);

                break;
            }

            case 3: {
                exit = 3;
                printf("Finalizando...");
                break;
            }
        }
    }
    
}

void questao02(){

}

int questao03(){
    int qtdEntradas, idade, media;
    int sair = media = qtdEntradas = 0;

    while(!sair){
        printf("digite idade: ");
        scanf("%d", &idade);

        if(idade == 0) { break; }
        if(idade != -1){ media += idade; }
        qtdEntradas++;
    }

    media = media / qtdEntradas;
    return media;
}

void questao04(){
   Pessoa pessoas[6];

    for(int j = 0; j < 6; j++){
       
    }
}

int questao06(int valor){
    int vetor[8] = {8, 5, 12, 18, 22, 97, 21, 10};

    for(int cont = 0; cont < 8; cont++){
        if(vetor[cont] == valor){
            return cont;
        }
    }

    return -1;
}

void questao07(){
    int vetorPares[10], vetorRandom[10], vetorSomar[10];
    int iCont = 0;
    int random = 10;

    for(int i = 0; i < 10; i++){
        iCont += 2;
        random += 1;
        vetorPares[i] = iCont; 
        vetorRandom[i] = random;
        vetorSomar[i] = vetorPares[i] + vetorRandom[i];

        printf("vetor[%d] = %d\n", i, vetorSomar[i]);
    }
}

int questao10(int valorA, int valorB, int valorC){
    int resultado;

    if(valorA > valorC && valorB > valorC){
        resultado = valorA + valorB;
    } else if(valorB > valorA && valorC > valorA){
        resultado = valorB + valorC;
    } else if(valorA + valorB && valorC > valorB){
        resultado = valorA + valorC;
    } else {
        resultado = -1;
    }

    return resultado;
}

int questao11(int valor){
    if(valor % 2 == 0)
        return 0;
    else
        return 1;
}

int questao12(int valor){
    int resultado;

    resultado = valor * valor;

    return resultado;
}

float questao13(char opcao){
    float valorTotal;

    switch (opcao){
        case 'A':{
            float litros, desconto, valorLitro;
            valorLitro = 2.30;

            printf("Digite quantidade de litros: ");
            scanf("%f", &litros);

            if(litros <= 25){
                desconto = 2;
            } else if(litros > 25){
                desconto = 4;
            } else {
                desconto = 0;
            }

            float valordesconto = (desconto * valorLitro) / 100;
            valorLitro = valorLitro - valordesconto;
            valorTotal = valorLitro * litros;
            
            printf("-----\n");
            printf("qtd litros : %f\n", litros);
            printf("valor desconto: %f\n", valordesconto);
            printf("valor litro: %f\n", valorLitro);
            printf("valor total: %f\n", valorTotal);
            printf("-----\n\n");


            break;
        }

        case 'G':{
            float litros, desconto, valorLitro;
            valorLitro = 3.10;
            printf("Digite quantidade de litros: ");
            scanf("%f", &litros);

            if(litros <= 25){
                desconto = 3;
            } else if(litros > 25){
                desconto = 5;
            } else {
                desconto = 0;
            }

            float valordesconto = (desconto * valorLitro) / 100;
            valorLitro = valorLitro - valordesconto;
            valorTotal = valorLitro * litros;
            
            printf("-----\n");
            printf("qtd litros : %f\n", litros);
            printf("valor desconto: %f\n", valordesconto);
            printf("valor litro: %f\n", valorLitro);
            printf("valor total: %f\n", valorTotal);
            printf("-----\n\n");

            break;
        }
        
        default:{
            printf("Opcao incorreta!\n");
            break;
        }
    }

    return valorTotal;
}

float questao14(int tipo){
    float acres, valorPagar, desconto = 0;
    
    printf("Digite a quantidade de acres: ");
    scanf("%f", &acres); 

    if(acres > 1000){ desconto = 0.5; }

    switch(tipo){
        case 1: {
            printf("Opcao 1\n");
            float porAcre = 50;
            float valordesconto = (desconto * porAcre) / 100;

            printf("valor desconto: %f\n", valordesconto);
            porAcre = porAcre - valordesconto;
            valorPagar = porAcre * acres; 

            break;
        }

        case 2: {
            printf("Opcao 2\n");
            float porAcre = 100;
            float valordesconto = (desconto * porAcre) / 100;

            porAcre = porAcre - valordesconto;
            valorPagar = porAcre * acres; 

            break;
        }

        case 3: {
            printf("Opcao 3\n");
            float porAcre = 150;
            float valordesconto = (desconto * porAcre) / 100;
            
            porAcre = porAcre - valordesconto;
            valorPagar = porAcre * acres; 
            break;
        }

        case 4: {
            printf("Opcao 4\n");
            float porAcre = 250;
            float valordesconto = (desconto * porAcre) / 100;
            
            porAcre = porAcre - valordesconto;
            valorPagar = porAcre * acres; 

            break;
        }

        default: {
            printf("opcao incorreta!\n");
            break;
        }
    }

    if (valorPagar > 750.00){
        float maisDesconto = valorPagar / 10;
        valorPagar -= maisDesconto;
    }

    return valorPagar;
}

void questao15(int valor){
    if(valor % 10 == 0){
        printf("Divisível por 10\n");
        if(valor % 5 == 0){
            printf("Divisível por 5\n");
            if(valor % 2 == 0){
                printf("Divisível por 2\n");
            }
        }
    } else {
        printf("não é divisivel\n");
    } 
}

int questao17(float notaA, float notaB, float notaC){
    int resultado;

    float media = (notaA + notaB + notaC) / 3;
    printf("Média = %.1f\n", media);

    if(media < 5){
        resultado = 0;
    }  else{
        resultado = 1;
    }

    return resultado;
}

void questao19(){
    int i;

    for(i = 0; i <= 100; i++)
        printf("%d\n", i);
}

void questao20(){
    int j;

    for(j = 100; j >= 1; j--)
        printf("%d\n", j);
}

void questao21(){
    int k;

    for(k = 2; k <= 100; k+=2)
        printf("%d\n", k);
}

void questao22(){
    int soma, cont;
    soma = 0;

    for(cont = 0; cont <= 100; cont++){
        soma += cont;
        printf("%d\n", cont);
    }

    printf("soma = %d\n", soma);
}

float questao23(int A, int B, int C, int D, int E){
    float resultado;

    resultado = (A + B + C + D + E) / 5;

    return resultado;
}