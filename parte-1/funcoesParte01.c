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