// Atividade - AEDs | Exerc�cio n� 3;
// Nome: Jo�o Francisco da Silva Franco | Matr�cula: 2021008720 | Data: 28/07/2021

#include <iostream>

using namespace std;

void pesquisa (float salario, int filhos){
	// Vari�veis:
	float somasalario = 0, maiorsalario = 0, salariocem = 0, mediasalario = 0, somafilhos = 0, mediafilhos = 0, percentualsalariocem = 0;
	int habitantes = 0;
	while (salario >= 0){
		cout << endl << "Digite o valor do salario: R$ ";
		cin >> salario;
		if (salario >= 0){
			cout << "Digite o numero de filhos: ";
			cin >> filhos;
			// Sal�rio da popula��o:
			somasalario = somasalario + salario;
			habitantes++;
			// Filhos da popula��o:
			somafilhos = somafilhos + filhos;
			// Maior sal�rio;
			if (salario > maiorsalario){
			maiorsalario = salario;
			}
			// Pessoas com sal�rio at� R$ 100,00:
			if (salario <= 100){
			salariocem++;
			}
		}		
	}
	// M�dia dos sal�rios da populacao:
	mediasalario = somasalario/habitantes;
	// M�dia dos filhos da popula��o:
	mediafilhos = somafilhos/habitantes;
	// Percentual de pesssoas com o sal�rio at� R$ 100,00.
	percentualsalariocem = (salariocem*100)/habitantes;
	// Dados:
	cout << endl << "Dados:" << endl;
	cout << "- Media dos salarios da populacao: R$ " << mediasalario << endl;
	cout << "- Media do numero de filhos: " << mediafilhos << endl;
	cout << "- Maior salario: R$ " << maiorsalario << endl;
	cout << "- Percentual de pessoas com salario ate R$ 100,00: " << percentualsalariocem << "%.";
}

int main (){
	// Vari�veis:
	float salario = 0;
	int filhos = 0;
	// Op��es:
	cout << "O programa em questao realiza uma pesquisa a servico de um municipio." << endl;
	cout << "Contendo:" << endl;
	cout << endl << "- A media dos salarios da populacao." << endl;
	cout << "- A media do numero de filhos da populacao." << endl;
	cout << "- O maior salario da populacao." << endl;
	cout << "- O percentual de pessoas com salario ate' R$ 100,00 da populacao." << endl;
	cout << endl << "Para obter os dados acima, insira o salario seguido do numero de filhos de cada habitante." << endl;
	cout << "Para finalizar a operacao e obter os dados, insira um numero negativo." << endl;
	// Fun��o:
	pesquisa(salario, filhos);
	return 0;
}
