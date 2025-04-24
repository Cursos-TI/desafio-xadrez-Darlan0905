#include <stdio.h>

int main(){
    int torre, bispo = 0, rainha = 0;
    //torre a 5 Casas para a direita
    printf("Torre\n");
    for ( torre = 0; torre < 5; torre++)
    {
        printf("Direita ");
    }
    printf("\n");
    
    printf("\nBISPO\n");
    while (bispo < 5)
    {   printf("Cima, Direita\n");
        bispo ++;
    }

    printf("\nRainha\n");

    do{
        printf("Baixo\n");
        rainha ++;
    } while (rainha < 5);
    
    

    
}