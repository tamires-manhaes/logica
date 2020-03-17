
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
int questao11(int valor);
int questao12(int valor);
void questao15(int valor);
void questao19();
void questao20();
void questao21();
void questao22();
float questao23(int A, int B, int C, int D, int E);