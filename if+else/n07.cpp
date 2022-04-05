// Tendo como base o salário mínimo em R$ 500,00, faça uma função
// que receba o salário de um cidadão e calcule o imposto de renda
// a declarar com base nas % tabeladas.

#include <iostream>

using namespace std;

float imposto (float x){
	float aux = 0;
	if (x <= 1500.0){
		aux = x * 0;
		cout << "Valor total a declarar: " << aux;
	}else{
		if(x <= 3000.0){
			aux = x * 0.12;
			cout << "Valor total a declarar: " << aux;
		}else{
			if(x <= 4000.0){
				aux = x * 0.20;
				cout << "Valor total a declarar: " << aux;
			}else{
				aux = x * 0.27;
				cout << "Valor total a declarar: " << aux;
				}
		}
	}
	return aux;
}

int main (){
	float salario = 0;
	cout << "Informe o valor de seu salario: " << endl;
	cin >> salario;
	imposto(salario);
	return 0;
}

