
typedef struct dados_transacao{
    char codigo[2];
    float valor;
}Transacao;

typedef struct pessoa{
    int idade;
    float peso;
    float altura;
    char corDosOlhos;
    char corDosCabelos;
}Pessoa;

void menu();
void questao01();
void questao02();
int questao03();
void questao04();
int questao06(int valor);
void questao07();
int questao10(int valorA, int valorB, int valorC);
int questao11(int valor);
int questao12(int valor);
float questao13(char opcao);
float questao14(int tipo);
void questao15(int valor);
int questao17(float notaA, float notaB, float notaC);
void questao18(int a, int b, int c);
void questao19();
void questao20();
void questao21();
void questao22();
float questao23(int A, int B, int C, int D, int E);