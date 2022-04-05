// Faça uma função que receba uma idade e verifique se está
// apto a votar ou não. Depois chame na função main();
#include <iostream>

using namespace std;

void verificar (int x){
	if(x >= 18){
		cout << "Apto a votar.";
	}
	else{
		cout << "Inapto a votar.";
	}
}

int main (){
	int idade = 0;
	cout << "Informe sua idade:" << endl;
	cin >> idade;
	verificar(idade);
	return 0;
}

