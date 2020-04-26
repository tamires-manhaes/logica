#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct DMA{
    int dia;
    int mes;
    int ano;
}dma;

typedef struct Pessoa{
    char nome[100];
    char cpf[11];
    dma dataNascimento;
    int estudante; // se estudante  = 1 , não = 0
    char instituicao[100];
}pessoa;

typedef struct Assento{
    char fileira;
    int assento;
    pessoa cliente;
    float valorTotal;
}assento;

void menu();
void assentos();
int converterChar(char Char);
void fileiras(int fileira);

int main(){
    int sair, opcao;
    sair = 0;

    while(!sair){
        menu();
        scanf("%d", &opcao);

        switch (opcao){
            case 0:{
                sair = 1;
                printf("Finalizando...\n");
                break;
            }

            case 1:{
                printf("\t\t\tExibindo assentos: \n");
                printf("\n");
                assentos();
                break;
            }

            case 2: {
                printf("\t\t\tComprar ingressos: \n");
                assentos();

                int fileira = 0;
                printf("Digite fileria desejada: ");
                scanf("%d", &fileira);
                fileiras(fileira);
                break;
            }
            
            default:{
                printf("\n");
                printf("\t\t\tOpcao incorreta, tente novamente!\n");
                break;
            }
        }
    }

    return 0;
}

void menu(){
    printf("\t\t\t-------------------------------\n");
    printf("\t\t\t ----- VENDA DE INGRESSO ----- \n");
    printf("\t\t\t 0 - Sair\n");
    printf("\t\t\t 1 - Exibir assentos\n");
    printf("\t\t\t 2 - Comprar ingressos\n");
    printf("\t\t\t------------------------------\n");
    printf("\t\t\t Digite opcao desejada: ");
}

void assentos(){
    printf("\n");
    printf("\t\t\t------------------------------\n");
    printf("\t\t\t    (1)->[A] -- [1][2][3][4][5]\n");
    printf("\t\t\t    (2)->[B] -- [1][2][3][4][5]\n");
    printf("\t\t\t    (3)->[C] -- [1][2][3][4][5]\n");
    printf("\t\t\t    (4)->[D] -- [1][2][3][4][5]\n");
    printf("\t\t\t    (5)->[E] -- [1][2][3][4][5]\n");
    printf("\t\t\t------------------------------\n");
    printf("\n");
}

void fileiras(int fileira){
    switch(fileira){
        case 1: {
            printf("Fileira A:");
            assento fileiraA[5];
            break;
        }

        case 2: {
            printf("Fileira B: ");
            assento fileiraB[5];
            break;
        }

        case 3: {
            printf("Fileira C: ");
            assento fileirac[5];
            break;
        }

        case 4: {
            printf("Fileira D: ");
            assento fileiraD[5];
            break;
        }

        case 5: {
            printf("Fileira E: ");
            assento fileiraE[5];
            break;
        }

        default: {
            printf("Fileira inexistente, tente novamente!\n\n");
            break;
        }
    }
}