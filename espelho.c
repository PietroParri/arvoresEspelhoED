//PIETRO BORGES PARRI GRR20204445


#include <stdio.h>

typedef struct arvore{
int info;
struct arvore *comeco;
struct arvore *fim;
} Arvore;

void main(){
}

int eh_espelho(Arvore * arv_a, Arvore * arv_b){

    if ( (arv_a==NULL) || (arv_b == NULL))
        return 0;

    if ( (arv_a==NULL) && (arv_b==NULL))
        return 1;

    return  (arv_a->info == arv_b->info) && (eh_espelho(arv_a->comeco, arv_b->fim)) &&  (eh_espelho(arv_a->fim, arv_b->comeco));
}

Arvore * cria_espelho(Arvore * arv_a){

    if (arv_a == NULL)
        return NULL;

    else {
        Arvore *dois;
        cria_espelho(arv_a->comeco);
        cria_espelho(arv_a->fim);

        dois->fim = arv_a->comeco;
        dois->comeco = arv_a->fim;

    return dois;
    }
}

