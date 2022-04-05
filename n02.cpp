// AEDS I - Arrays | Exerc�cio n� 02
// Nome: Jo�o Francisco da Silva Franco | Matr�cula: 2021008720 | Data: 08/09/2021;

// Bibliotecas:
#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o auxiliar:
void leitura (){
	// Vari�veis:
	float numero = 0, Q[20], maior = 0;
	int posicao = 0;
	// Execu��es:
	for(int i = 0; i < 20; i++){
		cout << "- Digite o " << i+1 << "� n�mero: ";
		cin >> numero;
		while (numero < 0){
			cout << "- Digite um n�mero positivo (maior ou igual zero): ";
			cin >> numero;
		}
		Q[i] = numero;
		if (Q[i] > maior){
			maior = Q[i];
			posicao = i+1;
		}
		
	}
	cout << endl << "O maior n�mero inserido corresponde a " << maior << " e ocupa a posi��o de n� " << posicao << " do vetor.";
}

// Fun��o principal:
int main(){
	// Caract�res especiais:
	setlocale (LC_ALL, "Portuguese");
	// Execu��es:
	cout << "O programa em quest�o:" << endl;
	cout << "- L� e armazena vinte n�meros positivos em um vetor." << endl;
	cout << "- Imprime o maior e revela sua posi��o em meio ao vetor armazenado." << endl << endl;
	leitura();
	return 0;
}
