 // BATALHA NAVAL - ORGANIZAÇÃO POR FUNÇÕES
 #include <stdio.h>

 #define LINHAS 10
 #define COLUNAS 10
 #define NAVIO 3

 // 1. Função para criar e inicializar o tabuleiro com 0 (representa água)
 void criarTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
     for (int i = 0; i < LINHAS; i++) {
             fo r (int j = 0; j < COLUNAS; j++) {
                         tabuleiro[i][j] = 0;
                                 }
                                     }
                                     }

  // 2. Função para exibir o tabuleiro no console
  void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
      for (int i = 0; i < LINHAS; i++) {
              for (int j = 0; j < COLUNAS; j++) {
                          printf("%d ", tabuleiro[i][j]);
                                  }
                                          printf("\n");
                                              }
                                              }

// 3. Função para posicionar um navio horizontalmente (tamanho fixo 3 casas)
void posicionarNavioHorizontal(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna) {
    // Garante que as 3 casas do navio cabem dentro da linha sem ultrapassar o limite
        if (coluna + 2 < COLUNAS) {
                for (int j = 0; j < 3; j++) {
                            tabuleiro[linha][coluna + j] = NAVIO;
                                    }
                                        }
                                        }

// 4. Função para posicionar um navio verticalmente (tamanho fixo 3 casas)
 void posicionarNavioVertical(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna) {
     // Garante que as 3 casas do navio cabem dentro da coluna sem ultrapassar o limite
         if (linha + 2 < LINHAS) {
                 for (int i = 0; i < 3; i++) {
                             tabuleiro[linha + i][coluna] = NAVIO;
                                     }
                                         }
                                         }

// 5. Função para posicionar um navio na diagonal principal (linha e coluna crescem)
  void posicionarNavioDiagonalPrincipal(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna) {
      // Garante que o navio caiba na diagonal (sem ultrapassar a borda inferior/direita)
          if (linha + 2 < LINHAS && coluna + 2 < COLUNAS) {
                  for (int k = 0; k < 3; k++) {
                              tabuleiro[linha + k][coluna + k] = NAVIO;
                                      }
                                          }
                                          }

 // 6. Função para posicionar um navio na diagonal secundária (linha cresce, coluna decresce)
 void posicionarNavioDiagonalSecundaria(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna) {
     // Garante que o navio caiba na diagonal secundária (sem ultrapassar a borda inferior/esquerda)
         if (linha + 2 < LINHAS && coluna - 2 >= 0) {
                 for (int k = 0; k < 3; k++) {
                             tabuleiro[linha + k][coluna - k] = NAVIO;
                                     }
                                         }
                                         }
                                       
// 7. Função principal para testar o posicionamento dos navios no tabuleiro
 int main() {
     int tabuleiro[LINHAS][COLUNAS];

         criarTabuleiro(tabuleiro); // Inicializa todas as posições com 0 (água)

             // Posiciona 4 navios: dois retos e dois diagonais
                 posicionarNavioHorizontal(tabuleiro, 2, 1);           // Navio horizontal a partir da posição (2,1)
                     posicionarNavioVertical(tabuleiro, 4, 5);             // Navio vertical a partir da posição (4,5)
                         posicionarNavioDiagonalPrincipal(tabuleiro, 0, 0);    // Navio na diagonal principal a partir de (0,0)
                             posicionarNavioDiagonalSecundaria(tabuleiro, 0, 9);   // Navio na diagonal secundária a partir de (0,9)

                                 exibirTabuleiro(tabuleiro); // Exibe o tabuleiro no console

                                     return 0;
                                     }










































































































