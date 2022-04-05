// Atividade - AEDs | Exercício nº 4;
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 28/07/2021

#include <iostream>

using namespace std;

void crescimento (float a1, float a2, float tdca1, float tdca2){
	// a = altura | tdca = taxa de crescimento anual;
	int anos = 0;
	tdca1 = tdca1/100;
	tdca2 = tdca2/100;
	while (a1 < a2){
		a1 = a1 + tdca1;
		a2 = a2 + tdca2;
		anos++;
	}
	cout << endl << "*************************************************************************************************" << endl;
	cout << "- Serao necessarios "<< anos << " anos para o primeiro individuo ultrapassar o segundo em altura." << endl;
	cout << "*************************************************************************************************" << endl;
}

int main(){
	float a1, a2, tdca1, tdca2;
	// a = altura | tdca = taxa de crescimento anual;
	cout << "*************************************************************************************************" << endl;
	cout << "O programa em questao calcula o tempo necessario para um individuo ultrapassar o outro em altura." << endl;
	cout << "*************************************************************************************************" << endl;
	cout << endl << "- Informe a altura atual do menor individuo (em metros): ";
	cin >> a1;
	cout << endl << "- Informe a altura atual do maior individuo (em metros): ";
	cin >> a2;
	cout << endl << "- Informe a taxa de crescimento anual do primeiro individuo (centimetros): ";
	cin >> tdca1;
	cout << endl << "- Informe a taxa de crescimento anual do segundo individuo (centimetros): ";
	cin >> tdca2;
	if (tdca1 < tdca2){
		cout << endl << "*************************************************************************************************" << endl;
		cout << "- O primeiro individuo sera sempre menor que o segundo em altura.";
		cout << endl << "*************************************************************************************************" << endl;
	}else{
		crescimento(a1, a2, tdca1, tdca2);
	}
	return 0;
}
