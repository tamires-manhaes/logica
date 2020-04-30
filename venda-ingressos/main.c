#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TAM 5

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
    pessoa cliente;
    float valorTotal;
    int vendido; // se vendido  = 1 , não = 0
}assento;

void menu();
void assentos();
void cadastroNaCadeira(int fileira, int cadeira);
void imprimirCadeiras(assento fileira[]);

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
                int cadeira = 0;
                printf("Digite fileria desejada: ");
                scanf("%d", &fileira);
                printf("Digite cadeira desejada: ");
                scanf("%d", &cadeira);
                cadastroNaCadeira(fileira, cadeira);
                break;
            }

            case 3: {
                
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
    printf("\t\t\t    (1)->[A] -- [1][2][3][4][5] --> $50,00\n");
    printf("\t\t\t    (2)->[B] -- [1][2][3][4][5] --> $45,00\n");
    printf("\t\t\t    (3)->[C] -- [1][2][3][4][5] --> $40,00\n");
    printf("\t\t\t    (4)->[D] -- [1][2][3][4][5] --> $35,00\n");
    printf("\t\t\t    (5)->[E] -- [1][2][3][4][5] --> $30,00\n");
    printf("\t\t\t------------------------------\n");
    printf("\n");
}

void cadastroNaCadeira(int fileira, int cadeira){
    float valorTotal = 0;

    

    if(fileira <= TAM){
        if(cadeira <= TAM){
            switch(fileira){
                case 1: {
                    printf("Fileira A:");
                    assento fileiraA[TAM];
                    valorTotal = 50.00;
                    int cadeira;
                    printf("Escolha cadeira: ");
                    scanf("%d", &cadeira);

                    if(fileiraA[cadeira].vendido == 1){
                        printf("Assento indisponivel\n");
                    }else {
                        printf("Nome: ");
                        fgets(fileiraA[cadeira].cliente.nome, 101, stdin);

                        printf("CPF: ");
                        fgets(fileiraA[cadeira].cliente.cpf, 12, stdin);

                        printf("Data de nascimento: \n");
                        printf("Dia: ");
                        scanf("%d", &fileiraA[cadeira].cliente.dataNascimento.dia);
                        printf("Mês: ");
                        scanf("%d", &fileiraA[cadeira].cliente.dataNascimento.mes);
                        printf("Ano: ");
                        scanf("%d", &fileiraA[cadeira].cliente.dataNascimento.ano);

                        printf("Eh estudante? [1] - Sim || [0] - Não: ");
                        scanf("%d", &fileiraA[cadeira].cliente.estudante);

                        if(fileiraA[cadeira].cliente.estudante == 1){
                            printf("Instituição de ensino: ");
                            fgets(fileiraA[cadeira].cliente.instituicao, 100, stdin);

                            valorTotal = valorTotal / 2;
                        }
                        fileiraA[cadeira].valorTotal = valorTotal;

                        printf("valor a pagar: %f", valorTotal);
                    }
                    imprimirCadeiras(fileiraA);
                    break;
                }

                case 2: {
                    printf("Fileira B: ");
                    assento fileiraB[5];
                    valorTotal = 45.00;
                    break;
                }

                case 3: {
                    printf("Fileira C: ");
                    assento fileirac[5];
                    valorTotal = 40.00;
                    break;
                }

                case 4: {
                    printf("Fileira D: ");
                    assento fileiraD[5];
                    valorTotal = 35.00;
                    break;
                }

                case 5: {
                    printf("Fileira E: ");
                    assento fileiraE[5];
                    valorTotal = 30.00;
                    break;
                }

                default: {
                    printf("Fileira inexistente, tente novamente!\n\n");
                    break;
                }
            }
        }else {
            printf("Cadeira inexistente, tente novamente!\n");
        }
    }else {
        printf("Fileira inexistente, tente novamente!\n");
    }
}

void imprimirCadeiras(assento fileiraA[]){
    for (int i = 0; i < TAM; i++){
        printf("---\n");
        printf("Nome: %s", fileiraA[i].cliente.nome);
        printf("Data de Nascimento: %d/%d/%d", fileiraA[i].cliente.dataNascimento.dia,
                                                fileiraA[i].cliente.dataNascimento.mes,
                                                fileiraA[i].cliente.dataNascimento.ano);
        if(fileiraA[i].cliente.estudante == 1){
            printf("Eh estudante: Sim");
            printf("Instituição: %s", fileiraA[i].cliente.instituicao);
        }
        printf("Valor pago: %f", fileiraA[i].valorTotal);
        printf("---\n");
    }
    
}
