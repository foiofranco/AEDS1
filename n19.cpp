// AEDS I - Arrays | Exercício nº 19
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 08/09/2021;

// Bibliotecas:
#include <iostream>
#include <locale.h>

using namespace std;

// Função auxiliar:
void determinante(){
	// Variáveis:
	int matriz[6][6], soma = 0, somaLinhas[6], somaColunas[6], numeroLinha = 0, numeroColuna = 0, maiorLinha = 0, maiorColuna = 0;
	// Implementação de valores:
	matriz[0][0] = 1; matriz[0][1] = 3; matriz[0][2] = 3; matriz[0][3] = 5; matriz[0][4] = 6; matriz[0][5] = 7;
	matriz[1][0] = 2; matriz[1][1] = 1; matriz[1][2] = 2; matriz[1][3] = 5; matriz[1][4] = 7; matriz[1][5] = 9;
	matriz[2][0] = 2; matriz[2][1] = 4; matriz[2][2] = 5; matriz[2][3] = 9; matriz[2][4] = 2; matriz[2][5] = 15;
	matriz[3][0] = 5; matriz[3][1] = 8; matriz[3][2] = 8; matriz[3][3] = 2; matriz[3][4] = 13; matriz[3][5] = 12;
	matriz[4][0] = 5; matriz[4][1] = 6; matriz[4][2] = 5; matriz[4][3] = 8; matriz[4][4] = 14; matriz[4][5] = 16;
	matriz[5][0] = 5; matriz[5][1] = 5; matriz[5][2] = 7; matriz[5][3] = 12; matriz[5][4] = 14; matriz[5][5] = 15;
	// Impressão da matriz:
	for (int linha = 0; linha < 6; linha++){
		for (int coluna = 0; coluna < 6; coluna++){
			cout << "\t" << matriz[linha][coluna];
		}
		cout << endl;
	}
	// Maior coluna:
	for (int coluna = 0; coluna < 6; coluna++){
		soma = 0;
		for (int linha = 0; linha < 6; linha++){
			soma += matriz[linha][coluna];
		}
		somaColunas[coluna] = soma;
		if (somaColunas[coluna] > maiorColuna){
			maiorColuna = somaColunas[coluna];
			numeroColuna = coluna;
		}
	}
	// Maior linha:
	for (int linha = 0; linha < 6; linha++){
		soma = 0;
		for (int coluna = 0; coluna < 6; coluna++){
			soma += matriz[linha][coluna];
		}
		somaLinhas[linha] = soma;
		if (somaLinhas[linha] > maiorLinha){
			maiorLinha = somaLinhas[linha];
			numeroLinha = linha;
		}
	}
	// Troca de valores maiores que 10 por 10:
	for(int linha = 0; linha < 6; linha++){
        for(int coluna = 0; coluna < 6; coluna++){
            if(matriz[linha][coluna] > 10){
                matriz[linha][coluna] = 10;
            }
        }
    }
    cout << endl << "=================================================================================" << endl;
	cout << endl << "Resultado: ";
	cout << endl << "- A coluna de nº " << numeroColuna+1 << " é a que possuir o maior somatório." << endl;
	cout << "- A linha de nº " << numeroLinha+1 << " é a que possuir o maior somatório." << endl;
	cout << "- Matriz após a troca de números maiores que dez por dez:" << endl << endl;
	
	// Impressão da matriz alterada:
	for (int linha = 0; linha < 6; linha++){
		for (int coluna = 0; coluna < 6; coluna++){
			cout << "\t" << matriz[linha][coluna];
		}
		cout << endl;
	}
}

int main(){
	// Caractéres especiais:
	setlocale (LC_ALL, "Portuguese");
	// Execuções:
	cout << "O programa em questão realiza as seguintes operações em relação a matriz abaixo: " << endl;
	cout << "- Determina a coluna com o maior somatório." << endl;
	cout << "- Determina a linha com maior somatório." << endl;
	cout << "- Substitui todo valor maior que dez por dez." << endl << endl;
	determinante();
	return 0;
}
