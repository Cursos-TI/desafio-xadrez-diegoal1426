#include <stdio.h>

//procedimentos recursivos
//procedimento de movimento da torre
void movimentaTorre(int movimento){
    if(movimento > 0){
        printf("Direita\n");
        movimentaTorre(movimento-1);
    }
}

//procedimento de movimento do bispo
void movimentaBispo(int movimento){
    if(movimento > 0){
        printf("Cima Direita\n");
        movimentaBispo(movimento-1);
    }
}

//procedimento de movimento da rainha
void movimentaRainha(int movimento){
    if(movimento > 0){
        printf("Esquerda\n");
        movimentaRainha(movimento-1);
    }
}

//programa principal
int main() {
    //variáveis de movimento
    const int moveTorre = 5;
    const int moveBispo = 5;
    const int moveRainha = 8;
    int moveCavalo = 1;

    //Movimento da torre
    printf("## Torre ##\n");
    movimentaTorre(moveTorre);

    //Movimento do Bispo
    printf("\n## Bispo ##\n");
    movimentaBispo(moveBispo);
    
    //Movimento da Rainha
    printf("\n## Rainha ##\n");
    movimentaRainha(moveRainha);
    
    //movimento do cavalo
    printf("\n## Cavalo ##\n");
    for(int i = 0, j = 6; i < 3 & j > 3;i++,j--){
        if(i < 2){
            printf("Cima\n");
        }
        if(j==4){
            printf("Direita\n");
        }
    }
    
    return 0;
}
