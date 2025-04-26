#include <stdio.h>


void torre(int numero){
    if (numero > 0){ // Enquanto numero for maior que 0
        printf("Cima \n", numero);
        torre(numero - 1);
    }
}

void rainha(int numero){
    if (numero > 0){ // Enquanto numero for maior que 0
        printf("Baixo\n",numero);
        rainha(numero - 1);
    }
}

void cavalo (int numero){
while (numero--){
    for (int i = 0; i < 2; i++){ // Loop interno que repete 2 vezes por cada iteração do while
        printf("Cima\n");  // Imprime "Cima" seguido de uma nova linha
    }
    printf("Direita\n");  // Imprime "Direita" seguido de uma nova linha
    
}
}

void bispo(int numero){
     // Loop externo: repete o bloco abaixo 'numero' vezes
    for (int i = 0; i < numero; i++) {
    // Loop interno: executa apenas 1 vez, serve só pra mostrar uso de loop aninhado
        for (int j = 0; j < 1; j++) {
            printf("Cima "); // Imprime "Cima " (com espaço)
        }
        printf("Direita\n"); //Imprime "Direita" e quebra a linha
    }
}
    

int main(){
    
    int casastorre = 5, casasbispo = 5, casasrainha = 5, casascavalo = 1; // declarando as variaveis e o tanto de casa que vão andar

    printf("Torre\n");
    torre(casastorre); // chamando a função
    printf("\n");

    printf("Rainha\n");
    rainha(casasrainha);
    printf("\n");

    printf("Bispo\n");
    bispo(casasbispo);
    printf("\n");

    printf("Cavalo \n");
    cavalo(casascavalo);
    printf("\n");

    
}