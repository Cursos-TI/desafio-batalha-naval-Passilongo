#include <stdio.h>

#define LINHAS  10
#define COLUNAS  10

int main(){

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int inicioDiag = 1;
    int inicioDiagInversa = 7;
    int inicioTriangulo= 2;
    int centroColuna = COLUNAS / 2;

    int tabuleiro[LINHAS][COLUNAS] = {0};

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

    for (int i = 0; i < 3; i++){ //imprimindo 3 casas no tabuleiro Diagonal
                
        tabuleiro[inicioDiag + i][inicioDiag + i] = 3;
           
                /* if (i == j || i + j == 9){ // Diagonal e diagonal
                tabuleiro[i][j] = 3;
            }else {
                tabuleiro[i][j] = 0;
                }*/
        }

        for(int j = 0; j < 3; j++){
                int l = inicioDiagInversa + j;
                int c = (COLUNAS - 1) - (inicioDiagInversa + j); // Diagonal inversa
                tabuleiro[l][c] = 3;
            }

    for (int i = 0; i < 3; i++) {
        int larguraLinha = 2 * i + 1; // Número de casas na linha atual: 1, 3, 5...

        for (int j = 0; j < larguraLinha; j++) {
            tabuleiro[inicioTriangulo + i][centroColuna - i + j] = 2;
        }
    }

     // Configurações da cruz
    int tamanhoCruz = 3; // Tamanho da cruz 
    int inicioCruz = 8;   // Inicio da Cruz
    int centroColunaCruz = COLUNAS / 2; // Coluna central do tabuleiro 

    // Loop para desenhar a cruz
    for (int i = -1; i <= 1; i++) {
        // Linha horizontal
        tabuleiro[inicioCruz][centroColunaCruz + i] = 1;

        // Coluna vertical
        tabuleiro[inicioCruz + i][centroColunaCruz] = 1;
    }

       

    // Linhas da tabela

    /*for (int i = 0; i < 10; i++){
        printf(" %d \n", linha[i]);
    }*/


    // Tabela
    for (int i = 0; i < 10; i++){   //linhas da tabela 
        printf(" %d ", linha[i]);
        
        for (int j = 0; j < 10; j++){   // Casas do tabuleiro
          
            printf(" %d ", tabuleiro[i][j]);
            
        }
            printf("\n");
    }
    


    return 0;
}
//se o indice for impar imprime 3 na tela ex: 1, 3, 5..
