// Tendo como base o sal�rio m�nimo em R$ 500,00, fa�a uma fun��o
// que receba o sal�rio de um cidad�o e calcule o imposto de renda
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

