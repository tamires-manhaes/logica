#include <stdio.h>
#include "moduloFuncoes02.h"

int main(){

    int opcao, exit = 0;

    while(!exit){
        menu();
        scanf("%d", &opcao);

        switch(opcao){
            case 0: {
                printf("Finalizando...");
                exit = 1;
                break;
            }

            default: {
                printf("Opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }

    return 0;
}