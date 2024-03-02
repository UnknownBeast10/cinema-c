#include <stdio.h>

void gostou();

void filme() {
    int filme;
    Filme:
    printf("1 2 3 4 5\n");
    printf("Escolha seu Filme: ");
    scanf("%d", &filme);

    if(filme <= 5) {
        gostou(filme);
    } else {
        printf("Esse filme nao e valido!\n");
        printf("Tente novamente!\n");
        goto Filme;
    }
}

void gostou(int filme) {
    int nota; 
    Nota:
    printf("Gostou do Filme: %d? de 1 a 10 qual sua nota? ", filme);
    scanf("%d", &nota);
    if(nota <= 10) {
        printf("Obrigado pela critica! Volte sempre.\n");
    } else if(nota > 10) {
        printf("Essa nota nao e valida!\n");
        printf("Tente novamente!\n");
        goto Nota;
    } else if(nota < 0) {
        printf("Essa nota nao e valida!\n");
        printf("Tente Novamente!\n");
        goto Nota;
    }
}

int main() {
    char ingressos;
    Inicio:
    printf("Ola bem-vindo ao cinema deseja comprar um ingresso? [S - N] ");
    scanf("%c", &ingressos);
    Cadeira:
    switch(ingressos) {
        case 's':
        case 'S':
            printf("1 2 3 4 5\n");
            printf("Escolha sua cadeira: ");
            int cadeira;
            scanf("%d", &cadeira);
            if(cadeira <= 5) {
                filme();
            } else {
                printf("Essa cadeira nao e valida!\n");
                printf("Tente novamente!\n");
                goto Cadeira;
            }
            break;
        case 'n':
        case 'N':
            printf("\nOk, Volte Sempre!\n");
            break;    
        default:
            printf("Esse valor nao existe!\n");
            printf("Volte ao Inicio!\n");
            goto Inicio;
            break;
    }
    return 0;
}