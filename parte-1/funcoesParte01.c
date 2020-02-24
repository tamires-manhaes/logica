#include <stdio.h>
#include "moduloFuncoes.h"

#define PI 3.14

void menu(){
    printf("-----------------------------------\n");
    printf("0 - sair\n");
    printf("1 - questao 01\n");
    printf("2 - questao 02\n");
    printf("3 - questao 03\n");
    printf("4 - questao 04\n");
    printf("5 - questao 05\n");
    printf("6 - questao 06\n");
    printf("7 - questao 07\n");
    printf("8 - questao 08\n");
    printf("11 - questao 11\n");
    printf("12 - questao 12\n");
    printf("18 - questao 18\n");
    printf("-----------------------------------\n");
    printf("Digite opcao desejada: ");
}

void questao1(float base, float altura){
    float area, perimetro;

    area = base * altura;
    perimetro = ((2 * base) + (2 * altura));

    printf("perimetro: %1.f | altura: %1.f\n", perimetro, area);
}

void questao2(float lado){
    float area, perimetro;

    area = lado * 4;
    perimetro = lado * lado;

    printf("area: %.1f | perimetro: %.1f\n", area, perimetro);
}

void questao3(float raio){
    float area, perimetro;

    area = PI * (raio * raio);    
    perimetro = 2 * PI * raio;

    printf("area: %.1f | perimetro: %.1f\n", area, perimetro);
} 

float questao4(float lado){
    float perimetro;

    perimetro = 3 * lado;

    return perimetro;
}

int questao5(int numero){
    return numero+1;
}

void questao6(int valorA, int valorB){
    int quociente, resto;

    quociente = valorA / valorB;
    resto = valorA % valorB;

    printf("quociente: %d | resto: %d\n", quociente, resto);
}

void questao07(int dia, int mes, int ano){
    int diaAtual, mesAtual, anoAtual;
    int anos, meses, dias;

    printf("dia atual: "); scanf("%d", &diaAtual);
    printf("mes atual: "); scanf("%d", &mesAtual);
    printf("ano atual: "); scanf("%d", &anoAtual);

    printf("ano digitado: %d\n", ano);

    anos = anoAtual - ano;
    
    printf("%d anos \n", anos);
}

float questao08(float tempFarh){
    float tempCelsius;

    tempCelsius = (tempFarh - 32) * 5 / 9;

    return tempCelsius;
}

void questao10(int numero){
    char binario;
    if(numero < 32){
        
    }
}

float questao11(float Bi1nota1, float Bi1nota2, float Bi2nota1, float Bi2nota2){
    float media, Bi1, Bi2;

    Bi1 = Bi1nota1 + Bi1nota2;
    Bi2 = Bi2nota1 + Bi2nota2;

    media = (Bi1 + Bi2) / 2;

    return media;
}

float questao12(float velocidadeMs){
    float velocidadeKm;

    velocidadeKm = velocidadeMs * 3.6;

    return velocidadeKm;
}

void questao18(int var1, int var2){
    int aux;

    aux = var1;
    var1 = var2;
    var2 = aux;

    printf("Valor 1 = %d\n", var1);
    printf("Valor 2 = %d\n", var2);
}
