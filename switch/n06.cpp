// Atividade - AEDs | Exercício nº 6;
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 28/07/2021

#include <iostream>

using namespace std;

// Função:
void eleicao (int voto){
	// Variáveis:
	int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;
	do{
		// Inserção de voto:
		cout << "Insira votos: ";
		cin >> voto;
		// Opções de voto:
		switch (voto){
			case 1:
				candidato1++;
				break;
			case 2:
				candidato2++;
				break;
			case 3:
				candidato3++;
				break;
			case 4:
				candidato4++;
				break;
			case 5:
				nulo++;
				break;
			case 6:
				branco++;
				break;
			default:
				cout << endl << "Opcao de candidato invalida!" << endl << endl;
		}
	}while (voto != 0);
	// Resultado:
	cout << endl << "Resultado:" << endl;
	cout << "- O candidato 1 recebeu o total de " << candidato1 << " votos." << endl;
	cout << "- O candidato 2 recebeu o total de " << candidato2 << " votos." << endl;
	cout << "- O candidato 3 recebeu o total de " << candidato3 << " votos." << endl;
	cout << "- O candidato 4 recebeu o total de " << candidato4 << " votos." << endl;
	cout << endl << "- Houve o total de " << nulo << " votos nulos." << endl;
	cout << "- Houve o total de " << branco << " votos em branco." << endl;
}

int main (){
	int voto = 0;
	// Opções de voto:
	cout << "O programa em questao tem carater eleitivo." << endl << endl;
	cout << "- Digite 1 para emitir voto ao candidato 1;" << endl;
	cout << "- Digite 2 para emitir voto ao candidato 2;" << endl;
	cout << "- Digite 3 para emitir voto ao candidato 3;" << endl;
	cout << "- Digite 4 para emitir voto ao candidato 4;" << endl;
	cout << "- Digite 5 para emitir um voto nulo;" << endl;
	cout << "- Digite 6 para emitir um voto em branco;" << endl << endl;
	// Função:
	eleicao(voto);
	return 0;
}
