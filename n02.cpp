// AEDS I - Arrays | Exercício nº 02
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 08/09/2021;

// Bibliotecas:
#include <iostream>
#include <locale.h>

using namespace std;

// Função auxiliar:
void leitura (){
	// Variáveis:
	float numero = 0, Q[20], maior = 0;
	int posicao = 0;
	// Execuções:
	for(int i = 0; i < 20; i++){
		cout << "- Digite o " << i+1 << "º número: ";
		cin >> numero;
		while (numero < 0){
			cout << "- Digite um número positivo (maior ou igual zero): ";
			cin >> numero;
		}
		Q[i] = numero;
		if (Q[i] > maior){
			maior = Q[i];
			posicao = i+1;
		}
		
	}
	cout << endl << "O maior número inserido corresponde a " << maior << " e ocupa a posição de nº " << posicao << " do vetor.";
}

// Função principal:
int main(){
	// Caractéres especiais:
	setlocale (LC_ALL, "Portuguese");
	// Execuções:
	cout << "O programa em questão:" << endl;
	cout << "- Lê e armazena vinte números positivos em um vetor." << endl;
	cout << "- Imprime o maior e revela sua posição em meio ao vetor armazenado." << endl << endl;
	leitura();
	return 0;
}
