// Fa�a uma fun��o que receba uma idade e verifique se est�
// apto a votar ou n�o. Depois chame na fun��o main();
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

