// AEDS I - Arrays | Exercício nº 17
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 08/09/2021;

// Bibliotecas:
#include <iostream>
#include <locale.h>

using namespace std;

void determinante(){
	// Variáveis:
	float matriz[3][3], resultante = 0;
	// Execuções:
	for (int linha = 0; linha < 3; linha++){
		for (int coluna = 0; coluna < 3; coluna ++){
			cout << "- Insira o valor da " << linha+1 << "ª linha da " << coluna+1 << "ª coluna: ";
			cin >> matriz[linha][coluna];
		}
	}
	resultante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) - (matriz[0][2] * matriz[1][1] * matriz[2][0]) - (matriz[0][0] * matriz[1][2] * matriz[2][1]) - (matriz[0][1] * matriz[1][0] * matriz[2][2]);
	cout << endl << "O resultante da matriz em questão corresponde a: " << resultante;
}

int main(){
	// Caractéres especiais:
	setlocale (LC_ALL, "Portuguese");
	// Execuções:
	cout << "O programa em questão calcula o determinante de uma matriz 3x3." << endl << endl;
	determinante();
	return 0;
}
