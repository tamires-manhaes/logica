#include <stdio.h>
#include "moduloFuncoes.h"

#define PI 3.14
#define COUNT 18

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 1\n");
    printf("\t\t\t%d de 29 questões respondidas\n", COUNT);
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 01\n");
    printf("\t\t\t2 - questao 02\n");
    printf("\t\t\t3 - questao 03\n");
    printf("\t\t\t4 - questao 04\n");
    printf("\t\t\t5 - questao 05\n");
    printf("\t\t\t6 - questao 06\n");
    printf("\t\t\t7 - questao 07\n");
    printf("\t\t\t8 - questao 08\n");
    printf("\t\t\t9 - questao 09\n");
    printf("\t\t\t11 - questao 11\n");
    printf("\t\t\t12 - questao 12\n");
    printf("\t\t\t18 - questao 18\n");
    printf("\t\t\t21 - questao 21\n");
    printf("\t\t\t23 - questao 23\n");
    printf("\t\t\t24 - questao 24\n");
    printf("\t\t\t25 - questao 25\n");
    printf("\t\t\t26 - questao 26\n");
    printf("\t\t\t29 - questao 29\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\tDigite opcao desejada: ");
}

void questao01(float base, float altura){
    float area, perimetro;

    area = base * altura;
    perimetro = ((2 * base) + (2 * altura));

    printf("perimetro: %1.f | altura: %1.f\n", perimetro, area);
}

void questao02(float lado){

    float area = lado * 4;
    float perimetro = lado * lado;

    printf("area: %.1f | perimetro: %.1f\n", area, perimetro);
}

void questao03(float raio){

    float area = PI * (raio * raio);    
    float perimetro = 2 * PI * raio;

    printf("area: %.1f | perimetro: %.1f\n", area, perimetro);
} 

float questao04(float lado){

    return 3 * lado;
}

int questao05(int numero){
    return numero+1;
}

void questao06(int valorA, int valorB){

    int quociente = valorA / valorB;
    int resto = valorA % valorB;

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

    return (tempFarh - 32) * 5 / 9;
}

float questao09(float raio, float altura){

    return (PI * (raio * raio)) * altura;
}

void questao10(int numero){
    
}

float questao11(float Bi1nota1, float Bi1nota2, float Bi2nota1, float Bi2nota2){
    float media, Bi1, Bi2;

    Bi1 = Bi1nota1 + Bi1nota2;
    Bi2 = Bi2nota1 + Bi2nota2;

    media = (Bi1 + Bi2) / 2;

    return media;
}

float questao12(float velocidadeMs){

    return velocidadeMs * 3.6;
}

void questao17(float valor){
    
}

void questao18(int var1, int var2){
    int aux;

    aux = var1;
    var1 = var2;
    var2 = aux;

    printf("Valor 1 = %d\n", var1);
    printf("Valor 2 = %d\n", var2);
}

int questao21(int numero){
    int resposta;

    if(numero > 0){ resposta = 0; } 
        else { resposta = 1; }

    return resposta;
}

int questao23(int numero){
    int resposta;

    if(numero % 2 == 0){ resposta = 0; } 
        else { resposta = 1; }

    return resposta;
}

int questao24(int valorA, int valorB, int valorC){
    int maior;

    if(valorA > valorB && valorA > valorC){  maior = valorA; } 
        else if(valorB > valorA && valorB > valorC){ maior = valorB; } 
            else if(valorC > valorB && valorC > valorA){ maior = valorC; } 
                else { maior = 0; }

    return maior;
}

int questao25(int mes){
    int qtdDias;

    switch (mes){
        case 1:  { qtdDias = 31; break; }
        case 2:  { qtdDias = 29; break; }
        case 3:  { qtdDias = 31; break; }
        case 4:  { qtdDias = 30; break; }
        case 5:  { qtdDias = 31; break; }
        case 6:  { qtdDias = 30; break; }
        case 7:  { qtdDias = 31; break; }
        case 8:  { qtdDias = 31; break; }
        case 9:  { qtdDias = 30; break; }
        case 10: { qtdDias = 31; break; }
        case 11: { qtdDias = 30; break; }
        case 12: { qtdDias = 31; break; }   
        default: { printf("Mes incorreto, tente novamente!\n"); break; }
    }

    return qtdDias;
}

int questao26(int A, int B, int C){
    int resultado;

    if(A < B && A < C)  resultado = B + C;
        else if(B < A && B < C)  resultado = A + C;
                else if(C < A && C < B)  resultado = A + B;
                        else  resultado = -1;

    return resultado;
}

float questao27(float notaA, float notaB, float notaC){
    float media;
    float maior = 0;
    if(notaA > notaB && notaA > notaC){
        maior = notaA;
        media = ((maior * 5) + (notaB * 2.5) + (notaC * 2.5) / 10);
    }else if(notaB > notaA && notaB > notaC){
        maior = notaB;
        media = ((maior * 5) + (notaA * 2.5) + (notaC * 2.5) / 10);
    } else if (notaC > notaA && notaC > notaB){
        maior = notaC;
        media = ((maior * 5) + (notaB * 2.5) + (notaA * 2.5) / 10);
    }else {
        printf("Ocorreu um erro ao calcular média");
        media = 0;
    }

    return media;
}

float questao29(float salario){
    float valorDescontado, desconto, descontoMaximo;

    desconto = 11;
    descontoMaximo = 334.29;
    valorDescontado = (desconto * salario) / 100;

    if(valorDescontado > descontoMaximo) { valorDescontado = descontoMaximo; }

    return valorDescontado;
}