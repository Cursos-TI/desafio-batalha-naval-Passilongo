#include <stdio.h>

#define LINHAS = 10
#define COLUNAS = 10

int main(){

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

   /* tabuleiro [3][4] = 3;
    tabuleiro [3][5] = 3;
    tabuleiro [3][6] = 3;

    tabuleiro [7][2] = 3;
    tabuleiro [8][2] = 3;
    tabuleiro [9][2] = 3;*/

    printf("***** TABULEIRO BATALHA NAVAL ***** \n\n");
    printf("  ");

    

    for (int j = 0; j < 10; j++){ //Colunas da Tabela
        printf("  %c", coluna[j]);
       
    }
    printf("\n");

    // Linhas da tabela

    /*for (int i = 0; i < 10; i++){
        printf(" %d \n", linha[i]);
    }*/


    // Tabela
    for (int i = 0; i < 10; i++){   //linhas da tabela 
        printf(" %d ", linha[i]);
        for (int j = 0; j < 10; j++){   // Casas do tabuleiro
                  
               
            for (int i = 0; i < 3; i++){ //imprimindo 3 casas no tabuleiro
            if (i == j || i + j == 9){ // Diagonal e diagonal
                tabuleiro[i][j] = 3;
            }else {
                tabuleiro[i][j] = 0;
                }
            }

          
            
            printf(" %d ", tabuleiro[i][j]);
        }
            printf("\n");
    }
    


    return 0;
}